/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:49:07 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:00 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the integer ’n’ to the given file descriptor
n: The integer to output.
fd: The file descriptor on which to write.
Return value: none*/
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n < 10)
		{
			ft_putchar_fd((n + 48), fd);
			return ;
		}
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}
/*int		main(void)
{
	ft_putnbr_fd(1313, 2);
}*/