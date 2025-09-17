#include "../minirt.h"

t_vec3	vec3_reflect(t_vec3 v, t_vec3 n)
{
	return (vec3_sub(v, vec3_mul(n, 2 * vec3_dot(v, n))));
}