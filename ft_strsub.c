/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 12:23:25 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/03 12:23:27 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *r;

	i = 0;
	if (s && (ft_strlen(s) > start))
	{
		r =ft_memalloc((ft_strlen(s) - start) + 1);
		if (r)
		{
			while (i < len && start < ft_strlen(s))
			{
				r[i] = s[start];
				start++;                                                                                                                            
				i++;
			}
			r[i] = '\0';
			return (&r[0]);
		}
		else
			return (NULL);
	}
	return (NULL);
}
*/
char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*fresh;

	i = 0;
	fresh = (unsigned char *)ft_memalloc(sizeof(char) * len + 1);
	if (!fresh)
		return (0);
	while (s && i <= len)
	{
		if (i == len)
		{
			fresh[i] = '\0';
			return ((char *)fresh);
		}
		fresh[i] = s[start + i];
		i++;
	}
	return (0);
}