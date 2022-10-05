#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1)+ 1);
	while (s1[i])
	{
		if (ft_strchr(s2, s1[i]) == 0)
		{
			str[j] = *(char *)(s1 + i);
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
