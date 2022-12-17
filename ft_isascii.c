/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:52:03 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/09 17:36:00 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*check if int is from the ascii table*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		a = 'a';
	int		b = '1';
	int		c = 128;
	int		d = '\b';
	printf("result of %c, using ft_isascii, is %d", a, ft_isascii(a));
	printf(" and using isascii, is %d \n", isascii(a));
	printf("result of %c, using ft_isascii, is %d", b, ft_isascii(b));
	printf(" and using isascii, is %d \n", isascii(b));
	printf("result of %c, using ft_isascii, is %d", c, ft_isascii(c));
	printf(" and using isascii, is %d \n", isascii(c));
	printf("result of %c, using ft_isascii, is %d", d, ft_isascii(d));
	printf(" and using isascii, is %d \n", isascii(d));
}*/