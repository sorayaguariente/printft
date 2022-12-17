/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:08:43 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:34 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*s1: The prefix string. s2: The suffix string.
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’
Return: The new string or NULL if the allocation fails*/
#include "libft.h"
/*#include <stdlib.h>*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*both_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	both_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (both_str == NULL)
		return (NULL);
	while (j < len_s1)
		both_str[i++] = s1[j++];
	j = 0;
	while (j < len_s2)
		both_str[i++] = s2[j++];
	both_str[i] = '\0';
	return (both_str);
}
/*#include <stdio.h>
int	main(void)
{
	char	*str1 = "Hello";
	char	*str2 = " everybody";
	char	*str3;
	printf("%s %s\n", str1, str2);

	str3 = ft_strjoin(str1, str2);

	printf("%s\n", str3);
	return (0);
}*/