/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:24:15 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/09 17:35:35 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*check if the int is a letter or a number*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c <= '9' && c >= '0'))
		return (8);
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
	printf("result of %c, using ft_isalnum, is %d", a, ft_isalnum(a));
	printf(" and using isalnum, is %d \n", isalnum(a));
	printf("result of %c, using ft_isalnum, is %d", b, ft_isalnum(b));
	printf(" and using isalnum, is %d \n", isalnum(b));
	printf("result of %c, using ft_isalnum, is %d", c, ft_isalnum(c));
	printf(" and using isalnum, is %d \n", isalnum(c));
	printf("result of %c, using ft_isalnum, is %d", d, ft_isalnum(d));
	printf(" and using isalnum, is %d \n", isalnum(d));
}*/