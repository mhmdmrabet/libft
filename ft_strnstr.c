/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:03:29 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/10 10:03:29 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big[i] && !little[j])
		return ((char *)&big[i]);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && ((i + j) < len))
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (j == ft_strlen(little))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
