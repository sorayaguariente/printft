/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:52:33 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/25 20:06:14 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Deletes and frees the given node and every successor of that node,
 using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
lst: The address of a pointer to a node.
del: The address of the function used to delete the content of 
the node
Return value: none*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next_adress;

	if (lst == NULL || del == NULL)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		next_adress = temp->next;
		del(temp->content);
		free(temp);
		temp = next_adress;
	}
	*lst = NULL;
}
/*#include <stdio.h>
void	del(void *este)
{
 	free (este);
}
int		main()
{
	t_list *aux;
	t_list *no1;
	t_list *no2;
	t_list *no3;
	char *c1 = ft_strdup("     1 - ");
    char *c2 = ft_strdup("   2 - ");
    char *c3 = ft_strdup("   3 - ");
    char *c4 = ft_strdup("      4");
	aux = ft_lstnew(c1);
	no1 = ft_lstnew(c2);
	no2 = ft_lstnew(c3);
	no3 = ft_lstnew(c4);
	ft_lstadd_back(&aux, no1);
	ft_lstadd_back(&aux, no2);
	ft_lstadd_back(&aux, no3);
	printf("\n%s	    %s	%s	    %s\n", (char *)aux->content,
										(char *)aux->next->content,
										(char *)aux->next->next->content,
										(char *)aux->next->next->next->content);
	printf("%p %p %p %p %p\n", aux, aux->next, aux->next->next,
										aux->next->next->next,
										aux->next->next->next->next);
	ft_lstclear(&aux, del);
	printf("\n%p\n", aux);
	return (0);
}*/