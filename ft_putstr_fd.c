/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:18:17 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:07 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string ’s’ to the given file descriptor
s: The string to output.
fd: The file descriptor on which to write
Return value: None*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*int		main()
{
	ft_putstr_fd("Hello", 1);
	return (0);
}*/