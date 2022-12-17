/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:30:28 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:50 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Only compares the first (at most) n bytes of the strings s1 and s2.
Return an integer less than, equal to, or greater than zero 
if s1 (or the first n bytes thereof) is found, respectively, to be 
less than, to match, or be greater than s2.*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] != '\0'
		&& s2[i] != '\0' && len - 1 > 0)
	{
		i++;
		len--;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Good morning";
	printf("Primeira String: %s", str1);
	printf("\nSegunda String: %s", str2);
	printf("\nReturn: %zu", ft_strncmp(str1, str2, 5));
	printf("\nReturn: %zu", strncmp(str1, str2, 5));
}*/