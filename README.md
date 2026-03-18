README.md
this is my first readme about programming and lab 2025/2026

considerazioni del prof


## C++ Project Directory Layout

Un progetto C++ è una collezione di file header e file sorgente.

### File Header (.hpp)
- Definiscono le interfacce delle classi e le firme delle funzioni
- Estensione: `.hpp`
- Posizione: `include/`

### File Sorgente (.cpp)
- Contengono l'implementazione delle firme definite nei file header corrispondenti
- Estensione: `.cpp`
- Posizione: `src/`

### Altre sottodirectory
- `test/` - per i file di test
- `external/` - per librerie esterne
- `build/` - per gli output di compilazione

## Primo Esempio: myfunction-example-project

### Struttura del progetto
```
myfunction-example-project/
├── include/
│   └── myfunction.hpp
├── src/
│   └── myfunction.cpp
├── tools/
│   └── main.cpp
└── build/
```

### File header (include/myfunction.hpp)
```cpp
int myfunction(int x, double y);
```

### File sorgente (src/myfunction.cpp)
```cpp
#include "myfunction.hpp"
// implementazione della funzione
```

### File principale (tools/main.cpp)
Include il file header:
```cpp
#include "myfunction.hpp"
```

Questo è esattamente lo stesso che scrivere la dichiarazione direttamente nel file .cpp.

## Compilazione Step by Step usando il Terminale

1. Creare la directory del progetto:
   ```
   mkdir myfunction-example-project
   cd myfunction-example-project
   ```

2. Creare le sottodirectory:
   ```
   mkdir include src tools build
   ```

3. Creare e salvare i file:
   - `src/myfunction.cpp`
   - `include/myfunction.hpp`
   - `tools/main.cpp`

4. Compilare il file sorgente:
   ```
   g++ -std=c++11 -c src/myfunction.cpp -I include -o build/myfunction.o
   ```

5. Lineare gli object file e compilare l'eseguibile:
   ```
   g++ -std=c++11 build/myfunction.o tools/main.cpp -I include -o build/main
   ```

6. Eseguire il programma:
   ```
   ./build/main
   ```

## Debugging

### Asserts
Gli assert vengono utilizzati per verificare le condizioni che dovrebbero essere sempre vere durante l'esecuzione del programma.

### Warnings
I warning sono avvertimenti del compilatore che indicano possibili problemi nel codice.

### Sanitizers
I sanitizer sono strumenti che aiutano a rilevare errori di memoria e di sicurezza durante l'esecuzione del programma.