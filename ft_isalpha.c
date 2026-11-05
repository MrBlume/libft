/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:30:45 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 12:09:25 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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

//         printf("isalpha() = %d | ", isalpha(c));
//         printf("ft_isalpha() = %d\n", ft_isalpha(c));
//     }

//     return (0);
// }
