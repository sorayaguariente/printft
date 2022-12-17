/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:15:10 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:11:12 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function convert uppercase letters to lowercase */
#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c = 'E';
	char d = 'd';
	printf("%c after function ft_tolower is %c\n", c, ft_tolower(c));
	printf("%c after function tolower is %c\n", c, tolower(c));
	printf("%c after function ft_tolower is %c\n", d, ft_tolower(d));
	printf("%c after function tolower is %c\n", d, tolower(d));
}*/