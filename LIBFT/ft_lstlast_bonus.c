/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:52:34 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 21:16:59 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast_bonus(t_list *lst)
{
	t_list		*curr;

	curr = lst;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	return (curr);
}

/*
t_list *ft_lstnew(void *content)
{
    t_list *new_node = malloc(sizeof(t_list));
    if(!new_node)
        return 0;
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int main()
{
    t_list *head = NULL;

    int *value1 = malloc(sizeof(int));
    *value1 = 10;
    ft_lstadd_front(&head, ft_lstnew(value1));

    int *value2 = malloc(sizeof(int));
    *value2 = 20;
    ft_lstadd_front(&head, ft_lstnew(value2));

    int *value3 = malloc(sizeof(int));
    *value3 = 30;
    ft_lstadd_front(&head, ft_lstnew(value3));

    printf("The lstlst: %d\n: ",*(int *)ft_lstlst(head)->content);
    
}*/
