// PermutationsOdAString.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void perm(char* s, int k);
void swap(char& s, char& s2);
void permMethod2(char* s, int l, int h);

int main()
{
    char s[] = "ABC";
    permMethod2(s, 0,2);
    return 0;
}

void perm(char* s, int k)
{
    static int A[10] = { 0 };
    static char res[10];
    int i;
    if (s[k] == '\0')
    {
        res[k] = '\0';
        printf("%s\n", res);
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (A[i] == 0)
        {
            res[k] = s[i];
            A[i] = 1;
            perm(s, k + 1);
            A[i] = 0;
        }
    }
}

void swap(char &s, char &s2)
{
    char temp;
    temp = s;
    s = s2;
    s2 = temp;
}

void permMethod2(char* s, int l, int h)
{
    int i;
    if (l == h)
    {
        printf("%s", s);
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            permMethod2(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}
