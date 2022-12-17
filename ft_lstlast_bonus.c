/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:20:53 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/25 20:05:08 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst: The beginning of the list
Return value: Last node of the list*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*#include <stdio.h>
int	main()
{
	t_list *aux;
	t_list *second;
	t_list *third;
	t_list *fourth;
	t_list *last;
	aux = ft_lstnew("One");
	second = ft_lstnew("Two");
	third = ft_lstnew("Three");
	fourth = ft_lstnew("Four");
	aux->next = second;
	second->next = third;
	third->next = fourth;
	last = ft_lstlast(aux);
	printf("The last t_list is %s and has a pointer to %s \n",
						(char *)last->content, last->next);
	return (0);
}*/