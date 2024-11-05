/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:23:11 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 16:55:24 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '0';
		i++;
	}
}

/*
int main()
{
    unsigned char s[] = "ORION LEET HERE";  
    //unsigned char *s = "ORION LEET HERE"; don´t do that;
    ft_bzero(s, 5);
    printf("bzero returned: %s\n", s);
}*/
