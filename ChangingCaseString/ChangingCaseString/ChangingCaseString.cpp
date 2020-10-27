// ChangingCaseString.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void LowerCase(char* arr);
void UpperCase(char* arr);
void InverseUpperLower(char* arr);

int main()
{
    char arr[] = "WElcOMe";
    /*LowerCase(arr);
    printf("%s\n", arr);
    UpperCase(arr);
    printf("%s\n", arr);*/

    InverseUpperLower(arr);
    printf("%s\n", arr);
    return 0;
}

void LowerCase(char* arr)
{
    size_t i;
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 65 && arr[i] <= 90)
            arr[i] += 32;
    }
}

void UpperCase(char* arr)
{
    size_t i;
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
            arr[i] -= 32;
    }
}

void InverseUpperLower(char* arr)
{
    size_t i;
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 65 && arr[i] <= 90)
            arr[i] += 32;
        else if (arr[i] >= 97 && arr[i] <= 122)
            arr[i] -= 32;
    }
}
