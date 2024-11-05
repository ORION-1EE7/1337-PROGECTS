/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:54:58 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 18:23:52 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	x;
	int	y;

	x = 0;
	y = ft_strlen(s1);
	while (!is_set(s1[x], set))
		x++;
	while (!is_set(s1[y], set))
		y--;
	return (ft_substr(s1, x, y - x + 1));
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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring = malloc((len + 1) * sizeof(char));
    int i = 0;
    if(!substring)
        return (NULL);
    while(i < len)
    {
        substring[i] = s[start + i];
        i++;
    }
    substring[i] = 0;
    return (substring);

}


int main()
{
    printf("the return is: %s\n", ft_strtrim("AAAABBAAAAAjAjAAAABBAAA", "AB"));
}*/
