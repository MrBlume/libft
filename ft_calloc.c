/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:50:10 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/23 12:19:22 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > 0 && (SIZE_MAX / nmemb < size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return ((void *)ptr);
}

// int main(void)
// {
//     int count = 5;

//     int *tab_orig = (int *)calloc(count, sizeof(int));
//     int *tab_ft = (int *)ft_calloc(count, sizeof(int));

//     printf("calloc    : ");
//     for (int i = 0; i < count; i++)
//         printf("%d ", tab_orig[i]);
//     printf("\n");

//     printf("ft_calloc : ");
//     for (int i = 0; i < count; i++)
//         printf("%d ", tab_ft[i]);
//     printf("\n");

//     free(tab_orig);
//     free(tab_ft);

//     return (0);
// }
