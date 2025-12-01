#include <unistd.h>

int	put_strlen(char *list)
{
	int	i;

	i = 0;
	while (list[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*is_short(char *dest2, char *src2, unsigned int srclen2, unsigned int n)
{
	unsigned int	z;

	z = 0;
	while (z <= srclen2)
	{
		dest2[z] = src2[z];
		z++;
	}
	while (z < n)
	{
		dest2[z] = '\0';
		z++;
	}
	return (dest2);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	srclen;
	unsigned int	z;

	z = 0;
	srclen = put_strlen(src);
	if (srclen < n)
		dest = is_short(dest, src, srclen, n);
	else
	{
		while (z < n)
		{
			dest[z] = src[z];
			z++;
		}
	}
	return (dest);
}
