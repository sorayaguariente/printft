/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:38:09 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:12:08 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memcpy() function copies n bytes from memory area src to 
memory area dest. The memory areas must not overlap.
(unsigned char *) is typecasted because this type occupies 1 byte, 
so it won't restrict this function and avoids const declaration
unsigned char *mem_src; redeclare memory to get memory value*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;
	size_t			i;

	if (src == NULL && dest == NULL)
		return (dest);
	mem_src = (unsigned char *)src;
	mem_dest = (unsigned char *)dest;
	i = 0;
	while (i < len)
	{
		mem_dest[i] = mem_src[i];
		i++;
	}
	return (mem_dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	e[] = "oi tudo bem?";
	char	f[] = "teste";
	int		g = 4;

	printf("result of %s, using ft_memcpy, is %s", e, (char *)ft_memcpy(e, f, g));
	printf(" and using memcpy, is %s", (char *)memcpy(e, f, 3));
}*/