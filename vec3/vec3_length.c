#include "../minirt.h"

double	vec3_length(t_vec3 v)
{
	return (sqrt(vec3_dot(v, v)));
}