/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:14:35 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:08:17 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts the initial portion of the string pointed to by nptr 
to int. Atoi does not detect errors.
Return Value: The converted value. */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (sign * result);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	str[] = "     -1345685abc17";
	printf ("string: %s\n", str);
	printf ("Return: %d\n", ft_atoi(str));
	printf ("Return 2: %d\n", atoi(str));
}*/