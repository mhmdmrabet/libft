/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 07:47:58 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/11 07:47:58 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	len = 0;
	if(nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int	i;

	n = nb;
	i = len(n);
	if(!(str = (char *)malloc(i + 1)))
		return(NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return(str);
	}
	if(n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i--] = 48 + (n % 10);
		n /= 10;
	}
	return (str);
}
