# sfi_202420_JuanPabloHernandez

La función changeVar toma un puntero a un entero sin signo (uint32_t *pdata) como argumento y asigna el valor 10 a la variable a la que apunta.
La función printVar toma un entero sin signo (uint32_t value) como argumento y lo imprime en el monitor serial.

- ¿Cómo se pasa un puntero a una función en C++?

Un puntero se pasa a una función en C++ declarando el parámetro de la función como un puntero del tipo correspondiente. Por ejemplo: void changeVar(uint32_t *pdata) declara un parámetro que es un puntero a un entero sin signo.

- ¿Qué permite hacer el uso de punteros en las funciones?

El uso de punteros en las funciones permite modificar el contenido de variables fuera del ámbito de la función, ya que se pasa la dirección de memoria de la variable en lugar del valor en sí.

- ¿Qué ocurre si pasamos un puntero nulo a una función y tratamos de modificar el valor apuntado por ese puntero?

Si pasamos un puntero nulo a una función y tratamos de modificar el valor apuntado por ese puntero, es probable que ocurra un error de acceso a memoria no válida, ya que el puntero nulo no apunta a ninguna dirección de memoria válida.
