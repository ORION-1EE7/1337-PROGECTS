/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:46:32 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 20:48:46 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c > 127 || c < 0)
		return (0);
	else
		return (1);
}

/*
int main()
{
    printf("alnum returned: %d\n", ft_isascii('h'));
    printf("alnum returned: %d\n", ft_isascii('9'));
    printf("alnum returned: %d\n", ft_isascii('.'));
}*/
