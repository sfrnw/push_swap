/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asafrono <asafrono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:02:33 by asafrono          #+#    #+#             */
/*   Updated: 2024/11/04 14:09:56 by asafrono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdlib.h>
// #include <stdio.h>

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = *lst;
			while (last->next)
				last = last->next;
			last->next = new;
		}
		else
			*lst = new;
	}
}

// static t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new_node;

// 	new_node = (t_list *)malloc(sizeof(t_list));
// 	if (!new_node)
// 		return (NULL);
// 	new_node->content = content;
// 	new_node->next = NULL;
// 	return (new_node);
// }

// static void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s -> ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new_node;

// 	list = NULL;

// 	printf("Initial list: ");
// 	print_list(list);

// 	new_node = ft_lstnew("Hello");
// 	ft_lstadd_back(&list, new_node);
// 	printf("After adding 'Hello': ");
// 	print_list(list);

// 	new_node = ft_lstnew("World");
// 	ft_lstadd_back(&list, new_node);
// 	printf("After adding 'World': ");
// 	print_list(list);

// 	new_node = ft_lstnew("!");
// 	ft_lstadd_back(&list, new_node);
// 	printf("After adding '!': ");
// 	print_list(list);

// 	while (list)
// 	{
// 		t_list *temp = list;
// 		list = list->next;
// 		free(temp);
// 	}

// 	return (0);
// }