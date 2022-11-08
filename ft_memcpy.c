/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:57:21 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/08 10:57:21 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest = (char *) dest;
	char	*char_src = (char *) src;
	size_t	i;

	i = 0;
	if (dest == NULL)
		return (NULL);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return(char_dest);
}