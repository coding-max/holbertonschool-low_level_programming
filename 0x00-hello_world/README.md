## 0x00. C - Hello, World
_____
<br>

### Compilation process in C        
<br>

```
                    sorce code (.c)
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
