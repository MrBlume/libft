/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: advasseu <advasseu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:38:47 by advasseu          #+#    #+#             */
/*   Updated: 2026/10/26 12:24:48 by advasseu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f)
	{
		while (lst)
		{
			(*f)(lst->content);
			lst = lst->next;
		}
	}
}

// static void    print_content(void *content)
// {
//     if (content)
//         printf(" -> %s\n", (char *)content);
// }

// static void    to_upper_content(void *content)
// {
//     char    *str;

//     str = (char *)content;
//     while (str && *str)
//     {
//         if (*str >= 'a' && *str <= 'z')
//             *str = *str - 32;
//         str++;
//     }
// }

// int main(void)
// {
//     t_list *head = NULL;

//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("premier")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("deuxieme")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("troisieme")));

//     ft_lstiter(head, print_content);

//     ft_lstiter(head, to_upper_content);

//     ft_lstiter(head, print_content);

// 	//Memory test
//     ft_lstiter(NULL, print_content);
//     ft_lstiter(head, NULL);

//     ft_lstclear(&head, free);
//     return (0);
// }
