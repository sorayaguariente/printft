/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:31:51 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:08:37 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*check if int is a number*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
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
	printf("result of %c, using ft_isdigit, is %d", a, ft_isdigit(a));
	printf(" and using isdigit, is %d \n", isdigit(a));
	printf("result of %c, using ft_isdigit, is %d", b, ft_isdigit(b));
	printf(" and using isdigit, is %d \n", isdigit(b));
	printf("result of %c, using ft_isdigit, is %d", c, ft_isdigit(c));
	printf(" and using isdigit, is %d \n", isdigit(c));
	printf("result of %c, using ft_isdigit, is %d", d, ft_isdigit(d));
	printf(" and using isdigit, is %d \n", isdigit(d));
}*/