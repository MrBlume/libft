/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:34:18 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/23 09:34:36 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	char	*str;
	int		i;

	if (num == 0)
		return (ft_strdup("0"));
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count_size(num);
	str = malloc(i * sizeof(char) + 1);
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	str[i] = '\0';
	i--;
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	return (str);
}

// #include <string.h>

// int main(void)
// {
//     int tests[] = {0, 42, -42, 2147483647, -2147483648};
//     int nb_tests = sizeof(tests) / sizeof(tests[0]);

//     for (int i = 0; i < nb_tests; i++)
//     {
//         int n = tests[i];
//         char *result = ft_itoa(n);

//         char expected[20];
//         sprintf(expected, "%d", n);

//         printf("Entier : %d | ft_itoa() : %s\n", n, result);
//     }

//     return (0);
// }
