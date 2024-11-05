/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:49:10 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 20:51:08 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
int main()
{
    printf("alnum returned: %d\n", ft_isdigit('h'));
    printf("alnum returned: %d\n", ft_isdigit('9'));
    printf("alnum returned: %d\n", ft_isdigit('.'));
}*/
