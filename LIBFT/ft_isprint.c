/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:55:33 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 20:56:50 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (0);
	else
		return (1);
}

/*
int main()
{
    printf("alnum returned: %d\n", ft_isprint('h'));
    printf("alnum returned: %d\n", ft_isprint('9'));
    printf("alnum returned: %d\n", ft_isprint('\0'));
}*/
