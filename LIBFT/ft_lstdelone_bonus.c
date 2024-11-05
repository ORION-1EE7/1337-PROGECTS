/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:52:22 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 21:11:56 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone_bonus(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*
void del(void *content)
{
    if(content)
        free(content);
}

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
        printf("%d->", *(int *)curr->content);
        curr = curr->next;
    }
    printf("NULL\n");
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
    ft_lstadd_front(&head, ft_lstnew((void *)10));

    printf("The list before clear: ");
    ft_print_list(head);

     ft_lstdelone(head, del);
     int *value4 = malloc(sizeof(int));
    *value4 = 30;
    ft_lstadd_front(&head, ft_lstnew(value4));
    printf("The list before clear: ");
    ft_print_list(head);
    return 0;
}*/
