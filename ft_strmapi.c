/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:21:44 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:44 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ to each character of the string 
’s’, and passing its index as first argument to create a 
new string (with malloc(3)) resulting from successive 
applications of ’f’.
s: The string on which to iterate.
f: The function to apply to each character.
Return: The string created from the successive applications
of ’f’. or NULL if the allocation fails.*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	if (str == '.')
		return (str);
	return (str - 32);
	}
int main()
{
	char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return (0);
}*/