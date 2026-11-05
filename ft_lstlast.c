/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:37:39 by advasseu          #+#    #+#             */
/*   Updated: 2026/11/02 11:21:20 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// int main(void)
// {
//     t_list *head = NULL;
//     t_list *last = NULL;

//     last = ft_lstlast(head);
//     printf("Liste vide -> dernier maillon : %p 
// 		(attendu : NULL)\n", (void *)last);

//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("Premier")));
//     last = ft_lstlast(head);
//     printf("Liste à 1 élément -> dernier : \"%s\" 
// 		(adresse : %p)\n", (char *)last->content, (void *)last);

//     ft_lstclear(&head, free);
//     return (0);
// }
