/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:58:22 by binurtas          #+#    #+#             */
/*   Updated: 2022/10/04 19:59:42 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	if (ft_strlen(s) < start)
		return (str);
	while (len > 0)
	{
		str[i] = *(char *)(s + start + i);
		i++;
		len--;
	}
	return (str);
}
