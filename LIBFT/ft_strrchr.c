/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:54:53 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 14:33:00 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (ft_strlen(s) - 1);
	if (c == 0)
		return ((char *)(&s[len + 1]));
	while (len >= 0)
	{
		if (s[len] == c)
		{
			return ((char *)(&s[len]));
		}
		len--;
	}
	return (0);
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


#include <stdio.h>
int main()
{

    char str[] = "1337 leets here";
 

    char chr = 'r';

    char* ptr = ft_strrchr(str, chr);
 
    if (ptr) 
    {
        printf("Last occurrence of chr is %s\n", ptr);
    }
    else
        printf("%c is not present in %s\n ", chr, str);
    return 0;
}
*/
