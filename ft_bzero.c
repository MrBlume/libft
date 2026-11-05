/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:17:13 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/22 09:28:20 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <strings.h>

// int main(void)
// {
//     char tab1[10] = "123456789";
//     char tab2[10] = "123456789";

//     bzero(tab1, 5);
//     ft_bzero(tab2, 5);

//     printf("bzero() : ");
//     for (int i = 0; i < 10; i++)
//         printf("%d ", tab1[i]);
//     printf("\n");

//     printf("ft_bzero() : ");
//     for (int i = 0; i < 10; i++)
//         printf("%d ", tab2[i]);
//     printf("\n");

//     return (0);
// }
