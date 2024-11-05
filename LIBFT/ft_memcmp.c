/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:53:30 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 18:09:22 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (!s1 || !s2 || !n)
		return (0);
	while (i < n)
	{
		if (ps1[i] != ps2[i])
		{
			return ((ps1[i] - ps2[i]));
		}
		i++;
	}
	return (0);
}

/*
int main()
{
    int arr[] = {1, 2};
    short arr01[] = {1, 2};
    
    if(ft_memcmp(arr, arr01, 2 * sizeof(short int)) == 0)
        printf("same");
    else
        printf("not same");
}*/
