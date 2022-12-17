/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:04:32 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:09:17 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Scans the initial n bytes of the memory area pointed to by s 
for the first instance of c. Both c and the bytes of the memory area 
pointed to by s are interpreted as unsigned char.
Return a pointer to the matching byte or NULL if 
the character does not occur in the given memory area.*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello people";
	printf("String: %s\n", str);
	printf("Return: %s", (char *)ft_memchr(str, 'p', 8));
	printf("\nReturn: %s", (char *)memchr(str, 'p', 8));
}*/