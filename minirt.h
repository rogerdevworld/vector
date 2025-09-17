#ifndef MINIRT_H
# define MINIRT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// --- macros ---
# define EPSILON 1e-6
#ifndef M_PI
# define M_PI 3.14159265358979323846
#endif

// --- Structs ---

typedef struct s_vec2
{
	double		x;
	double		y;
}				t_vec2;

typedef struct s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

typedef struct s_mat3
{
	t_vec3		c1;
	t_vec3		c2;
	t_vec3		c3;
}				t_mat3;

typedef t_vec3	t_color;

// --- Function Prototypes ---

// Math Functions
double			ft_fmin(double x, double y);
double			ft_fmod(double x, double y);
double			ft_pow(double base, double exp);

// Vector 2 Functions
t_vec2			vec2_init(double x, double y);
t_vec2			vec2_normalize(t_vec2 v);

// Vector 3 Functions
t_vec3			vec3_init(double x, double y, double z);
t_vec3			vec3_cross(t_vec3 v1, t_vec3 v2);
t_vec3			vec3_add(t_vec3 v1, t_vec3 v2);
t_vec3			vec3_sub(t_vec3 v1, t_vec3 v2);
t_vec3			vec3_mul(t_vec3 v, double scalar);
t_vec3			vec3_div(t_vec3 v, double scalar);
t_vec3			vec3_mult_vec(t_vec3 v1, t_vec3 v2);
double			vec3_dot(t_vec3 v1, t_vec3 v2);
t_vec3			vec3_cross(t_vec3 v1, t_vec3 v2);
double			vec3_length(t_vec3 v);
double			vec3_length_squared(t_vec3 v);
t_vec3			vec3_normalize(t_vec3 v);
t_vec3			vec3_reflect(t_vec3 v, t_vec3 n);


t_vec3			rotate_vector(t_vec3 v, t_vec3 axis, double angle);
#endif