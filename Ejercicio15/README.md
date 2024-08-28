# sfi_202420_JuanPabloHernandez

- ¿Por qué es necesario declarar rxData como static?

Si rxData no fuera static, en cada llamada a task1(), el arreglo sería re-inicializado y perdería los datos almacenados previamente. Como resultado, el código no podría acumular datos y procesarlos correctamente.

- ¿Por qué se declara dataCounter como static y se inicializa en 0?

La declaración static asegura que dataCounter mantenga su valor entre diferentes llamadas a la función task1(), permitiendo así contar correctamente los bytes recibidos antes de procesarlos.

- ¿Por qué se resta 0x30 en la expresión sum = sum + (pData[i] - 0x30); en processData?

Sin esta resta, los valores seguirían siendo los valores ASCII de los caracteres, y no los valores numéricos que queremos procesar.
