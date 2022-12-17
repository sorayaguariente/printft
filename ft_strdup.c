/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:58:09 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:23 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns a pointer to a new string which is a duplicate of 
the string src. Memory for the new string is obtained with malloc(3), 
and can be freed with free(3). Returns a pointer to the duplicated 
string, or NULL if insufficient memory was available*/
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "Hello my people";
	printf("Return: %s\n", ft_strdup(src));
	printf("Return: %s\n", strdup(src));
}*/