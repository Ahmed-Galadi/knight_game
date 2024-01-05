#include "fractol.h"

void handle_pixel(int x, int y, t_fractol *fract)
{
	t_complex z;
	t_complex c;

	z.x = 0.0;
	z.y = 0.0;

	c.x = map_scale(x, -2, +2, 0, WINDOW_WIDTH);
	c.y = map_scale(y, + 2, -2, 0, WINDOW_HEIGHT);
	while ()
	{
		z = sum_complex(square_complex(z), c);
		// is the value escaped
		if ()
		{
			my_pixel_put();
			return ;
		}
	}
}

void fractol_render(t_fractol *fract)
{
	int		x;
	int		y;

	y = 0;
	while (y < WINDOW_HEIGHT)
	{
		while (x < WINDOW_WIDTH)
		{
			handle_pixel(x, y, fract);
			x++;
		}
		y++;
	}
}