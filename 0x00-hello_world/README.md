# 0x00. C - Hello, World

## Learning Objectives

- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds  
- What happens when you type `gcc main.c`  
- What is an entry point  
- What is `main`  
- How to print text using `printf`, `puts` and `putchar`  
- How to get the size of a specific type using the unary operator `sizeof`  
- How to compile using `gcc`  
- What is the default program name when compiling with `gcc`  
- What is the official Holberton C coding style and how to check your code with `betty-style`  
- How to find the right header to include in your source code when using a standard library function  
- How does the `main` function influence the return value of the program  

## Compilation process in C

```
                    source code (.c)
                         |
                         |
  PREPROCESSOR ---> expanded code (.i)
                         |
                         |
  COMPILER -------> assembly code (.s)
                         |
                         |
  ASSEMBLER ------> object code (.obj)
                         |
                         |
  LINKER ---------> excecutable code
```

```
 gcc [options] <file>

     [-E] --> Preprocess only; do not compile, assemble or link
     [-S] --> Compile only; do not assemble or link  
     [-c] --> Compile and assemble, but do not link

     [-o <file>] --> Place the output into <file>  
```
