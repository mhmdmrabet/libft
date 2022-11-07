/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:59:27 by mmrabet           #+#    #+#             */
/*   Updated: 2022/11/07 12:25:40 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *));
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t ft_strlen(const char *s);
#endif
