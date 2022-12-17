/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:08:35 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/25 20:05:51 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Takes as a parameter a node and frees the memory of the node’s 
content using the function ’del’ given as a parameter and free
the node. The memory of ’next’ must not be freed.
lst: The node to free.
del: The address of the function used to delete the content
Return value: None*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*#include <stdio.h>
void	del(void *abc)
{
	free (abc);
}
int		main()
{
	t_list *aux;
	t_list *second;
	t_list *third;
	char *c1 = ft_strdup("First ");
    char *c2 = ft_strdup("second ");
    char *c3 = ft_strdup("third ");
	aux = ft_lstnew(c1);
	second = ft_lstnew(c2);
	third = ft_lstnew(c3);
	ft_lstadd_back(&aux, second);
	ft_lstadd_back(&aux, third);
	printf("\n%s	    %s	  %s\n", (char *)aux->content, (char *)aux->next->content,
										(char *)aux->next->next->content);
	printf("%p %p %p %p\n", aux, aux->next, aux->next->next, aux->next->next->next);
	ft_lstdelone(aux, del);
	printf("\n%p\n", aux);
	return (0);
}*/