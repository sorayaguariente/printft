/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:12:22 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:57 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns a pointer to the last occurrence of the character c in the
string s.*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)s + len);
	while (len >= 0)
	{
		if (s[len] == c)
			return (((char *)s) + len);
		len--;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "the letter g is the first to appear and g is the last to appear";
	printf("String: %s\n", str);
	printf("Return 1: %s\n", ft_strrchr(str, 'g'));
	printf("Return 2: %s\n", strrchr(str, 'g'));
}*/