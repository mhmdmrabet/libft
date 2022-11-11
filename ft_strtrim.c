/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:12:00 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/11 11:12:00 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separator(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_sep(char const *str, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_separator(str[i], set) == 1)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*str;
	int	len_without_sep;

	i = 0;
	j = 0;
	len_without_sep = ft_strlen(s1) - count_sep(s1, set);
	if(!(str = (char *)malloc(sizeof(char) * (len_without_sep + 1))))
		return (0);
	str[len_without_sep] = '\0';
	while (s1[i])
	{
		if (is_separator(s1[i], set) == 1)
		{
			i++;
			continue;
		}
		str[j] = s1[i];
		i++;
		j++;
	}
	return (str);
}
