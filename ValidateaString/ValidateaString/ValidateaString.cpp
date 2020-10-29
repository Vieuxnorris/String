// ValidateaString.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

int valid(char* name);

int main()
{
    char name[] = "Ani?321";
    if (valid(name))
        printf("Valide string");
    else
        printf("invalide string");
}  

int valid(char* name)
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) &&
            !(name[i] >= 97 && name[i] <= 122) &&
            !(name[i] >= 48 && name[i] <= 57))
            return 0;
    }
    return 1;
}
