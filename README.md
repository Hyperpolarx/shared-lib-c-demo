# C demo lib

Sample static and shared lib complilation

from [This blog](https://renenyffenegger.ch/notes/development/languages/C-C-plus-plus/GCC/create-libraries/index).

# Compilation

## Static library

```bash
gcc -c src/main.c -o bin/main.o
gcc -c src/tqlib1/add.c -o bin/static/add.o
gcc -c src/tqlib1/answer.c -o bin/static/answer.o
gcc -c -fPIC src/tqlib1/add.c -o bin/static/add.o 
gcc -c -fPIC src/tqlib1/answer.c -o bin/static/answer.o 
gcc bin/main.o -Lbin/static -l:tqlib1.a -o bin/app
```

## Shared library
```bash
gcc -shared bin/shared/add.o bin/shared/answer.o -o bin/shared/tqlib1.so
gcc -c src/tqlib1/answer.c -o bin/shared/answer.o
gcc -c src/tqlib1/add.c -o bin/shared/add.o
gcc -c -fPIC src/tqlib1/add.c -o bin/shared/add.o
gcc -c -fPIC src/tqlib1/answer.c -o bin/shared/answer.o
gcc -shared bin/shared/add.o bin/shared/answer.o -o bin/shared/tqlib1.so
gcc bin/main.o -Lbin/shared -l:tqlib1.so -o bin/shared-app
gcc -shared bin/shared/add.o bin/shared/answer.o -o bin/shared/libtqlib1.so
gcc bin/main.o -Lbin/shared -ltqlib1 -o bin/shared-app
```

