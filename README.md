# 🧠 Procesadores del Lenguaje

## 👥 Integrantes
- Javier Merino Pinedo
- Alejandro Nagore Irigoyen

---

Proyecto de prácticas para la asignatura **Procesadores del Lenguaje** que implementa un compilador completo para el lenguaje **ProAlg**. Integra un **analizador léxico** (Flex) y un **analizador sintáctico con generador de código intermedio** (Bison), utilizando un **Makefile** para automatizar la compilación.

> **Nota:** La gramática mantiene la notación **Fortran** para variables booleanas, que deben comenzar con el prefijo `b_` seguido del nombre.

### ⚠️ Notas sobre Conflictos en la Gramática

El archivo `parser.output` documenta conflictos de desplazamiento-reducción que no afectan al funcionamiento del compilador. Bison los resuelve automáticamente de forma correcta, por lo que no es necesario modificar la gramática.


[📂 Repositorio en GitHub](https://github.com/Alexnagore/Procesadores-del-Lenguaje)

---

## 🎯 Objetivos Alcanzados

✅ Declaración de variables  
✅ Expresiones aritméticas con asignación  
✅ Expresiones booleanas con asignación  
✅ Declaración de variables de entrada/salida

---

## ⚙️ Uso del Makefile

### 🔨 Compilación
```bash
make
```
Genera el ejecutable `compilador`.

### ▶️ Ejecución
```bash
./compilador programa1.alg
```

**Salida del programa:**
1. Tabla de Símbolos final
2. Tabla de Cuádruplas (Código Intermedio)
3. Código de tres direcciones

### 🧹 Limpieza
```bash
make clean
```

---

## 🧩 Estructura del Proyecto

```
📦 Procesadores-del-Lenguaje
├── 📜 scanner.l              # Analizador léxico (Flex)
├── 📜 parser.y               # Analizador sintáctico y generador de código (Bison)
├── 📜 makefile               # Automatización de compilación
├── 📜 tablaDeSimbolos.c      # Gestión de tabla de símbolos
├── 📜 tablaDeCuadruplas.c    # Generador de código intermedio
├── 📜 programa1.alg          # Ejemplo: Intercambio de variables
├── 📜 programa2.alg          # Ejemplo: Ordenación de tres valores
├── 📜 programa3.alg          # Ejemplo: Suma combinatoria
├── 📜 programa4.alg          # Ejemplo: Expresiones booleanas
├── 📜 programa5.alg          # Ejemplo: Declaración de variables
└── 📄 README.md              # Este archivo
```

---

## 🧰 Dependencias

- 🐧 Linux / WSL / macOS
- flex
- bison
- gcc
- make

**Instalación (Ubuntu/Debian):**
```bash
sudo apt update
sudo apt install flex bison gcc make
```
