/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:58:59 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/12/24 14:50:17 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int close_window(void *mlx)
{
    (void)mlx;
    exit(0);
}

int key_hook(int keycode, void *mlx)
{
    if (keycode == 53)
    {
        (void)mlx;
        exit(0);
    }
} 

int main ()
{
    // creacion de variables
    void    *mlx;
    void    *win;
    void    *img;
    int     img_width;
    int     img_height;
    char   **map;

    // inicializacion de la ventana
    mlx = mlx_init();
    win = mlx_new_window(mlx, 800, 600, "so_long");
    img = mlx_xpm_file_to_image(mlx, "img.xpm", &img_width, &img_height);
    img_width = 100;
    img_height = 100;

    // manejo de errores
    if (!mlx)
        return (1);
    if (!win)
        return (1);
    if (!img)
        printf("Error al cargar la imagen");
        return (1);

    // carga del mapa
    map = load_map("../maps/prueba.ber");
    if (!map)
    {
        printf("Error al cargar el mapa\n");
        return (1);
    }
    
    // imprimir el mapa en la ventana
    int i;

    i = 0;
    while (map[i])
    {
        ft_printf("%s\n", map[i]);
        i++;
    }
    
    // liberar memoria del mapa
    free_map(map);

    //implementación de eventos
    mlx_hook(win, 17, 0, close_window, mlx);
    mlx_key_hook(win, key_hook, mlx);

    // loop de la ventana
    mlx_loop(mlx);
    mlx_destroy_window(mlx, win);

    return (0);
}