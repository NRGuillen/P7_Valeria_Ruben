# P7_Valeria_Ruben
Se trabajará por **parejas** (dos personas). Deberá estar alojado en un repositorio de Git.

Por supuesto, aplican los mismos requisitos de buenas prácticas que en todas las entregas anteriores (comentarios, indentación, modularidad, código no duplicado, utilización de defines, etc)

Evidentemente, se exige que todos tus programas fucnionen sin errores de Valgrind. Para ello, te recomiendo ejecutar Valgrind  asiduamente, no solamente al final.

Y, como también sabéis pero recuerdo por si acaso, tu programa tiene que ser resistente a cualquier tipo de error. (Números negativos, línea de comandos mal introducida, etc).

---

## Ejercicio 1: Leer `n` enteros y ordenarlos

1. Pedid al usuario cuántos enteros quiere introducir (`n`) o utiliza el argumento dado por línea de comandos. Se deben codificar ambas funcionalidades.
2. **(Obligatorio usar memoria dinámica)**: reservad un array de tamaño `n` para guardar esos enteros.
3. Pedid por pantalla los `n` valores o utiliza los argumentos dados por línea de comandos. Se deben codificar ambas funcionalidades.
4. Ordenadlos con el método que prefiráis. Debe implementarse un algoritmo de ordenación. La máxima puntuación en este apartado se obtendrá cuando no se utilice un array auxiliar.
5. Imprimid los valores ordenados.

**Extras de subida de nota**

- (+0.25p) Usar **qsort** (o mergesort) para practicar un algoritmo eficiente.
- (+0.25p.) Implementar un **puntero a función** para la comparación (ver ejemplo al final).
- (+0.25p) Podéis mostrar un **diagrama de memoria** para ilustrar la reserva y liberación de memoria.

---

## Ejercicio 2: Estructura `Estudiante` y ordenación por dos criterios

1. Definid un `struct Estudiante` que contenga al menos:
    - `nombre` (cadena)
    - `apellido` (cadena)
    - `nota` (número real o entero)
2. Pedid al usuario cuántos estudiantes se van a introducir (`n`).
3. Reservad un array de `Estudiante` (recomendable hacerlo dinámico).
4. Leed los datos de cada estudiante por pantalla.
5. **Mostrad** los estudiantes ordenados primero por nota (de mayor a menor) y **luego** otra vez ordenados por el apellido (orden alfabético).

**Sugerencias / Extras**

- Usad **punteros a función** para cambiar la lógica de comparación (una para comparar notas y otra para apellidos) sin duplicar todo el código de ordenación. Así, os vale el mismo código que el ejercicio 1.
- Para más de un 10, se recomienda un algoritmo como **qsort** o mergesort.
- (Debe implementarse un algoritmo de ordenación manual).

---

## Ejercicio 3: Tablero 10x10 con movimiento de `#` (wasd)

1. Cread un tablero de 10x10 (puede ser estático o dinámico). (Si se da un argumento por línea de comandos, se utilizará como medida del tablero cuadrado. Si se reciben 2 argumentos, serán el ancho y largo respectivamente).
2. Llenad los bordes con `*` y colocad un `#` en el centro.
3. Implementad un bucle para leer teclas (`w`, `a`, `s`, `d`) y mover el `#` en consecuencia (arriba, izquierda, abajo, derecha) **sin salirse** de los bordes.
4. Tras cada movimiento, se debe **volver a imprimir** el tablero actualizado.

**Pista para refrescar la pantalla**

- En sistemas tipo Unix/Linux, podéis usar `system("clear")` para limpiar la pantalla antes de volver a imprimir el tablero, y así se vea la “animación” de movimiento.

---

## Ejercicio 4: Verificar recursivamente si una cadena es palíndroma

1. Leed una cadena (puede ser de longitud fija o manejada dinámicamente) o recibirla por línea de comandos.
2. Imprimid si es palíndroma o no. 

**Sugerencias / Extras**

- Podéis normalizar la cadena (quitando espacios y pasando todo a minúsculas) para que la verificación sea más robusta.

---

## Ejercicio 5: Matriz `n x m` y suma de su contorno

1. Pedid al usuario las dimensiones `n` (filas) y `m` (columnas).
2. Reservad (o declarad) una matriz `n x m`.
3. Rellenadla con valores aleatorios, etc.
4. Calculad la **suma del contorno**:
    - Primera fila
    - Última fila
    - Primera columna
    - Última columna
5. Mostrad la suma y liberad la memoria (si la habéis reservado dinámicamente).

---

## Ejercicio 6: Cifrado César con memoria dinámica

1. Leed una **cadena de texto** (recomendable usar reserva dinámica para practicar, pero no obligatorio).
2. Pedid al usuario un desplazamiento (clave).
3. Aplicad el **Cifrado César** desplazando cada letra alfabética (`a-z` o `A-Z`) tantas posiciones como indique la clave.
4. Mostrad la cadena resultante.
5. Descifrad devolviendo el desplazamiento y mostrad el texto original.

**Sugerencias**

- Tened cuidado con el ciclo: si desplazáis `'z'` con clave 3, volvéis a `'c'`. Lo mismo para mayúsculas.
- Controlad la posibilidad de claves negativas o mayores que 26.
- Refresca el operador `%` y la tabla Ascii, te harán falta.

---

## Ejercicio 7: Generar y almacenar números primos hasta `m`

1. Pedid al usuario un número `m`.
2. Encontrad todos los primos menores o iguales a `m`.
3. Almacenadlos en un array sin desperdiciar memoria.
4. Imprimid la lista de primos.

**Sugerencias**

- Implementar la **criba de Eratóstenes** es más eficiente, pero podéis también implementar vuestra propia función.
- Crecer dinámicamente el array de primos con `realloc` puede ser un buen ejercicio de memoria dinámica.

---

## Sobre la **nota extra** (>10)

1. **Implementar un algoritmo de ordenación avanzado** (por ejemplo, **merge sort** o **qsort**) y **entenderlo**.
2. **Investigar los punteros a funciones** para crear una “función de ordenación” genérica que reciba la función de comparación. La función de comparación será como `strcmp`. Devuelve un número positivo si el primero es mayor, negativo si el primero es menor o 0 en caso de que sean iguales.
    - Por ejemplo, en C se suele definir y luego llamar a `qsort(array, n, sizeof(int), compararEnteros);`
        
        ```c
        int compararEnteros(const void *a, const void *b) {
            return (*(int*)a - *(int*)b);
        }
        ```
        
    - Si se desea ordenar en sentido inverso, se hace otra función `compararEnterosDesc`.
    - O, si se trata de estructuras (como en el ejercicio 2), se hace `compararApellido`, `compararNota`, etc.
    - **Ejemplo sencillo** de puntero a función: De esta forma, podéis cambiar la **lógica de comparación** simplemente pasando otra función al mismo código de ordenación.
        
        ```c
        typedef int (*Comparar)(const void*, const void*);
        
        int compararPorNota(const void* a, const void* b) {
            // ...
        }
        
        void ordenarGenerico(void* array, size_t n, size_t tamElem, Comparar comp) {
            
            // Implementar tu algoritmo de ordenación utilizando comp(a, b) para comparar
            // if (comp(a,b)>0) quiere decir que "a" es mayor. Si comp(a,b) <0, quiere decir que "a" es menor. Si comp(a,b)==0, quiere decir que son iguales.
        }
        
        ```
        

Recordad que estos extras no son obligatorios, pero sí **muy recomendables** para obtener una calificación superior al 10 y, sobre todo, para **profundizar** en el manejo de C y sus funcionalidades avanzadas. ¡Mucho ánimo!
