/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:53:40 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 16:04:39 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (s);
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int main()
{
    int arr[] = {1, 2};
    int arr01[] = {1, 2};
    
    ft_memset(&arr, 0, 2*sizeof(int));
    printf("memset returned: %d  %d\n", arr[0], arr[1]);
    printf("memset returned: %08x  %08x\n", arr[0], arr[1]);
    ft_memset(&arr, 1, 2*sizeof(int));
    printf("memset returned: %d  %d\n", arr[0], arr[1]);
    printf("memset returned: %08x  %08x\n", arr[0], arr[1]);
}*/
