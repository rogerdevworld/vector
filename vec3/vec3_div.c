#include "../minirt.h"

t_vec3	vec3_div(t_vec3 v, double scalar)
{
	if (scalar == 0.0)
		return (vec3_init(0, 0, 0));
	return (vec3_init(v.x / scalar, v.y / scalar, v.z / scalar));
}