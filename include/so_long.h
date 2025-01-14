/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:41:50 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/12/23 13:56:18 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../lib/mlx.h"
# include "../lib/libft.h"
# include "../lib/ft_printf.h"
# include "../lib/get_next_line.h"
# include "fcntl.h"
# include "unistd.h"
# include "math.h"

// Definitions
# define FLOOR      '0'
# define WALL       '1'
# define PLAYER     'P'
# define COIN       'C'
# define EXIT       'E'

// Movements key ASCII
# define KEY_W      119
# define KEY_A      97
# define KEY_S      115
# define KEY_D      100

# define KEY_UP     65362
# define KEY_LEFT   65361
# define KEY_RIGHT  65363
# define KEY_DOWN   65354

// Exit key  ASCII
# define KEY_Q      113
# define KEY_ESC    65307

// Functions load_map.c
int get_map_heigth(const char *file_path);
char **load_map(const char *file_path);
void free_map(char **map);


#endif