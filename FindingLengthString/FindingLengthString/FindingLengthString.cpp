// FindingLengthString.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

size_t lengthString(char arr[]);

int main()
{
    char arr[] = "test";
    printf("%d\n",lengthString(arr));
    return 0;
}

size_t lengthString(char arr[])
{
    size_t i;
    for (i = 0; arr[i] != '\0'; i++);
    return i;
}