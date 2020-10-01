/**
 * @brief This file contains a function to print out the source code of a file
 * @file 27.h
 * @author Josef Aschwanden
 * @date 1 Oct 2020
 */

// *** INLCUDES ***
#include <stdio.h>

/**
 * @brief prints out the source code at location dir
 * @param dir file path
 */
void PrintSource(char *dir)
{
    FILE *fp = fopen(dir, "r"); // pointer to the file handle
    char c;

    if (fp != NULL) // file opened successfully
    {
        while((c = getc(fp)) != EOF)
        {
            putc(c, stdout);
        }
    }
    else
    {
        printf("failed opening file %s", dir);
    }
    
}