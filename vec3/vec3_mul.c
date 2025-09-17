#include "../minirt.h"

t_vec3	vec3_mul(t_vec3 v, double scalar)
{
	return (vec3_init(v.x * scalar, v.y * scalar, v.z * scalar));
}