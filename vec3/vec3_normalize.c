#include "../minirt.h"

t_vec3	vec3_normalize(t_vec3 v)
{
	double	length;

	length = vec3_length(v);
	if (length == 0.0)
		return (vec3_init(0, 0, 0));
	return (vec3_div(v, length));
}