/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:04:05 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:20 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns a pointer to the first occurrence 
of the character c in the string s.
Return a pointer to the matched character or NULL if
the character is not found.
Locates the first occurrence of c (converted to a char) 
in the string pointed to by s.  
The terminating null character is considered part of the string; 
therefore if c is `\0', the	functions locate the terminating `\0'.*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (((char *)s + i));
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "the letter g is the first to appear";
	printf("String: %s\n", str);
	printf("Return 1: %s\n", ft_strchr(str, 'g'));
	printf("Return 2: %s\n", strchr(str, 'g'));
}*/