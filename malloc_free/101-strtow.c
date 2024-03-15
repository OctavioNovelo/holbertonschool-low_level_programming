#include "main.h"
#include <stdlib.h>
int is_space(char c);
int count_words(char *str);
char *copy_word(char *str);
void free_words(char **words);
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
int i, j, k = 0, words_count = count_words(str);
char **words;
if (str == NULL || *str == '\0')
return (NULL);
words = malloc((words_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0; i < words_count; i++)
{
while (is_space(*str))
str++;
words[i] = copy_word(str);
if (words[i] == NULL)
{
free_words(words);
return (NULL);
}
while (!is_space(*str) && *str != '\0')
str++;
}
words[i] = NULL;
return (words);
}
/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if c is a space, otherwise 0.
 */
int is_space(char c)
{
return ((c == ' ' || c == '\t' || c == '\n'));
}
/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in str.
 */
int count_words(char *str)
{
int count = 0, in_word = 0;
while (*str != '\0')
{
if (!is_space(*str) && !in_word)
{
in_word = 1;
count++;
}
else if (is_space(*str))
{
in_word = 0;
}
str++;
}
return (count);
}
/**
 * copy_word - Copies a word from a string.
 * @str: The string containing the word.
 *
 * Return: Pointer to the copied word.
 */
char *copy_word(char *str)
{
char *word;
int len = 0, i = 0;
while (!is_space(str[len]) && str[len] != '\0')
len++;
word = malloc((len + 1) * sizeof(char));
if (word == NULL)
return (NULL);
for (i = 0; i < len; i++)
word[i] = str[i];
word[i] = '\0';
return (word);
}
/**
 * free_words - Frees memory allocated for an array of words.
 * @words: The array of words to free.
 */
void free_words(char **words)
{
int i;
for (i = 0; words[i] != NULL; i++)
free(words[i]);
free(words);
}
