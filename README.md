# STACK LIBRARY IN C++
Here is my own implementation of stack library comprising simple operations that a stack usually does! making it as a standard independent library so that it can be used with other applications that require a stack based data structure. It's more flexible to use as a stand-alone library.

---

## FEATURES

- Provided both the static and dynamic libraries for flexible use cases.
- Templated structure and functions to support every standard data types.
- Automatic memory allocation and de-allocation ensuring no memory leaks.

---

## STRUCTURE

```
├── build
├── include
│   └── stackhead.h
├── lib
│   ├── stackdyn.so
│   └── stacklib.a
├── Makefile
├── README.md
└── src
    ├── stack.cpp
    └── stackfun.cpp
```

This repo contains four sections of which

- **Build** : Contains build files.
- **Include** : Contains headers to be included.
- **lib** : Contains library files.
- **src** : Contains source files.

---

## INSTRUCTIONS

- Running make will compile and create the libraries
```
make
```
- The following command will link the library with the demo main function and compiles it into a code
```
make build
```
- This will clear all the build files
```
make clean
```
---

