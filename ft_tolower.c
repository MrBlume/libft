/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:32:25 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:16:59 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <ctype.h>

// int main(void)
// {
//     int tests[] = {'A', 'Z', 'a', 'z', '4', '!', '\n'};
//     int nb_tests = sizeof(tests) / sizeof(tests[0]);

//     for (int i = 0; i < nb_tests; i++)
//     {
//         int c = tests[i];

//         int res_orig = tolower(c);
//         int res_ft   = ft_tolower(c);

//         printf("  tolower   = '%c' (%d)\n", 
// 			(res_orig >= 32 && res_orig <= 126) ? res_orig : '?', res_orig);
//         printf("  ft_tolower= '%c' (%d)\n", 
// 			(res_ft >= 32 && res_ft <= 126) ? res_ft : '?', res_ft);

//     }

//     return (0);
// }
