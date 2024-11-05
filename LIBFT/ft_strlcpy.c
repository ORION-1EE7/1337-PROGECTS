/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:54:32 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 14:08:42 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1)
		{
			if (src[i])
			{
				dst[i] = src[i];
				i++;
			}
			else
			{
				break ;
			}
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src));
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
    ft_strlcpy(dst, "nigga!", 4); expected nig
    printf("the result is: %s\n", dst);
    printf("the result is: %i\n", ft_strlcpy(dst, "world!", 5));
    printf("the result is: %i\n", ft_strlcpy(dst, "world!", 13));
    
}
*/
