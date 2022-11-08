/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:42:00 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/08 19:42:00 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*char_dest = (char *) dest;
	char	*char_src = (char *) src;
	size_t	i;
	
	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	while (i < size)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (char_dest);
}