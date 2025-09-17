#include "../minirt.h"

t_vec2  vec2_normalize(t_vec2 v)
{
    double length;

    length = vec2_length(v);
    if (length < EPSILON)
        return (vec2_init(0, 0));
    return (vec2_init(v.x / length, v.y / length));
}