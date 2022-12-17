/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:38:38 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/09 17:34:20 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*check if int is a letter*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
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
	printf("result of %c, using ft_isalpha, is %d", a, ft_isalpha(a));
	printf(" and using isapha, is %d \n", isalpha(a));
	printf("result of %c, using ft_isalpha, is %d", b, ft_isalpha(b));
	printf(" and using isapha, is %d \n", isalpha(b));
	printf("result of %c, using ft_isalpha, is %d", c, ft_isalpha(c));
	printf(" and using isapha, is %d \n", isalpha(c));
	printf("result of %c, using ft_isalpha, is %d", d, ft_isalpha(d));
	printf(" and using isapha, is %d \n", isalpha(d));
}*/