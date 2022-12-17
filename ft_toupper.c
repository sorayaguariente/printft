/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:05:18 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:11:17 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function convert lowercase letters to uppercase */
#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return (ch);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c = 'a';

	printf("%c after function ft_toupper is %c\n", c, ft_toupper(c));
	printf("%c after function toupper is %c\n", c, toupper(c));
}*/