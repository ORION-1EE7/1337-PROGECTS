/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:54:39 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 15:48:14 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(s) + 1 * sizeof (char *));
	if (!s || !f || !str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
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


char f(unsigned int i, char c)
{
    c = c + 1;
    return c;
}
int main()
{
    char s[] = "abcdef";
    char *str = ft_strmapi(s, f);
    printf("strmapi returned: %s\n", str);
}*/
