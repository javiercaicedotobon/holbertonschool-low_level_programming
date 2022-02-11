## 0X00. C - HELLO, WORLD
---
[0-Preprocessor](./0-Preprocessor)
---
Write a script that runs a C file through the preprocessor and save the result into another file.
-The C file name be saved in the variable $CFILE
-The output should be saved in the file c
---
[1-Compiler](./1-Compiler)
---
Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c -
Example: if the C file is main.c the output file shpuld be main.o
---
[2-Assembler](./2-Asembler)
---
Write a script that generates the assembly code of C code and save in an output file.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c
- example: if the C file is main.c, the output should be main.s
---
[3-Name](./3.name)
---
- Write a script that complies a C file and creats an executable named cisfun
- The C file name will be saved in the variable $CFILE
---
[4-Hello,puts](./4-Hello,puts)
---
- Write a C program that prints exactly "Programming is like building a multilengual puzzle" followed by a new line.
- Use the function puts
- you are not allowed to use printf
- your program should end with the value 0