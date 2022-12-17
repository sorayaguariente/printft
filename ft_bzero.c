/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:25:42 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:08:20 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this function is the same as memset, but instead of using any int to
the length, it erases the date, replacing the void with null*/
#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, '\0', len);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	arr[] = "hello everyone";
	char	arr2[] = "hello everyone 2";
	int	b = 2;
	printf("String: %s\n", arr);
	ft_bzero(arr, b);
	printf("Return: %s\n", arr);
	bzero(arr2, b);
	printf("Return: %s\n", arr2);
	return (0);
}*/
