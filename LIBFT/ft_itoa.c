/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:08:06 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 16:53:23 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = num_len(n) + 2;
	res = malloc(len * sizeof(char));
	res[len - 1] = 0;
	len--;
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n)
	{
		res[len - 1] = (n % 10 + '0');
		n = n / 10;
		len--;
	}
	return (res);
}

/*
int main()
{
    int n = -123456789;
    printf("%s\n", ft_itoa(n));
}
*/
