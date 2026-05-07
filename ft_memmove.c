/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabde-ar <fabde-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:42:36 by fabde-ar          #+#    #+#             */
/*   Updated: 2026/04/21 17:45:44 by fabde-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

static void	ft_rvcpy(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;
	size_t	bt;

	i = 0;
	if (n == 0)
		return ;
	bt = ((n) - 1);
	while (i < n)
	{
		dest[bt] = src[bt];
		i++;
		bt--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			i;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = 0;
	if (pdest == psrc)
		return (dest);
	if (dest > src)
		ft_rvcpy(pdest, psrc, n);
	if (dest < src)
	{
		while (i < n)
		{
			*pdest = *psrc;
			i++;
			pdest++;
			psrc++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[6] = "Fabio";
	char	str_b[6] = "Fabio";
	int		i = 0;

	printf("Before ft_memmove:\n");
	while (str[i])
		printf("%c", str[i++]);
	printf("\n");
	ft_memmove(str + 2, str, (3 * sizeof(char)));
	i = 0;
	printf("After ft_memmove with dest > src:\n");
	while (str[i])
		printf("%c", str[i++]);
	printf("\n");
	printf("After ft_memmove with dest < src:\n");
	ft_memmove(str_b, str_b + 2, (3 * sizeof(char)));
	i = 0;
	while (str_b[i])
		printf("%c", str_b[i++]);
	printf("\n");
	return (0);
}
*/
