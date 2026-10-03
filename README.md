
# Distribuidora de Quesos

Trabajo práctico de la materia **Algoritmos y Estructura de Datos**.

Programa en C que simula la carga de ventas de una distribuidora de quesos y genera un informe simple a partir de esos datos, usando vectores (arreglos) y paso de parámetros por puntero.

## 📋 Qué hace

El programa muestra un menú con tres opciones:

1. **Cargar ventas**: pide, para cada venta, el tipo de queso, la cantidad de hormas vendidas y el turno de reparto (tarde o mañana). Calcula el importe de la venta según el precio de cada queso y lo guarda, junto con el turno, en dos vectores paralelos. Al final de la carga muestra el total recaudado.
2. **Informe**: recorre los vectores cargados y muestra:
   - la cantidad de repartos que fueron en el turno tarde,
   - el promedio de todas las ventas cargadas.
3. **Salir**: termina el programa.

### Precio por tipo de queso (por horma)

| Código | Queso       | Precio  |
|--------|-------------|---------|
| `c`    | Cremoso     | $2000   |
| `m`    | Mozzarella  | $2100   |
| `p`    | Parmesano   | $2200   |
| `r`    | Roquefort   | $2300   |

### Turno de reparto

- `t` → Tarde
- `m` → Mañana

## 🧠 Conceptos de la materia que aplica

- Vectores (arreglos) para guardar los datos de cada venta.
- Paso de vectores a funciones mediante punteros (`char *v1`, `float *v2`).
- Dos funciones separadas: una para cargar cada venta en los vectores (`funcion1`) y otra para recorrerlos y calcular el informe (`funcion2`).
- Uso de `switch` para el menú principal y para el precio según el tipo de queso.

## ▶️ Cómo compilarlo y ejecutarlo

El programa usa `system("pause")` y `system("CLS")`, por lo que está pensado para compilarse y correrse en **Windows** (por ejemplo con Dev-C++, Code::Blocks o el compilador de Turbo C/C++ que se usa en la cursada).

Con GCC desde la consola:

```bash
gcc main.c -o distribuidora
distribuidora.exe
```

> En Linux/Mac los comandos `pause` y `CLS` no existen, así que el programa compila pero esas líneas no van a funcionar como se espera.

## ⚠️ Limitaciones conocidas

Quedan documentadas para quien quiera seguir mejorando el trabajo:

- La cantidad de ventas por carga está fija en 2 (`for(int x=0;x<2;x++)`), no es configurable por el usuario.
- No hay validación de los datos ingresados: si se carga un tipo de queso que no es `c`, `m`, `p` o `r`, la variable `valor` queda sin inicializar en esa vuelta.
- `fflush(stdin)` se usa para limpiar el buffer de entrada antes de cada `scanf`; funciona en algunos compiladores de Windows pero no es parte del estándar de C.
- Los vectores (`ve1`, `ve2`) tienen un tamaño fijo de 50 posiciones; cargar más de 50 ventas en total produciría un desborde.
- La opción "Salir" del menú no corta la ejecución de forma explícita: el programa sale del `while` porque la condición deja de cumplirse.


