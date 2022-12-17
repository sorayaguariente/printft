/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:55:14 by sguarien          #+#    #+#             */
/*   Updated: 2022/12/12 18:37:07 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexlen(unsigned int num)
{
	int	length;

	length = 0;
	while (num != 0)
	{
		num = num / 16;
		length++;
	}
	return (length);
}

void	ft_printhex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_printhex(num / 16, format);
		ft_printhex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (format == 'x')
				ft_putchar((num - 10 + 'a'));
			if (format == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
}

int	ft_puthexadecimal(unsigned int num, const char type)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_printhex(num, type);
	return (ft_hexlen(num));
}
