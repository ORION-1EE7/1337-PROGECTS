/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:54:28 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 16:06:04 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	int		j;

	len = ft_strlen(dst);
	i = len;
	j = 0;
	if (size <= len)
	{
		return (size + ft_strlen(src));
	}
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}

/*
size_t ft_strlen(const char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char dst[20] = "hello ";
    printf("the result is: %i\n", ft_strlcat(dst, "world!", 5));
    printf("the result is: %i\n", ft_strlcat(dst, "world!", 13));
    
}*/
