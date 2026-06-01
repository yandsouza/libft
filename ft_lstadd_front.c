/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:28:15 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/29 11:54:38 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
//#include <stdio.h>
//int main(void)
//{
//	t_list *lst = ft_lstnew("World");
//	t_list *new = ft_lstnew("Hello");
//	ft_lstadd_front(&lst, new);
//	printf("%s\n", (char *)new->content);
//	printf("%s\n", (char *)new->next->content);
//	return (0);
//}
