/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:22:40 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:11:02 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of ’s1’ 
with the characters specified in ’set’ removed from the 
beginning and the end of the string, if set is only in the middle, 
returns s1 without removing anything 
s1: The string to be trimmed.
set: The reference set of characters to trim.
Return:The trimmed string or NULL if the allocation fails*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dest;
	unsigned int	start;
	unsigned int	end;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while ((s1[end] != s1[start]) && ft_strchr(set, s1[end]))
		end--;
	dest = ft_substr(s1, start, (end - start) + 1);
	if (!dest)
		return (0);
	return (dest);
}
/*int		main(void)
{
	char *str = "aaascjfhbajshbaaa";
	char *tirar = "as";
	char *here;
	here = ft_strtrim(str, tirar);
	printf("%s\n", str);
	printf("%s\n", here);
}*/