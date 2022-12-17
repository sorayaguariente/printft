/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:07:03 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:09:45 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Does the same as memset, but the memory areas may overlap */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		while (len != 0)
		{
			len--;
			((char *)dest)[len] = ((char *)src)[len];
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, len);
	return (dest);
}	
/*#include <stdio.h>
#include <string.h> 

int	main(void)
{
	char src[] = "aaaaa";
	char dest1[] = "bbbbb";
	char src2[] = "12345";
	char dest2[] = "67890";
	printf("\n%s \n", dest1);
	memmove(dest1, src, 5);
	printf("%s\n", dest1);
	printf("\n%s \n", dest2);
	ft_memmove(dest2, src2, 5);
	printf("%s\n", dest2);
}*/