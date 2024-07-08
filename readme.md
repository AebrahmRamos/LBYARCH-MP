# RGB to Grayscale Image Conversion

This project demonstrates how to convert an RGB image to a grayscale image using a combination of C and assembly language. The program reads an RGB image, processes it in assembly to convert it to grayscale, and then prints both the original and the grayscale images.

### Built Using
* ![ASSEMBLY](https://img.shields.io/badge/_-ASM-6E4C13.svg?style=for-the-badge)
* ![C](https://img.shields.io/badge/_-C-555555.svg?style=for-the-badge)

## Prerequisites

Before running this project, ensure you have the following installed on your system:
- NASM (Netwide Assembler)
- TDM-GCC (GCC for Windows)

## Files

- `c_rgb.c`: The main C program that sets up the RGB image and calls the assembly function.
- `asm_rgb.asm`: The assembly file that contains the function to convert the RGB image to grayscale.

## Usage
2 Ways to run the program, either by manually executing the commands below or if on an x86_64 Windows just run 'run.bat'. If you're using VS Code terminal to run the executable or batch file, run it like `.\c_rgb.exe` `.\run.bat`.

### Option 1
1. **Compile the assembly file**:
    ```bash
    nasm -f win64 asm_rgb.asm -o asm_rgb.o
    ```

2. **Compile the C file and link it with the assembly object file**:
    ```bash
    gcc -std=c99 -o c_rgb c_rgb.c asm_rgb.o
    ```

3. **Run the executable**:
    ```bash
    c_rgb.exe
    ```

### Option 2
1. **Run the batch file**
    ```bash
    run.bat
    ```
