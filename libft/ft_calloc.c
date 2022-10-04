/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:05:20 by binurtas          #+#    #+#             */
/*   Updated: 2022/10/04 18:04:51 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = (void *)malloc(nmemb * size);
	if (!nmemb || !size || !p || nmemb * size / size != nmemb)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}
