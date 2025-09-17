#include "../minirt.h"

t_vec3	vec3_mult_vec(t_vec3 v1, t_vec3 v2)
{
	return (vec3_init(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z));
}