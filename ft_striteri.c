/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:45:27 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:30 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ on each character of the string 
passed as argument, passing its index as first argument. 
Each character is passed by address to ’f’ to be modified 
if necessary 
s: The string on which to iterate.
f: The function to apply to each character.
Return value: None*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
void ft_printchar(unsigned int n, char *str)
{
	int num = '0' + n;
	write(1, &(num), 1);
	write(1, str, 1);
}
int main(void)
{
	char str[10] = "Hi !";
	ft_striteri(str, ft_printchar);
	return (0);
}*/