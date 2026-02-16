# Piscine 42 Barcelona

## 📋 Información General

**Estudiante:** ncaravac  
**Campus:** 42 Barcelona, España  
**Período:** Octubre - Noviembre 2025  
**Lenguaje:** C  

---

## 🎯 Sobre la Piscine 42

La Piscine (piscina) de 42 es un proceso de selección intensivo de 26 días diseñado para evaluar la capacidad de aprendizaje, resolución de problemas y adaptabilidad de los candidatos. Durante este período, los estudiantes trabajan en proyectos de programación en C desde cero, sin conocimientos previos requeridos, aprendiendo a través de la metodología peer-to-peer característica de 42.

Este repositorio documenta el trabajo realizado durante las series C (C00-C08), demostrando progresión desde conceptos fundamentales hasta estructuras de datos complejas y gestión de memoria dinámica.

---

## 📚 Contenido por Módulo

### **C00 - Fundamentos de la Programación**
*Primeros pasos con C y la salida estándar*

**Conceptos clave:**
- Función `write()` y manipulación de caracteres
- Bucles básicos (`while`, `for`)
- Estructuras de control (`if`, `else`)
- Impresión de caracteres, alfabetos y números
- Combinaciones numéricas y lógica básica

**Ejercicios destacados:**
- `ft_putchar`: escritura de un solo carácter
- `ft_print_alphabet`: impresión del alfabeto
- `ft_print_comb`: generación de combinaciones numéricas
- `ft_putnbr`: conversión de enteros a caracteres

**Habilidades desarrolladas:** Comprensión de la sintaxis básica, funciones write, bucles y condiciones.

---

### **C01 - Punteros e Indirección**
*Introducción al concepto de punteros en C*

**Conceptos clave:**
- Declaración y uso de punteros
- Operador de dirección (`&`) y dereferenciación (`*`)
- Paso de parámetros por referencia
- Manipulación de valores mediante direcciones de memoria
- Arrays y punteros

**Ejercicios destacados:**
- `ft_ft`: asignación a través de múltiples niveles de punteros
- `ft_swap`: intercambio de valores usando punteros
- `ft_div_mod`: división y módulo con paso por referencia
- `ft_sort_int_tab`: ordenamiento de arrays de enteros

**Habilidades desarrolladas:** Comprensión profunda de la memoria, direcciones y manipulación indirecta de datos.

---

### **C02 - Cadenas de Caracteres**
*Manipulación y procesamiento de strings*

**Conceptos clave:**
- Arrays de caracteres (strings) en C
- Manipulación carácter por carácter
- Funciones de copia y validación de strings
- Transformación de cadenas (mayúsculas, minúsculas, capitalización)
- Manejo de caracteres no imprimibles

**Ejercicios destacados:**
- `ft_strcpy` / `ft_strncpy`: copia de strings
- `ft_str_is_*`: validación de tipos de caracteres (alfa, numérico, etc.)
- `ft_strupcase` / `ft_strlowcase`: conversión de mayúsculas/minúsculas
- `ft_strcapitalize`: capitalización de palabras
- `ft_strlcpy`: copia segura con limitación de tamaño

**Habilidades desarrolladas:** Manejo seguro de strings, validación de datos, transformación de texto.

---

### **C03 - Comparación y Concatenación**
*Funciones avanzadas de manipulación de strings*

**Conceptos clave:**
- Comparación lexicográfica de strings
- Concatenación de cadenas
- Búsqueda de subcadenas
- Funciones con limitación de tamaño (n-functions)
- Manejo de buffers

**Ejercicios destacados:**
- `ft_strcmp` / `ft_strncmp`: comparación de strings
- `ft_strcat` / `ft_strncat`: concatenación de cadenas
- `ft_strstr`: búsqueda de subcadenas
- `ft_strlcat`: concatenación segura con control de tamaño

**Habilidades desarrolladas:** Algoritmos de búsqueda, comparación, manipulación segura de buffers.

---

### **C04 - Conversión de Datos**
*Transformación entre tipos de datos*

**Conceptos clave:**
- Conversión de strings a enteros (atoi)
- Conversión de enteros a strings
- Sistemas de numeración (bases)
- Validación de entrada
- Manejo de casos extremos (negativos, overflow)

**Ejercicios destacados:**
- `ft_strlen`: cálculo de longitud de string
- `ft_putnbr`: impresión de enteros
- `ft_atoi`: conversión string a entero (ASCII to Integer)
- `ft_putnbr_base`: impresión de números en diferentes bases
- `ft_atoi_base`: conversión desde diferentes bases numéricas

**Habilidades desarrolladas:** Conversión de tipos, manejo de bases numéricas, validación robusta.

---

### **C05 - Recursividad**
*Pensamiento recursivo y algoritmos matemáticos*

**Conceptos clave:**
- Funciones recursivas vs iterativas
- Caso base y caso recursivo
- Stack overflow y limitaciones
- Algoritmos matemáticos clásicos
- Optimización de recursión

**Ejercicios destacados:**
- `ft_iterative_factorial` / `ft_recursive_factorial`: cálculo de factoriales
- `ft_iterative_power` / `ft_recursive_power`: potencias
- `ft_fibonacci`: secuencia de Fibonacci recursiva
- `ft_sqrt`: raíz cuadrada entera
- `ft_is_prime` / `ft_find_next_prime`: números primos

**Habilidades desarrolladas:** Pensamiento recursivo, algoritmos matemáticos, análisis de complejidad.

---

### **C06 - Argumentos de Línea de Comandos**
*Interacción con argumentos del programa*

**Conceptos clave:**
- Parámetros `argc` y `argv`
- Procesamiento de argumentos de entrada
- Iteración sobre arrays de strings
- Ordenamiento alfabético

**Ejercicios destacados:**
- `ft_print_program_name`: impresión del nombre del programa
- `ft_print_params`: impresión de todos los parámetros
- `ft_rev_params`: impresión en orden inverso
- `ft_sort_params`: ordenamiento alfabético de parámetros

**Habilidades desarrolladas:** Manejo de entrada de usuario, procesamiento de argumentos, ordenamiento.

---

### **C07 - Asignación Dinámica de Memoria**
*Gestión manual de memoria con malloc*

**Conceptos clave:**
- `malloc()` y asignación dinámica
- `free()` y liberación de memoria
- Memory leaks y gestión de recursos
- Arrays dinámicos
- Concatenación dinámica de strings

**Ejercicios destacados:**
- `ft_strdup`: duplicación de strings con malloc
- `ft_range`: creación de array de enteros dinámico
- `ft_ultimate_range`: creación de rangos con manejo de errores
- `ft_strjoin`: concatenación de múltiples strings

**Habilidades desarrolladas:** Gestión de memoria heap, prevención de memory leaks, manejo de errores.

---

### **C08 - Headers y Estructuras**
*Organización de código y tipos personalizados*

**Conceptos clave:**
- Archivos header (.h)
- Include guards
- Macros y definiciones
- Estructuras (struct)
- Tipos personalizados (typedef)
- Modularización del código

**Ejercicios destacados:**
- `ft.h`: creación de header con prototipos
- `ft_boolean.h`: definición de tipo booleano
- `ft_abs.h`: macro para valor absoluto
- `ft_point.h`: estructura para coordenadas 2D
- `ft_strs_to_tab`: conversión de array a estructuras
- `ft_show_tab`: impresión de array de estructuras

**Habilidades desarrolladas:** Organización de código, tipos abstractos, preprocessor, estructuras de datos.

---

## 💡 Competencias Adquiridas

### Técnicas
- **Programación en C:** Dominio de sintaxis, tipos de datos, operadores y control de flujo
- **Gestión de Memoria:** Comprensión profunda de stack, heap, punteros y memoria dinámica
- **Algoritmos:** Implementación de algoritmos de búsqueda, ordenamiento y recursión
- **Debugging:** Uso de herramientas como `gcc`, `valgrind`, `gdb`
- **Norminette:** Cumplimiento estricto del estándar de código de 42

### Metodológicas
- **Aprendizaje Autónomo:** Capacidad de aprender sin recursos tradicionales (sin clases, sin libros)
- **Peer-Learning:** Colaboración y evaluación entre compañeros
- **Resolución de Problemas:** Enfoque analítico y debugging sistemático
- **Gestión del Tiempo:** Trabajo bajo presión con deadlines estrictos
- **Resiliencia:** Superación de frustraciones y errores repetidos

---

## 🏆 Logros Destacables

- ✅ Completado el programa intensivo de 26 días
- ✅ Desarrollados 70+ ejercicios de programación en C
- ✅ Implementadas funciones de la biblioteca estándar desde cero
- ✅ Dominio de conceptos fundamentales: punteros, memoria, recursión
- ✅ Código revisado y validado por peers
- ✅ Preparación para el Tronco Común de 42

---

## 📈 Progresión del Aprendizaje

```
C00 (Básico)          → C01 (Punteros)    → C02-C03 (Strings)
                                                ↓
C08 (Estructuras)     ← C07 (Malloc)      ← C04-C05 (Algoritmos)
        ↑                                        ↓
        └────────────── C06 (Argumentos) ───────┘
```

La progresión está diseñada para construir conocimiento de forma incremental, donde cada módulo se apoya en los anteriores, culminando en la capacidad de crear programas completos con estructuras de datos personalizadas y gestión dinámica de memoria.

---

## 🔗 Información de Contacto

**GitHub:** [ncara42/piscine](https://github.com/ncara42/piscine)  
**42 Network:** [42 Barcelona](https://www.42barcelona.com/)  

---

*Documento generado para fines de portfolio profesional. Todos los ejercicios fueron completados de forma individual siguiendo la normativa y valores de 42.*
