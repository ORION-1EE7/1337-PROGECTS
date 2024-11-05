/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:52:39 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 11:35:08 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew_bonus(f(lst->content));
		if (!new_node)
		{
			ft_lstclear_bonus(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*       
void *f(void *content)
{
    *(int *)content = *(int *)content * 2;
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
   t_list *current;
   t_list *tmp;
   if(!lst)
    return ;

    while(current != NULL)
    {
        tmp = current;
        current = current->next;
        del(tmp->content);
        free(tmp);
    }
    *lst = NULL;
}


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


void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(*lst == NULL)
    {
     *lst = new;
     return;
    }

    t_list *curr = *lst;
    while(curr->next != NULL)
        curr = curr->next;
    curr->next = new;
}

void del(void *content) 
{
    free(content);
}

void print_list(t_list *list)
{
    t_list *curr = list;
    while(curr)
    {
        printf("%d->", *(int *)curr->content);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {

    t_list *list = NULL;
    
    int *var1= (malloc(sizeof(int)));
    *var1 = 10;
    ft_lstadd_back(&list, ft_lstnew(var1));

    int *var2= (malloc(sizeof(int)));
    *var2 = 15;
    ft_lstadd_back(&list, ft_lstnew(var2));

    int *var3= (malloc(sizeof(int)));
    *var3 = 10;
    ft_lstadd_back(&list, ft_lstnew(var3));

    printf("Original list: ");
    print_list(list);

    t_list *new_list = ft_lstmap(list, f, del);

    printf("Mapped list: ");
    print_list(new_list);


    return 0;
}*/
