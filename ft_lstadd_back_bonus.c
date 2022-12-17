/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:49:22 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/25 20:05:28 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst: Adds the node ’new’ at the end of the list.
lst: The address of a pointer to the first link of a list
new: The address of a pointer to the node to be added to the list.
Return value: None*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*#include <stdio.h>

void	ft_putstr(char *s)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}
int	main(void)
{
	t_list	*list;
	t_list	*s1;
	t_list	*s2;
	t_list	*new;
	list = ft_lstnew("Testing/ ");
	s1 = ft_lstnew("this/ ");
	s2 = ft_lstnew("function");
	new = ft_lstnew("/ this was add after!");
	list->next = s1;
	s1->next = s2;
	printf("%s\n", "List: ");
	print_list(list);
	printf("\n\n");
	ft_lstadd_back(&list, new);
	printf("%s\n", "ft_lstadd_back: ");
	print_list(list);
	return(0);
}*/