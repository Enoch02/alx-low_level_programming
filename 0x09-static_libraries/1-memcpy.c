/**
 * _memcpy - Copies memory area
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 *
 * Return: Returns a pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
