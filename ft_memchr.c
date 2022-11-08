/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:28:17 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/08 13:28:17 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;
	unsigned char	*p;

	p = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (*p == (unsigned char)searchedChar)
		{
			return (p);
		}
		p++;
		i++;
	}
	return (NULL);
}