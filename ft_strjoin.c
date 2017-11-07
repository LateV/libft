/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 13:07:16 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/03 13:07:20 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int				i;
	int				j;
	size_t			len_s1;
	size_t			len_s2;
	unsigned char	*r;

	i = 0;
	j = -1;
	if (!s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	r = (unsigned char *)ft_memalloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (!r)
		return (0);
	while (i < (int)len_s1)
	{
		r[i] = s1[i];
		i++;
	}
	while (++j < (int)len_s2)
		r[i + j] = s2[j];
	r[i + j] = '\0';
	return ((char *)r);
}
