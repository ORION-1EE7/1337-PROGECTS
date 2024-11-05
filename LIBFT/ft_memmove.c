/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:53:37 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 13:27:41 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d < s)
	{
		while (n--)
			ft_memcpy(d, s, n);
	}
	else
	{
		d += n;
		s += n;
		while (n > 0)
		{
			*(--d) = *(--s);
			n--;
		}
	}
	return (dest);
}

/*
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    int i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return d;
}

int main()
{
    char buffer[10] = "abcdef";
    memmove(buffer, buffer + 1, 4);
    printf("memmove: %s\n", buffer); // Expect "bcdeef"
    // ft_memmove(buffer, buffer + 1, 4);
    // printf("ft_memmove: %s\n", buffer); // Expect "bcdeef"
}*/
