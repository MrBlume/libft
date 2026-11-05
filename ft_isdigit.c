/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:54:01 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 12:45:24 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
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

//         printf("isdigit() = %d | ", isdigit(c));
//         printf("ft_isdigit() = %d\n", ft_isdigit(c));
//     }

//     return (0);
// }
