#include "libft.h"

char *_join(char *s1, char *s2)
{
	int	len_s1;
	int	len_s2;
	int	i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	while (i < len_s2)
	{
		s1[len_s1] = s2[i];
		i++;
		len_s1++;
	}
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	_join(str, (char *)s1);
	_join(str, (char *)s2);
	str[ft_strlen(str) + 1] = '\0';
	return (str);
}
