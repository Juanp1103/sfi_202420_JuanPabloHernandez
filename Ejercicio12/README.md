# sfi_202420_JuanPabloHernandez

## -¿Cómo se declara un puntero?

Un puntero se declara indicando el tipo de dato al que apuntará, seguido por el operador asterisco * y el nombre del puntero. Por ejemplo: int *ptr; declara un puntero a un entero.

## -¿Cómo se define un puntero?

Un puntero se define asignándole la dirección de memoria de una variable del mismo tipo. Por ejemplo: int *ptr = &variable; asigna la dirección de memoria de variable al puntero ptr.

## -¿Cómo se obtiene la dirección de una variable?

La dirección de una variable se obtiene utilizando el operador de dirección &. Por ejemplo: int *ptr = &variable; asigna la dirección de variable al puntero ptr.

## -¿Cómo se puede leer y escribir el contenido de una variable mediante un puntero?

Para leer el contenido de una variable a través de un puntero, se utiliza el operador de indirección *. Por ejemplo: int value = *ptr; lee el valor almacenado en la dirección apuntada por ptr y lo asigna a value. Para escribir en la variable, simplemente se asigna un valor al puntero. Por ejemplo: *ptr = 10; asigna el valor 10 a la variable apuntada por ptr.
