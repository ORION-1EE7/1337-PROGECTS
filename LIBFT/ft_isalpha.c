/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:43:32 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 20:45:22 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 64 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
int main()
{
    printf("alnum returned: %d\n", ft_isalpha('h'));
    printf("alnum returned: %d\n", ft_isalpha('9'));
    printf("alnum returned: %d\n", ft_isalpha('.'));
}*/
