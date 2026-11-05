/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:30:45 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 12:09:30 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 126)
		return (1);
	if (c == 127)
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

//         printf("isascii() = %d | ", isascii(c));
//         printf("ft_isascii() = %d\n", ft_isascii(c));
//     }

//     return (0);
// }
