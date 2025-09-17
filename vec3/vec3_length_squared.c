#include "../minirt.h"

double  vec3_length_squared(t_vec3 v)
{
    return (vec3_dot(v, v));
}