// CountingWordsAndVowelsString.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void CountVowelConsonentsAndWord(char* arr);

int main()
{
    char arr[] = "How are you Julien";
    CountVowelConsonentsAndWord(arr);
}

void CountVowelConsonentsAndWord(char* arr)
{
    size_t i, vcount = 0, ccount = 0, word=1;

    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'Y')
            vcount++;
        else if ((arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 && arr[i] <= 122))
            ccount++;
        else if (arr[i] == ' ' && arr[i-1] != ' ')
            word++;
    }
    printf("Vowel/s --> %d | Consonent/s --> %d | word/s --> %d\n", vcount, ccount, word);
}
