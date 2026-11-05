/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:30:45 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 12:09:38 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

//         printf("isprint() = %d | ", isprint(c));
//         printf("ft_isprint() = %d\n", ft_isprint(c));
//     }

//     return (0);
// }
