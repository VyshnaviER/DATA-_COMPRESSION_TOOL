#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to compress the input file using RLE
void compressFile(const char *input, const char *output) {
    FILE *in = fopen(input, "r");
    FILE *out = fopen(output, "w");

    if (in == NULL || out == NULL) {
        printf("ErroR!Could not open the files.\n");
        return;
    }

    char currentChar, previousChar;
    int count = 1;

    previousChar = fgetc(in); //Start with the first character
  
    //REad character by character from the file
    while ((currentChar = fgetc(in)) != EOF) {
        if (currentChar == previousChar) {
            count++;
        } else {
            fprintf(out, "%d%c", count, previousChar);
            count = 1;
        }
        previousChar = currentChar;
    }
    // Write last sequence
    fprintf(out, "%d%c", count, previousChar);

    fclose(in);
    fclose(out);
    printf("Compression complete. Output saved to %s\n", output);
}

// Function to decompress the file compressed using RLE
void decompressFile(const char *input, const char *output) {
    FILE *in = fopen(input, "r");
    FILE *out = fopen(output, "w");

    if (in == NULL || out == NULL) {
        printf("Error in opening the files.\n");
        return;
    }

    int count;
    char ch;
    while (fscanf(in, "%d%c", &count, &ch) == 2) {
        for (int i = 0; i < count; i++) {
            fputc(ch, out);
        }
    }

    fclose(in);
    fclose(out);
    printf("Decompression complete. Output saved to %s\n", output);
}

int main() {
    int choice;
    printf("=========================================\n");
    printf("=== DATA COMPRESSION TOOL USING RLE ===\n");
    printf("=========================================\n");
    printf("1. Compress File\n");
    printf("2. Decompress File\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        compressFile("input.txt", "compressed.txt");
    } else if (choice == 2) {
        decompressFile("compressed.txt", "decompressed.txt");
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
