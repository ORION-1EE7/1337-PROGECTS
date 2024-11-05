/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:53:23 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 16:10:01 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize_bonus(t_list *lst)
{
	t_list	*curr;
	int		i;

	curr = lst;
	i = 0;
	if (lst == 0)
		return (0);
	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}
