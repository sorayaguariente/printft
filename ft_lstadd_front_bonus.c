/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:40:36 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/25 20:04:25 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Adds the node ’new’ at the beginning of the list
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list
Return value: None*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*#include <stdio.h>
int		main()
{
	t_list	*j;
	if(!(j = malloc(sizeof(t_list))))
		return 0;

	j->content = (char *)"Hello";
	j->next = NULL;

	t_list *new;
	if(!(new = malloc(sizeof(t_list))))
		return 0;
	
	new->content = (char *)"Goodbye";
	new->next = NULL;

	printf("J-> %s\n", (char *)j->content);

	ft_lstadd_front(&j, new);

	printf("J -> %s\n", (char *)j->content);
}*/