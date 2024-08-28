# sfi_202420_JuanPabloHernandez

- Serial.available() devuelve el número de bytes que están disponibles para leer en el buffer de recepción del puerto serial.

- Serial.read() lee el siguiente byte disponible del buffer de recepción y lo devuelve como un valor de tipo int. Este byte es leído del buffer y el buffer se actualiza para reflejar el nuevo estado.

- Si llamas a Serial.read() cuando no hay datos en el buffer, la función devolverá -1. Esto indica que el buffer de recepción está vacío y no hay datos disponibles para leer.

- Serial.read() lee un solo byte a la vez del buffer de recepción. Cada llamada a Serial.read() solo recupera el siguiente byte disponible.

- Se debe hacer múltiples llamadas a Serial.read(). En cada llamada se lee un solo byte, por lo que si esperas recibir una secuencia de bytes, se necesita llamar a Serial.read() repetidamente en un bucle.

- Si no llamas a Serial.read(), los datos permanecerán en el buffer, pero no podrás procesarlos. El buffer mantendrá los datos hasta que se lean, o hasta que se sobrescriban si el buffer se llena.