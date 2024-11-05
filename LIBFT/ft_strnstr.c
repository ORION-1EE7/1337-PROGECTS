/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:54:49 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 16:08:04 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && (i + j) < len
				&& big[i + j] == little[j])
			{
				j++;
			}
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main() 
{
    const char* haystack = "Hello, this is a test string.";
    const char* needle = "test";

    char* result = ft_strnstr(haystack, needle, 21);

    if (result) {
        printf("Substring found at position: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}*/
