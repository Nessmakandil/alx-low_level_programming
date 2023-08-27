#include "main.h"
/**
 * splir_words - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
int splir_words(char *str)
{
	int flag = 0;
	int count1 = 0, wordscount = 0;

	while (str && str[count1] != '\0')
	{
		count1++;
		if (str[count1] == '\0' || str[count1] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			wordscount++;
		}
	}
	return (wordscount);
}
/**
 * leng - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
int leng(char *str)
{
	int flag = 0;
	int count1 = 0, wordscount = 0;

	while (str && str[count1] != '\0')
	{
		count1++;
		if (str[count1] == '\0' || str[count1] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			wordscount++;
		}
	}
	return (count1);
}
/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **ptr;	
	int count = 0;	
	int i = 0;
	int x = 0;
	int j;
	int count1 = leng(str);
	int wordscount = splir_words(str);
	
	ptr = (char **) malloc((wordscount + 1) * sizeof(char *));

	if (wordscount == 0 || str == NULL || ptr == NULL)
		return (NULL);
	while (i <= count1)
	{
		if ((str[i] == '\t' || str[i] == '\0' || str[i] == ' ') && count > 0)
		{
			ptr[x] = (char *) malloc((count + 1) * sizeof(char *));	
			for (j = 0; j < count; j++)
			{
				ptr[x][j] = str[i - count + j];
			}
			ptr[x][j] = '\0';
			x++;
			count = 0;
		}
		else if ((str[i] != '\t' && str[i] != ' ') || str[i] == '\0')
		{
			count++;
		}
		i++;
	}
	ptr[x] = NULL;
	return (ptr);
}
