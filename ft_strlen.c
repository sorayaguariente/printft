/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:15:08 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/08 15:28:52 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function that calculates the length of a given string
does not include the terminating null character*/
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		e[] = "hello, are you ok?";
	int		f = 48;
	printf("result of %s, using ft_strlen, is %d", e, ft_strlen(e));
    printf(" and using strlen, is %lu \n", strlen(e));
}*/