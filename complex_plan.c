#include <stdio.h>

typedef struct	s_complex
{
	double	real;
	double	imaginary;
} 				t_complex;

double ft_squar(double n)
{
	return (n * n);
}

int main()
{
	t_complex	z;
	t_complex	c;
	double		tmp_real;
	int 		i;

	i = 0;

	z.real = 0;
	z.imaginary = 0;

	c.real = 0.25;
	c.imaginary = 0.4;
	while (i < 42)
	{
		// general formula -> z = z^2 + c
		tmp_real = ft_squar(z.real) - ft_squar(z.imaginary);
		z.imaginary = 2 * z.real * z.imaginary;
		z.real = tmp_real;

		z.real += c.real;
		z.imaginary += c.imaginary;

		printf("{\n\tnumber of iterations -> %d\n\treal = %f\n\timaginary = %f\n}\n", i, z.real, z.imaginary);
		i++;
	}

	return (0);
} 