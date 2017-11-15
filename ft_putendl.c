/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 14:46:18 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/03 14:46:19 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int a;

	a = 0;
	if (s)
	{
		while (s[a] != '\0')
		{
			ft_putchar(s[a]);
			a++;
		}
	}
	ft_putchar('\n');
}
