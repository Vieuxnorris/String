// CheckForAnagram.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <stdio.h>

void checkAnagram(char* arr1, char *arr2);

int main()
{
	char A[] = "verbose";
	char B[] = "observe";
	checkAnagram(A, B);
}

void checkAnagram(char* arr1, char *arr2)
{
	int i=0;
	char hashtable[26] = { 0 };
	for (i = 0; arr1[i] != '\0'; i++)
		hashtable[arr1[i] - 97] += 1;
	for (i = 0; arr2[i] != '\0'; i++)
	{
		hashtable[arr1[i] - 97] -= 1;
		if (hashtable[arr1[i] - 97] < 0)
		{
			printf("not anagrame\n");
			break;
		}
	}
	if (arr2[i] == '\0' && arr1[i] == '\0')
		printf("Its Anagram\n");
	else
		printf("not anagrame\n");
}
