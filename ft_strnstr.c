/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:29:45 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:53 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locates the first occurrence of the null-terminated string little 
in the string big, where not more than len characters are searched.
Characters that appear after a `\0'	character are not searched.	
it should only be used when portability is not a concern.
If little is an empty string, big is returned; if little occurs 
nowhere in big, NULL is returned; otherwise a pointer to the first
character of the first occurrence of little is returned.*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((len == 0 && !*little) || !*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j]
			&& (i + j) < len && little[j] != '\0')
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char	big[] = "Good morning";
	char	little[] = "m";
	printf("String big: %s\n", big);
	printf("String little: %s\n", little);
	printf("Return:%s\n", ft_strnstr(big, little, 7));
	printf("Return:%s\n", ft_strnstr(big, little, 0));
}*/