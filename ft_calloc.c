/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:05:54 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/09 11:05:54 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	result;
	void	*ptr;

	result = (nmemb * size);
	if (size > 4294967295)
		return (NULL);
	ptr = (void *)malloc(result);
	
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, result);
	return(ptr);
}