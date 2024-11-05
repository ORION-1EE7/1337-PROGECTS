/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:54:23 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 16:05:34 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		p;

	i = 0;
	p = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2));
	while (s1[i])
	{
		ptr[p] = s1[i];
		i++;
		p++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[p] = s2[i];
		i++;
		p++;
	}
	return (ptr);
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
    printf("the result is: %s\n", ft_strjoin("hello ", "world!"));
}*/
