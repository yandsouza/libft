/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:04:11 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/20 12:25:11 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
//void	ft_print_result(int n)
//{
//	if (n > 0)
//		write(1, "1", 1);
//	else if (n < 0)
//		write(1, "-1", 2);
//	else
//		write(1, "0", 1);
//}
//int	main(void)
//{
//	ft_print_result(ft_strncmp("test\200", "test\0", 6));
//	return (0);
//}
