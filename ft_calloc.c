/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:40:39 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/28 15:23:12 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*temp;

	if (count != 0 && size > (size_t)-1 / count)
		return (0);
	temp = malloc(count * size);
	if (!temp)
		return (0);
	i = 0;
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
