/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:35:13 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:07:56 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copy strings in a more consistent way, with less error prone replacements
Take the full size of the buffer (not just the length) and guarantee 
to NUL-terminate the result (as long as size is larger than 0). 
Note that a byte for the NUL should be included in size. 
Also note that strlcpy() only operate on true ''C'' strings. 
This means that for strlcpy() src must be NUL-terminated*/
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = ft_strlen((char *)src);
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (count);
	while (src[index] && (index < size - 1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (count);
}
/*#include <stdio.h>
int     main(void)
{
	char    arr1[15] = "south africa";
	char    arr2[15] = "mexico";
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	printf("Caracteres transferidos: %zu\n", ft_strlcpy(arr2, arr1, 8));
	printf("Destination: %s\n", arr2);
	return (0);
}*/