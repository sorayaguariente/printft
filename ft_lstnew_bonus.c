/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguarien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:17:50 by sguarien          #+#    #+#             */
/*   Updated: 2022/11/25 20:04:02 by sguarien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new node. The member 
variable ’content’ is initialized with the value of the parameter 
’content’. The variable ’next’ is initialized to NULL
content: The content to create the node with.
Return value: The new node
t_list (linked list) is a sequence of data structures, 
which are connected together via links. Is a sequence of links 
which contains items. Each link contains a connection to another 
link
 
stored at a contiguous location; the elements are linked 
using pointers They include a series of connected nodes it is used 
with -> that stands for points to elem1->elem2->elem3->NULL*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*#include <stdio.h>

int		main()
{
	char	str[] = "Testing this new function";
	t_list	*tst;
	tst = ft_lstnew((void *)str);
	printf("\n%s\n", (char *)tst->content);
}*/