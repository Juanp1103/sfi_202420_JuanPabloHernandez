# sfi_202420_JuanPabloHernandez

lastTime = currentTime;: Esta línea de código asigna el valor de la variable currentTime a la variable lastTime. Esto puede sugerir que el programa está registrando el momento actual para usarlo más adelante como referencia.

Serial.print(currentTime);: Aquí, el valor de la variable currentTime se imprime en el monitor serial. El monitor serial es una herramienta útil para depurar y monitorear datos en tiempo real cuando se desarrolla con microcontroladores como Arduino.

Serial.print('\n');: Este código imprime un carácter de nueva línea ('\n') en el monitor serial. Esto puede ser útil para formatear la salida y hacerla más legible en el monitor serial.

En resumen, este fragmento de código parece estar registrando y mostrando el tiempo actual en el monitor serial, lo que puede ser útil para entender el comportamiento del programa en tiempo real durante su ejecución.


La función millis() en Arduino devuelve el número de milisegundos desde que el programa empezó a ejecutarse. Es una función útil para medir el tiempo transcurrido o para controlar eventos en un programa Arduino sin bloquearlo, ya que no espera a que ocurran eventos como lo haría la función delay(). En lugar de eso, el programa puede seguir ejecutándose mientras verifica periódicamente el valor devuelto por millis() para determinar si ha transcurrido cierta cantidad de tiempo desde el inicio del programa o desde el último evento. Esto permite que el Arduino realice múltiples tareas simultáneamente sin detenerse.