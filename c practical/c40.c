#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void readFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        printf("Could not open file for reading.\n");
        return;
    }
    char ch;
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF)
        putchar(ch);
    fclose(file);
}

void writeFile(const char *filename)
{
    FILE *file = fopen(filename, "w");
    
    fprintf(file, "Hello, this is a test file.\nWriting content to the file.\n");
    fclose(file);
    printf("Data written to the file successfully.\n");
}

void appendToFile(const char *filename)
{
    FILE *file = fopen(filename, "a");
    
    fprintf(file, "This is additional content added to the file.\n");
    fclose(file);
    printf("Data appended to the file successfully.\n");
}

void copyFile(const char *sourceFile, const char *destinationFile)
{
    FILE *source = fopen(sourceFile, "r"), *destination = fopen(destinationFile, "w");
    if (!source || !destination)
    {
        printf("Error opening files.\n");
        if (source)
            fclose(source);
        return;
    }
    char ch;
    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);
    fclose(source);
    fclose(destination);
    printf("File copied successfully.\n");
}

void countCharsAndWords(const char *filename)
{
    FILE *file = fopen(filename, "r");
    
    int ch, charCount = 0, wordCount = 0, inWord = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        charCount++;
        if (isspace(ch))
            inWord = 0;
        else if (!inWord)
        {
            inWord = 1;
            wordCount++;
        }
    }
    fclose(file);
    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
}

int main()
{
    int choice;
    char filename[100], sourceFile[100], destinationFile[100];

    while (1)
    {
        printf("\n--- File Handling Operations ---\n");
        printf("1. Read file\n2. Write to file\n3. Append to file\n4. Copy file contents\n");
        printf("5. Count characters and words in file\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            printf("Enter the filename to read: ");
            scanf("%s", filename);
            readFile(filename);
            break;
        case 2:
            printf("Enter the filename to write: ");
            scanf("%s", filename);
            writeFile(filename);
            break;
        case 3:
            printf("Enter the filename to append: ");
            scanf("%s", filename);
            appendToFile(filename);
            break;
        case 4:
            printf("Enter the source filename: ");
            scanf("%s", sourceFile);
            printf("Enter the destination filename: ");
            scanf("%s", destinationFile);
            copyFile(sourceFile, destinationFile);
            break;
        case 5:
            printf("Enter the filename to count characters and words: ");
            scanf("%s", filename);
            countCharsAndWords(filename);
            break;
        case 6:
            printf("Exiting the program.\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
