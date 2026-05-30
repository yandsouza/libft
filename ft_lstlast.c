/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:40:08 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/25 16:57:40 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
//#include <stdio.h>
//int	main(void)
//{
//	t_list *head = NULL;
//	ft_lstadd_front(&head, ft_lstnew("World"));
//	ft_lstadd_front(&head, ft_lstnew("Hello"));
//	t_list *last = ft_lstlast(head); 
//	printf("%s", (char *)last->content);
//}
