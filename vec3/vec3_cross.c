#include "../minirt.h"

t_vec3  vec3_cross(t_vec3 v1, t_vec3 v2)
{
    t_vec3 result;

    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
    return (result);
}