/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:37:05 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/21 14:52:17 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     t_list *head = NULL;

//     t_list *elem1 = ft_lstnew("Troisième");
//     t_list *elem2 = ft_lstnew("Deuxième");
//     t_list *elem3 = ft_lstnew("Premier");

//     ft_lstadd_front(&head, elem1);
//     ft_lstadd_front(&head, elem2);
//     ft_lstadd_front(&head, elem3);

//     t_list *current = head;
//     int i = 1;
//     while (current != NULL)
//     {
//         printf("Maillon %d : \"%s\"\n", i, (char *)current->content);
//         current = current->next;
//         i++;
//     }

//     t_list *tmp;
//     while (head != NULL)
//     {
//         tmp = head;
//         head = head->next;
//         free(tmp);
//     }

//     return (0);
// }
