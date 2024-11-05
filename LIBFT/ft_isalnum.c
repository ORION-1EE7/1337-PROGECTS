/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:35:08 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/03 20:42:36 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 64 && c <= 90) || (c >= 97 && c <= 122) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
int main()
{
    printf("alnum returned: %d\n", ft_isalnum('h'));
    printf("alnum returned: %d\n", ft_isalnum('9'));
    printf("alnum returned: %d\n", ft_isalnum('.'));
}
*/
