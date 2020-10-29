// FindingDuplicatesInAString.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void findingDuplicates(char* A);
void findingDuplicatesHashtable(char* A);
void findingDuplicatesBitwise(char* A);

int main()
{
    char A[] = "finding";
    findingDuplicatesBitwise(A);
}

void findingDuplicates(char* A)
{
    int i, j, count=0;

    for (i = 0; A[i] != '\0'; i++)
    {
        j = i+1;
        while (A[j] != '\0')
        {
            if (A[i] == A[j] && A[i] != '0')
            {
                A[j] = '0';
                count++;
            }
            j++;
        }
    }
    printf("%d duplicate lettre\n", count);
}

void findingDuplicatesHashtable(char* A)
{
    static char hashtable[26] = {0};
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 97 && A[i] <= 122)
            hashtable[A[i] - 97]++;
        else if (A[i] >= 65 && A[i] <= 90)
            hashtable[A[i] - 65]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hashtable[i] > 1)
            printf("%c --> %d", i+65, hashtable[i]);
    }
}

void findingDuplicatesBitwise(char* A)
{
    long int H = 0, x = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << A[i] - 97;
        if ((x & H) > 0)
            printf("%c is duplicate\n", A[i]);
        else
            H = x | H;
    }
}
