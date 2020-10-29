// ReverseAString.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void reverse(char* A, char* B);
void reverseMutable(char* A);

int main()
{
    char A[] = "python";
    char B[7];
    reverseMutable(A);
    printf("%s\n", A);

}

void reverse(char* A, char* B)
{
    int i, j;
    for (i = 0; A[i] != '\0'; i++);
    i -= 1;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';
}

void reverseMutable(char* A)
{
    int i, j,t;
    for (j = 0; A[j] != '\0'; j++);
    j -= 1;
    for (i = 0; i < j; i++, j--)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
}
