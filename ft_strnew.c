/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 15:08:43 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/01 15:08:45 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t i;
	unsigned char *r;

	i = 0;
	r =ft_memalloc(size + 1);
	if(!r)
		return(NULL);
	while(i <= size)
	{
		r[i] = '\0';
		i++;
	}
	*r = 0;
	return((char *)r);
}
/*

char	*ft_strnew(size_t size)
{
	size_t			i;
	unsigned char	*fresh;

	i = 0;
	fresh = malloc(size + 1);
	if (!fresh)
		return (0);
	while (i++ < size)
		fresh[i] = '\0';
	fresh[i] = '\0';
	*fresh = 0;
	return ((char *)fresh);
}
*/