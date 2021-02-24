/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 20:48:06 by yhakamay          #+#    #+#             */
/*   Updated: 2021/02/24 20:54:47 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mlx/mlx.h"

#define WINDOW_NAME "test"
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
	void	*mlx;
	void	*win;
	t_img	img;
	int		count_h;
	int		count_w;

	mlx = mlx_init();
	win = mlx_new_window(mlx, WINDOW_HEIGHT, WINDOW_WIDTH, WINDOW_NAME);
}
