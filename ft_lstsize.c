/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:06:38 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/25 16:55:50 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
//#include <stdio.h>
//int	main(void)
//{
//	t_list *head = NULL;
//	ft_lstadd_front(&head, ft_lstnew("World"));
//	ft_lstadd_front(&head, ft_lstnew("Hello"));
//	printf("%i", ft_lstsize(head));
//}
