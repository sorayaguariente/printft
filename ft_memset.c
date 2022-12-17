/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:34:57 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:11:44 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* the function is used before an operation, as if it was a reset 
of the memory. with a void destiny, catches the size_t (number of 
positions) and replace what ever is in these positions with the 
int that you choose*/
#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t len)
{
	unsigned char	*memory;
	unsigned int	i;

	i = 0;
	memory = dest;
	while (i < len)
	{
		memory[i] = ch;
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	e[] = "oi tudo bem?";
	int		f = 48;

	printf("result of %s, using ft_memset, is %s", e, (char *)ft_memset(e, f, 3));
	printf(" and using memset, is %s", (char *)memset(e, f, 3));
}*/