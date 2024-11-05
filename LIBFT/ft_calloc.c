/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:32:03 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/05 13:23:51 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		len;

	len = nmemb * size;
	ptr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ft_bzero(ptr, len);
	return (ptr);
}

/*
int main()
{
    char *str = (char *) ft_calloc(20, sizeof(char));
    printf("the return is: %s\n", str);
}
*/