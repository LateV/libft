/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 13:41:08 by vibondar          #+#    #+#             */
/*   Updated: 2017/10/27 13:43:42 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}


/*


static size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t i;

	if (src && dst && (ft_strlen(dst) >= ft_strlen(src)))
	{
		i = 0;
		while (i < len)
		{
			if (i > ft_strlen(src))
				dst[i] = '\0';
			else
				dst[i] = src[i];
			i++;
		}
		return (dst);
	}
	return (NULL);	
}
*/