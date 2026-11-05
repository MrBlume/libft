/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:37:25 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:21:08 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main(void)
// {
//     t_list *head = NULL;
//     int size;

//     size = ft_lstsize(head);
//     printf("Taille de la liste vide : %d (attendu : 0)\n", size);

//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("Premier")));
//     size = ft_lstsize(head);
//     printf("Taille après 1 élément  : %d (attendu : 1)\n", size);

//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("Deuxième")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("Troisième")));

//     size = ft_lstsize(head);
//     printf("Taille après 3 éléments : %d (attendu : 3)\n", size);

//     ft_lstclear(&head, free);
//     return (0);
// }
