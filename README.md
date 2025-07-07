# DATA-_COMPRESSION_TOOL

COMPANY : CODTECH IT SOLUTIONS

NAME : VYSHNAVI E R

INTERN ID : CITS0D93

DOMAIN : C PROGRAMMING

DURATION : 4 WEEKS

MENTOR : NEELA SANTHOSH

# Program Description – RLE Data Compression Tool in C

This project is a basic implementation of a data compression and decompression tool using the Run-Length Encoding (RLE) algorithm in the C programming language. The tool is designed to read characters from a text file and compress them by replacing sequences of repeating characters with a count followed by the character itself. This method is commonly used in simple data compression tasks, especially when dealing with repetitive data.

# Tools and Technologies Used

Programming Language: C

Compiler: GCC (GNU Compiler Collection)

Editor/Platform: Visual Studio Code

Operating System: Windows 10

The program was written and executed in Visual Studio Code, a powerful and lightweight code editor that supports a wide range of extensions for C/C++ development. The GCC compiler was used to compile the C program via the integrated terminal in VS Code. The terminal allows for both file I/O testing and interactive inputs. The use of standard C libraries such as stdio.h, stdlib.h, string.h, and ctype.h enables efficient file handling, string manipulation, and character processing.

# Applicability of the Task

The Run-Length Encoding approach, though simple, has practical applications in:

Data compression tools

Compiler design projects

Static analysis tools

Pattern recognition systems

Basic image/text compression (e.g., TIFF, BMP formats)

In academic and internship environments, this task serves as an excellent introduction to file handling, data processing, and algorithmic thinking in C. It provides a strong foundation for understanding how low-level compression techniques work and how they can be applied to real-world problems.

# About the Program

The program begins by prompting the user to choose between two options:

Compress File

Decompress File

If compression is selected, the program reads an input file (input.txt) character by character. It compares each character with the previous one and counts how many times it repeats consecutively. Once a different character is encountered, the program writes the count and the character to the output file (compressed.txt). This continues until the end of the file is reached.

For decompression, the program reads the compressed file (compressed.txt) and looks for numeric-character pairs. It then repeats each character according to the count and writes the result into another file (decompressed.txt), effectively reversing the compression process.

The use of fopen(), fgetc(), fprintf(), and fscanf() makes this program efficient in processing files and strings. Conditions are included to handle file access errors, ensuring robustness. Additionally, the program includes clean user prompts and feedback messages for a smooth user experience

# Conclusion

Working on this RLE Data Compression Tool provided a hands-on understanding of how simple algorithms can be used to solve real-world problems like reducing file sizes or organizing repetitive data more efficiently. It was a great opportunity to apply C programming concepts such as file handling, loops, and conditionals in a practical way.

This task also helped improve logical thinking and reinforced the importance of writing clean and modular code. Even though Run-Length Encoding is a basic compression technique, implementing it from scratch helped build a strong foundation for understanding how more advanced data compression methods work in real applications.

Overall, this project was not only a learning experience in terms of coding, but also a chance to think from a problem-solving perspective — which is essential in any software development role. It reflects how even small tools can be meaningful and useful when built with the right approach.

# Output

Compression Output

![Image](https://github.com/user-attachments/assets/f29fe4c2-8c02-4fe2-bcae-2abe7b43a271)

Decompression Output:

![Image](https://github.com/user-attachments/assets/55f0fa46-df8c-4c14-88b0-92bb2e0e95a8)
