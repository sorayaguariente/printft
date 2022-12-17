/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:32:04 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:03:52 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strlcat() appends string src to the end of dest.  It will append
at most dest_size - strlen(dst) - 1 characters.
It will then NUL-terminate, unless dest_size is 0 or the
original dst string was longer than dstsize
(in practice this should not happen as it means that either 
dest_size is incorrect or that dest is not a proper string).
If the src and dest strings overlap, the behavior is undefined.
*/
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;
	size_t	dest_size;

	if (!dest && !src)
		return (0);
	i = 0;
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	dest_size = ft_strlen(dest);
	if (size <= dest_size)
		return (src_size + size);
	while (dest_size + i < (size - 1) && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	arr1[25] = "morning";
	char	arr2[25] = "good";
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	printf("Caracteres: %zu\n", ft_strlcat(arr2, arr1, 41));
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	return (0);
}*/