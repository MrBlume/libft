/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:30:45 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 12:09:21 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <ctype.h>

// int main(void)
// {
//     char tests[] = {'a', 'Z', '7', '+', ' '};
//     int nb_tests = sizeof(tests) / sizeof(tests[0]);

//     for (int i = 0; i < nb_tests; i++)
//     {
//         char c = tests[i];

//         printf("isalnum() = %d | ", isalnum(c));
//         printf("ft_isalnum() = %d\n", ft_isalnum(c));
//     }

//     return (0);
// }
