/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:53:34 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 18:10:20 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
int main()
{
    int arr[] = {1, 2};
    int arr01[] = {3, 4};
    
    int *farr = ft_memcpy(&arr, &arr01, 8);
    printf("memcpy returned: %d  %d\n", farr[0], farr[1]);
    printf("memcpy returned: %08x  %08x\n", farr[0], farr[1]);
}
*/
