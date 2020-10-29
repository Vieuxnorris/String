// ComparingStringsPalindrome.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void comparingString(char* A, char* B);
void palindrome(char* A);

int main()
{
    char A[] = "Painter";
    char B[] = "Painting";
    char pal[] = "aa";
    comparingString(A, B);
    palindrome(pal);
}

void comparingString(char* A, char* B)
{
    int i, j;
    for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
            break;
    }
    if (A[i] == B[j]) printf("equal\n");
    else if (A[i] < B[j]) printf("Smaller\n");
    else printf("greater\n");
}

void palindrome(char* A)
{
    int i, j;
    for (i = 0; A[i] != '\0'; i++);
    i -= 1;
    if (i >= 1)
    {
        for (j = 0; i > j; i--, j++)
        {
            if (A[i] != A[j])
                printf("not palindrome\n");
        }
        printf("is palindrome\n");
    }
}
