/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:52:12 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 21:02:36 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front_bonus(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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

void ft_print_list(t_list *list)
{
    t_list *curr = list;
    while(curr)
    {
        printf("%d->", curr->content);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main()
{
    t_list *head = NULL;

    ft_lstadd_front(&head, ft_lstnew((void *)10));
    ft_lstadd_front(&head, ft_lstnew((void *)20));
    ft_lstadd_front(&head, ft_lstnew((void *)30));

    ft_print_list(head);
}
*/
