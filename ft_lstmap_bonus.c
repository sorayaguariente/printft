/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:14:10 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/25 20:06:53 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies the function ’f’ on the 
content of each node. Creates a new list resulting of the successive
applications of the function ’f’. The ’del’ function is used to
delete the content of a node if needed
st: The address of a pointer to a node.
f: The address of the function used to iterate on the list.
del: The address of the function used to delete the content of 
a node if needed.
Return value: The new list or NULL if the allocation fails*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*#include <stdio.h>
void *f(void *test)
{
	char *a = " Tests ";
	return ((char *)ft_strlcpy(test, a, ft_strlen(a) + 1));
}
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
	char *c1 = ft_strdup("Testing, ");
	char *c2 = ft_strdup("this, ");
	char *c3 = ft_strdup("function, ");
	char *c4 = ft_strdup("with list.");
	aux = ft_lstnew(c1);
	no1 = ft_lstnew(c2);
	no2 = ft_lstnew(c3);
	no3 = ft_lstnew(c4);
	ft_lstadd_back(&aux, no1);
	ft_lstadd_back(&aux, no2);
	ft_lstadd_back(&aux, no3);
	printf("\n%s%s%s%s\n", (char *)aux->content, (char *)aux->next->content,
							(char *)aux->next->next->content,
							(char *)aux->next->next->next->content);
	t_list *nova = ft_lstmap(aux, f, del);
	printf("\n%s%s%s%s\n", (char *)aux->content, (char *)aux->next->content,
							(char *)aux->next->next->content,
							(char *)aux->next->next->next->content);
	nova->content = "Testando";
	nova->next->content = " essa";
	nova->next->next->content = " funcao";
	nova->next->next->next->content = " !";
	printf("\n%s%s%s%s\n", (char *)nova->content, (char *)nova->next->content,
							(char *)nova->next->next->content,
							(char *)nova->next->next->next->content);
	return (0);
}*/