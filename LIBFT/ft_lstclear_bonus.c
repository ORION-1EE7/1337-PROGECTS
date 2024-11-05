/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:52:17 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 18:46:24 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_bonus(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*tmp;

	current = *lst;
	if (!lst)
	{
		return ;
	}
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
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
        printf("%d->", curr->content);
        curr = curr->next;
    }
    printf("NULL\n");
}

#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}


int main()
{
    t_list *head = NULL;

    ft_lstadd_front(&head, ft_lstnew((void *)10));
    ft_lstadd_front(&head, ft_lstnew((void *)20));
    ft_lstadd_front(&head, ft_lstnew((void *)30));

    printf("the list befor clear: ");
    ft_print_list(head);
    
    ft_lstclear(&head, del);
    ft_lstadd_front(&head, ft_lstnew((void *)10));
    printf("the list after clear: ");
    ft_print_list(head);
}*/
