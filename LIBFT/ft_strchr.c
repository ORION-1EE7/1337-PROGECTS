/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaleb <mtaleb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:54:11 by mtaleb            #+#    #+#             */
/*   Updated: 2024/11/04 16:54:40 by mtaleb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int			i;
	const char	*p;

	i = 0;
	while (s[i])
	{
		p = &s[i];
		if (s[i] == c)
		{
			return ((char *)p);
		}
		i++;
	}
	if (c == 0)
	{
		p = &s[i];
		return ((char *)(p));
	}
	return (0);
}

/*int main() 
{
   const char *str = "Welcome to Tutorialspoint";
   char ch = 'u';
   // Find the first occurrence of 'u' in the string
   char *p = strchr(str, ch);

   if (p != NULL) 
   {
       printf("String starting from '%c' is: %s\n", ch, p);
   } 
   else 
   {
       printf("Character '%c' not found in the string.\n", ch);
   }
   return 0;
}
*/
