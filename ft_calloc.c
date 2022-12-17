/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:57:26 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/23 18:08:25 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates space for number objects, each size bytes in length.
The result is identical	to calling malloc() with an argument of 
number * size, with the exception that the allocated memory is 
explicitly initialized to zero bytes.
Allocates memory for an array of nmemb elements of size bytes each
and returns a pointer to the allocated memory. The memory is set 
to zero. If nmemb or size is 0, then returns either NULL, or 
a unique pointer value that can later be successfully passed 
to free(). Returns a pointer to the allocated memory 
that is suitably aligned for any kind of variable. On error, 
return NULL. NULL may also be returned by a successful call 
to calloc() with nmemb or size equal to zero.*/
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char			*array;

	array = malloc(nitems * size);
	if (array == NULL)
		return (NULL);
	ft_bzero (array, nitems * size);
	return ((void *)array);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("Return: %s", (char *)ft_calloc(5, 4));
	printf("Return: %s", (char *)calloc(5, 4));
}*/