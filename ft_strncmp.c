/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:59:07 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 10:50:42 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;
	size_t			i;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((d1[i] || d2[i]) && i < n)
	{
		if (d1[i] != d2[i])
			return (d1[i] - d2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>

// int main(void)
// {
//     const char *s1 = "000";
//     const char *s2 = "abc";
//     size_t n = 3;

//     int res_orig = strncmp(s1, s2, n);
//     int res_ft   = ft_strncmp(s1, s2, n);

//     printf("strncmp   = %d\n", res_orig);
//     printf("ft_strncmp= %d\n", res_ft);

//     return (0);
// }
