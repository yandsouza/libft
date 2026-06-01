/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:19:39 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/27 11:02:27 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
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
//	ft_lstclear(&head, &free);
//	printf("%s\n", (char *)ft_lstlast(head)->content);
//	return (0);
//}
