/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:50:41 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 10:09:01 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

// #include <string.h>

// int main(void)
// {
//     char s[] = "Hello, 42 Le Havre!";
//     int c = '4';
//     size_t n = 15;

//     void *res_orig = memchr(s, c, n);

//     void *res_ft = ft_memchr(s, c, n);

//     printf("memchr()    = %p\n", res_orig);
//     printf("ft_memchr() = %p\n", res_ft);

//     return (0);
// }
