# sfi_202420_JuanPabloHernandez

En este ejercicio existen 2 posibles escenarios: 

1. Buffer Suficientemente Lleno: Si hay al menos 3 bytes en el buffer, se leerán los tres bytes como se espera. dataRx1, dataRx2, y dataRx3 recibirán los valores de los primeros tres bytes del buffer.

2. Buffer No Suficientemente Lleno: Si solo hay 2 bytes disponibles, el primer Serial.read() leerá el primer byte. El segundo Serial.read() leerá el segundo byte, pero cuando se llegue al tercer Serial.read(), el buffer ya estará vacío y Serial.read() devolverá -1.