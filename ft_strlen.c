/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:30:45 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/23 12:41:59 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <string.h>

// int main(void)
// {
//     const char *tests[] = {
//         "Hello, 42 Le Havre!",
//         "",
//         "A",
//         "0123456789"
//     };
//     int nb_tests = sizeof(tests) / sizeof(tests[0]);

//     for (int i = 0; i < nb_tests; i++)
//     {
//         const char *s = tests[i];

//         size_t len_orig = strlen(s);
//         size_t len_ft = ft_strlen(s);

//         printf("strlen    = %zu\n", len_orig);
//         printf("ft_strlen = %zu\n", len_ft);
//     }

//     return (0);
// }
