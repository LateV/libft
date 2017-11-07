/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:37:36 by vibondar          #+#    #+#             */
/*   Updated: 2017/10/30 12:37:38 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>
#include "libft.h"

int main (void)
{
	//int kek[10];
	int i;
	int che;
	int w = 123456;
	size_t r = 10;
	char k[] = "rrrrrrrrrrrr";
	char p[] = "rrrrrrrrrrrr";
	char ar[19] =  "9223372036854775850";
	char ar1[20] =  "-9223372036854775850";
	char *res;
	char *res1;
	
	i = 0;

	/*
	printf("%s" , ft_itoa(w));
	*/


	/*
	printf("std = %d \n" , che = atoi(ar));
	printf("std1 = %d \n" , che = atoi(ar1));
	printf("my = %d \n" , che = ft_atoi(ar));
	printf("my1 = %d \n" , che = ft_atoi(ar1));
	*/



	/*
	//printf("int = ");
	while(i < 10)
	{
		kek[i] = 5;
		printf("%d", kek[i]);
		i++;
	}
	//printf("%s\n");
	i = 0;
	printf("dest my = %s\n", k);
	printf("dest std = %s\n", p);
	*/



	/*
	bzero(k, 8);
	ft_bzero(k, 8);
	bzero(p, 8);
	while (i < 14)
	{
		printf("dest my = %c\n", k[i]);
		printf("dest std = %c\n", p[i]);
		i++;
	}
	*/


	/*
	res = ft_memccpy(k + 2 , k, 'k', 6);
	res1 = memccpy(k + 2 , k, 'k', 6);
	printf("dest my = %s\n", res);
	printf("dest std = %s\n", res1);
	
	*/

	/*
	res = ft_memchr(k, 'k' , 6);
	res1 = memchr(p , 'k', 6);
	printf("dest my = %s\n", res);
	printf("dest std = %s\n", res1);
	*/




	/*
	printf("dest my = %d\n", ft_memcmp(k , p, 8));
	printf("dest std = %d\n", memcmp(k , p, 8));
	*/



	/*
	ft_memcpy(k  , k, 6);
	memcpy(p , p, 6);
	printf("dest my = %s\n", k);
	printf("dest std = %s\n", p);
	*/



	/*
	ft_memmove(k + 3, k, 3);
	memmove(p + 3, p, 3);
	printf("dest my = %s\n", k);
	printf("dest std = %s\n", p);
	*/



	
	//ft_memset(k, '8' , 100);
	memset(p, '8' , 100);
	printf("k = %s\n", k);
	printf("p = %s\n", p);
	


	return(0);
}