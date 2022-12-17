/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:32:52 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/09 17:36:42 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*check if int is printable*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		a = 'a';
	int		b = '1';
	int		c = '/';
	int		d = '\b';
	printf("result of %c, using ft_isprint, is %d", a, ft_isprint(a));
	printf(" and using isprint, is %d \n", isprint(a));
	printf("result of %c, using ft_isprint, is %d", b, ft_isprint(b));
	printf(" and using isprint, is %d \n", isprint(b));
	printf("result of %c, using ft_isprint, is %d", c, ft_isprint(c));
	printf(" and using isprint, is %d \n", isprint(c));
	printf("result of %c, using ft_isprint, is %d", d, ft_isprint(d));
	printf(" and using isprint, is %d \n", isprint(d));
}*/