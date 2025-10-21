#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random 6-character password and print it
 *
 * Description: This program prints a random 6-character password
 *              composed of the characters from the set:
 *              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
 *              "abcdefghijklmnopqrstuvwxyz"
 *              "0123456789"
 *              followed by a newline.
 *
 *              NOTE: This is a generic key generator template. To
 *              generate a key that passes a specific crackme
 *              (e.g. 101-crackme), you must reverse engineer the
 *              crackme binary and implement its exact algorithm here.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(void)
{
	char key[7];
	const char *chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			    "abcdefghijklmnopqrstuvwxyz"
			    "0123456789";
	size_t charset_len = 62;
	int i;

	srand((unsigned int) time(NULL) ^ (unsigned int) getpid());

	for (i = 0; i < 6; i++)
	{
		key[i] = chars[rand() % charset_len];
	}
	key[6] = '\0';

	printf("%s\n", key);
	return (0);
}
