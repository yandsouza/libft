/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:04:09 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/23 15:40:57 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		(f)(i, &s[i]);
		i++;
	}
}
//void	iter(unsigned int i, char *c)
//{
//	static int indexArray[11] = {0};
//
//	if (i > 10 || indexArray[i] == 1)
//		write(1, "wrong index\n", 12);
//	else
//		indexArray[i] = 1;
//	if (*c >= 'a' && *c <= 'z')
//		*c = *c - 32;
//	else if (*c >= 'A' && *c <= 'Z')
//		*c = *c + 32;
//}
//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
//	char	*str = "LoReM iPsUm";
//	str = malloc(sizeof(char) * 12);
//	strcpy(str, "LoReM iPsUm");
//	ft_striteri(str, &iter);
//	printf("%s\n", str);
//	return (0);
//}
