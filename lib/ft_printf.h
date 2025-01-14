/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:03:27 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/07/27 13:03:27 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_nosign_nbr(unsigned int num);
int		ft_hexpoint(void *p);
int		ft_hex_mayus(int n);
int		ft_hex_minus(int n);

#endif