/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 20:33:10 by yhakamay          #+#    #+#             */
/*   Updated: 2021/02/24 20:46:30 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

#define IMG_WIDTH 400
#define IMG_HEIGHT 300

typedef struct	s_img
{
	void	*img_ptr;
	int		*data;
	int		size_l;
	int		bpp;
	int		endian;
}				t_img;

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*window;
}				t_mlx;

int	main(void)
{
	t_mlx	*mlx;
	int		count_w;
	int		count_h;
	t_img	img;

	mlx->mlx_ptr = mlx_init();
	mlx->window = mlx_new_window(mlx->mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "test");
	img.img_ptr = mlx_new_image(mlx->mlx_ptr, IMG_WIDTH, IMG_HEIGHT);
	img.data = (int *)mlx_get_data_addr(img.img_ptr, &img.bpp, &img.size_l, &img.endian);

	count_h = 1;
	while (++count_h < IMG_HEIGHT)
	{
		count_w = 1;
		while (++count_w < IMG_WIDTH)
		{
			if (count_w % 2)
				img.data[count_h * IMG_WIDTH + count_w] = 0xFFFFFF;
			else
				img.data[count_h * IMG_WIDTH + count_w] = 0xFF0000;
		}
	}
	mlx_put_image_to_window(mlx->mlx_ptr, mlx->window, img.img_ptr, 0, 0);
	mlx_loop(mlx->mlx_ptr);
	return (0);
}
