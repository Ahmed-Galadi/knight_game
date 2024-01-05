#include "fractol.h"
#include <libc.h>


int main(int argc, char **argv)
{
	t_fractol fract;
	if (2 == argc && !ft_strncmp(argv[1], "mandelbrot", 10)
		|| 4 == argc && !ft_strncmp(argv[1], "julia", 5))
	{
		fract.name = argv[1];
		fractol_init(&fract);
		// fractol_render(&fract);
		mlx_loop(fract.mlx_connection);
	}
	else
	{
		putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	return (0);
}