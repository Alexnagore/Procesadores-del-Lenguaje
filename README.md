# 🧠 Procesadores del Lenguaje

Proyecto de prácticas para la asignatura **Procesadores del Lenguaje**, que implementa un **analizador léxico** utilizando **Flex** y un **Makefile** para automatizar la compilación y ejecución.

---

## ⚙️ Uso del Makefile

### ▶️ Ejecutar el analizador léxico en modo interactivo
```bash
make
```
El analizador leerá desde la entrada estándar (teclado).
Pulsa Ctrl + D (Linux/macOS) o Ctrl + Z (Windows) para finalizar la entrada.

### 📄 Ejecutar el analizador léxico con un fichero de entrada
```bash
make FILE=nombre_del_archivo
```

Por ejemplo:
```bash
make FILE=program1.alg
```

Esto compilará (si es necesario) y ejecutará el analizador sobre el fichero indicado.

### 🧹 Limpiar archivos generados

Para eliminar los archivos intermedios (lex.yy.c, el ejecutable, etc.):
```bash
make clean
```

## 🧩 Estructura del proyecto
```text
📦 Procesadores-del-Lenguaje
 ┣ 📜 scanner.l          # Definición del analizador léxico (Flex)
 ┣ 📜 makefile           # Compilación automática
 ┣ 📜 programa1.alg      # Ejemplo de archivo de entrada
 ┗ 📄 README.md           # Este archivo
```

---

## 🧰 Dependencias
- 🐧 Linux / WSL / macOS  
- `flex`  
- `gcc`  
- `make`

Instálalos (en Ubuntu o Debian) con:
```bash
sudo apt update
sudo apt install flex gcc make
```

---

## 🧾 Ejemplo de ejecución

**Archivo de entrada:** `programa1.alg`
```text
algoritmo
falgoritmo
```

**Salida del analizador:**
```text
(inicio_algoritmoTK, algoritmo)
(fin_algoritmoTK, falgoritmo)
```

---
