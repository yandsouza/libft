/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:03:55 by ynascime          #+#    #+#             */
/*   Updated: 2026/06/01 16:55:47 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
//#include <stdio.h>
//int main(void)
//{
//	t_list *head = NULL;
//	ft_lstadd_back(&head, ft_lstnew("A"));
//	ft_lstadd_back(&head, ft_lstnew("B"));
//	ft_lstadd_back(&head, ft_lstnew("C"));
//	ft_lstadd_back(&head, ft_lstnew("D"));
//	ft_lstadd_back(&head, ft_lstnew("E"));
//	printf("%s\n", (char *)head->content);
//	printf("%s\n", (char *)head->next->content);
//	printf("%s\n", (char *)ft_lstlast(head)->content);
//	return (0);
//}
