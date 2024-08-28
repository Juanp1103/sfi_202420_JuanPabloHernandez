#include <Arduino.h>

class SerialTask {
private:
    static const int BUFFER_SIZE = 32;
    uint8_t buffer[BUFFER_SIZE];
    uint8_t dataCount;
    uint8_t head;
    uint8_t tail;

public:
    SerialTask() : dataCount(0), head(0), tail(0) {}

    void update() {
        while (Serial.available() > 0) {
            if (dataCount < BUFFER_SIZE) {
                uint8_t data = Serial.read();

                buffer[tail] = data;
                tail = (tail + 1) % BUFFER_SIZE;
                dataCount++;
            } else {
                Serial.println("Buffer lleno, datos perdidos.");
                break;
            }
        }
    }

    uint8_t getDataCount() const {
        return dataCount;
    }

    uint8_t readData() {
        if (dataCount > 0) {
            uint8_t data = buffer[head];
            head = (head + 1) % BUFFER_SIZE;
            dataCount--;
            return data;
        }
        return 0;
    }

    void clearBuffer() {
        head = 0;
        tail = 0;
        dataCount = 0;
    }
};

SerialTask serialTask;

void setup() {
    Serial.begin(115200);
}

void loop() {
    serialTask.update();

    if (serialTask.getDataCount() > 0) {
        uint8_t data = serialTask.readData();
        Serial.print("Datos procesados: ");
        Serial.println(data);
    }
}
