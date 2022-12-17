/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:03:23 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:09:21 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compares the first n bytes (each interpreted as unsigned char) 
of the memory areas s1 and s2.
Returns an integer less than, equal to, or greater than zero if 
the first n bytes of s1 is found, respectively, to be less than, 
to match, or be greater than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign 
of the difference between the first pair of bytes (interpreted 
as unsigned char) that differ in s1 and s2.*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;
	size_t			i;

	i = 0;
	mem1 = (unsigned char *)s1;
	mem2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (mem1[i] != mem2[i])
			return (mem1[i] - mem2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str1[] = "good morning";
	char str3[] = "good afternoon";
	printf("Primeira String: %s", str1);
	printf("\nSegunda String: %s", str3);
	printf("\nReturn: %d", ft_memcmp(str1, str3, 6));
	printf("\nReturn: %d", memcmp(str1, str3, 6));
}*/