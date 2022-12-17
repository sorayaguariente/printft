/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:03:51 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:11:07 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring
Allocates (with malloc(3)) and returns a substring
from the string ’s’. The substring begins at index ’start’ 
and is of maximum size ’len’
Return: The substring or NULL if the allocation fails.*/
#include "libft.h"
/*#include <stdlib.h>*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc(1 * sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < ft_strlen(s) && len-- > 0)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello everybody";
	printf("Return: %s", ft_substr(str, 15, 10));
}*/