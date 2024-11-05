/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:52:06 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 21:01:22 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **lst, t_list *new)
{
	t_list		*curr;

	curr = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
}

/*
t_list *ft_lstnew(void *content)
{
    t_list *new_node;
    new_node = malloc(sizeof(t_list));
    if(new_node == NULL)
        return 0;
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}


void print_list(t_list *lst) 
{
    while (lst != NULL) {
        printf("%d -> ", lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}


int main()
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew((void *)10));
    ft_lstadd_back(&head, ft_lstnew((void *)20));
    ft_lstadd_back(&head, ft_lstnew((void *)30));

    print_list(head);
    return 0;
}
*/
