#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include "minilibx_linux/mlx.h"
#include <stdio.h>

#define ERROR_MESSAGE "Input is incorrect!!\nPlease enter:\n\t\"./fractol mandelbrot\" or \n\t\"./fractol julia <value 1> <value 2>\""
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800

typedef struct	s_complex
{
	// real
	double x;
	// imaginary
	double y;
}				t_complex;

typedef struct	s_img
{
	void 	*img_ptr;
	char 	*pixel_ptr;
	int		bit_per_pix;
	int		endian;
	int		line_len;
}				t_img;

typedef struct	s_fractol
{
	char	*name;
	void	*mlx_connection;
	void	*mlx_window;
	t_img	img;
}				t_fractol;

// string_utils.c
int ft_strncmp(char *str1, char *str2, int n);
void putstr_fd(char *str, int fd);
// init.c
void fractol_init(t_fractol *fract);
// math_ustils.c
double map_scale(double unscaled_num, double new_min, double new_max, double old_min, double old_max);
t_complex sum_complex(t_complex z1, t_complex z2);
t_complex square_complex(t_complex z);
#endif