/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: input
 * @src: input
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (l >= 0)
	{
		*(dest + l) = *(src + l);
		if (*(src + l) == '\0')
			break;
		l++;
	}
	return (dest);
}
