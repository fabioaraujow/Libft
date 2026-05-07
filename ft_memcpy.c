/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			i;

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	size_t	i;
	int		nbrs[5];
	int		nbrscpy[5];
	char	str[10];
	char	strcpy[10];

	memset(nbrs, 0, sizeof(nbrs));
	memset(nbrscpy, 0, sizeof(nbrscpy));
	memset(str, 65, sizeof(str));
	memset(strcpy, 0, sizeof(strcpy));
	ft_memcpy(nbrscpy, nbrs, (2 * sizeof(int)));
	ft_memcpy(strcpy, str, (3 * sizeof(char)));
	i = 0;
	while (i < 2)
	{
		printf("%d", nbrscpy[i]);
		if (i < 1)
			printf(", ");
		i++;
	}
	printf("\n");
	i = 0;
	while (strcpy[i])
	{
		printf("%c", strcpy[i]);
		if (i < 2)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
*/
