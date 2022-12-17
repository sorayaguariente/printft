/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:53:36 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:10:16 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns an array of strings 
obtained by splitting ’s’ using the character ’c’ as a delimiter. 
The array must end with a NULL pointer.
s: The string to be split. c: The delimiter characte
Return: The array of new strings resulting from the split or
NULL if the allocation fails
STATIC - when you use a function that will be use only in that
archive, if another .c uses the same name of function, it won't 
think it is that one*/
#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	words;
	int	flag;

	words = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			words++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (words);
}

static int	count_letters(char const *str, char c, int i)
{
	int	size;

	size = 0;
	while (str[i] != c && str[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = -1;
	word = count_words(s, c);
	str = (char **)malloc((word + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, count_letters(s, c, i));
		if (!str)
			return (NULL);
		i += count_letters(s, c, i);
	}
	str[j] = 0;
	return (str);
}
/*int	main(void)
{
	char split_test[] = "--1-2---3----4----5";
	char **tab = ft_split(split_test, '-');
	printf("Teste[0] = %s\n", tab[0]);
	printf("Teste[1] = %s\n", tab[1]);
	printf("Teste[2] = %s\n", tab[2]);
}*/