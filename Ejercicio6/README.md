# sfi_202420_JuanPabloHernandez

En esta parte tendremos que analizar unas lineas de codigo que estan planteadas para el Raspberry y responder unas preguntas relacionadas con el mismo

Este programa se ejecuta definiendo un enum class llamado Task1States que representa los diferentes estados posibles de la tarea task1. En este caso, hay dos estados: INIT y WAIT_TIMEOUT.

Se declara una variable estática task1State de tipo Task1States que se utiliza para almacenar el estado actual de la tarea. Se inicializa en el estado INIT.

Se declara una variable estática lastTime de tipo uint32_t que se utiliza para almacenar el tiempo en milisegundos desde el inicio de la ejecución de la tarea.

Se define una constante INTERVAL con valor 1000, que representa el intervalo de tiempo en milisegundos entre cada ejecución de la tarea.

Se implementa la máquina de estados finitos utilizando un switch-case que evalúa el estado actual de la tarea (task1State).

En el caso INIT, se realiza la inicialización de la tarea, se configura la comunicación serial y se establece el estado siguiente como WAIT_TIMEOUT. También se imprime un mensaje indicando que se ha pasado al estado WAIT_TIMEOUT.

En el caso WAIT_TIMEOUT, se verifica si ha pasado el intervalo de tiempo definido desde la última ejecución de la tarea. Si ha pasado el intervalo, se actualiza lastTime con el tiempo actual, se imprime el tiempo actual en el puerto serie y se vuelve al inicio del loop.

Si el estado actual no coincide con ninguno de los definidos (INIT o WAIT_TIMEOUT), se imprime un mensaje de error.

La función setup inicializa la ejecución de la tarea llamando a task1 una vez al inicio del programa.

La función loop ejecuta continuamente la tarea llamando a task1 repetidamente.

En resumen, este código configura una tarea para que se ejecute periódicamente en un intervalo de tiempo definido, utilizando una máquina de estados finitos para controlar su comportamiento en función de su estado actual


¿Cuántas veces se ejecuta el código en el case Task1States::INIT?: el código en ese caso se ejecutará una vez al inicio del programa, ya que la función setup llama a task1 una sola vez. Por lo tanto, el código en el caso INIT se ejecutará solo una vez al principio.

