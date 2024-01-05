#include "fractol.h"

static void malloc_error(void)
{
	perror("Problems with malloc");
	exit(EXIT_FAILURE);
}

void fractol_init(t_fractol *fract)
{
	fract->mlx_connection = mlx_init();
	if (fract->mlx_connection == NULL)
		malloc_error();
	fract->mlx_window = mlx_new_window(fract->mlx_connection, WINDOW_WIDTH, WINDOW_HEIGHT, fract->name);
	if (fract->mlx_window == NULL)
	{
		//mlx_destroy_display(fract->mlx_connection);
		free(fract->mlx_connection);
		malloc_error();
	}
	fract->img.img_ptr = mlx_new_image(fract->mlx_connection, WINDOW_WIDTH, WINDOW_HEIGHT);
	if (fract->img.img_ptr == NULL)
	{
		mlx_destroy_window(fract->mlx_connection, fract->mlx_window);
		//mlx_destroy_display(fract->mlx_connection);
		free(fract->mlx_connection);
		malloc_error();
	}
	fract->img.pixel_ptr = mlx_get_data_addr(fract->img.img_ptr, &fract->img.bit_per_pix, &fract->img.line_len, &fract->img.endian);
}