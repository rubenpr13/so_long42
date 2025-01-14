/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:12:54 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/12/23 13:47:35 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int get_map_heigth(const char *file_path)
{
    int     fd;
    char    buffer;
    int     heigth;

    fd = open(file_path, O_RDONLY);

    heigth = 0;

    if (fd < 0){
        printf("Error: no se pudo abrir el archivo%s\n", file_path);
        exit(1);
    }

    while (read(fd, &buffer, 1) > 0)
        if (buffer == '\n')
            heigth++;
    close(fd);
    return (heigth);
}
char **load_map(const char *file_path)
{
    int     fd;
    int     heigth;
    char    **map;
    char    *line;
    int     i;

    fd = open(file_path, O_RDONLY);
    int heigth = get_map_heigth(file_path);
    map = malloc(sizeof(char *) * (heigth + 1));
    line = NULL;
    i = 0;

    if (fd < 0){
        perror("Error al abrir el archivo");
        exit(1);
    }

    while((line = get_next_line(fd)) != NULL)
    {
        map[i] = line;
        i++;
    }
    map[i] = NULL;
    close(fd);
    return (map);
}

void free_map(char **map)
{
    int i;
    
    i = 0;
    while (map[i])
    {
        free(map[i]);
        i++;
    }
    free(map);
}