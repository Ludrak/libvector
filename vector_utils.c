
#include "vectors.h"

/**
 *  CREATES A SIMPLE 2d VECTOR FROM X and Y
 */
t_vec2d     create_vector(float x, float y)
{
    t_vec2d vec;

    vec.x = x;
    vec.y = y;
    return (vec);
}

/**
 *  MULTIPLY A VECTOR BY SOME CONSTANT FLOAT AMOUNT
 */
t_vec2d       vec_multf(t_vec2d v, float amt)
{
    t_vec2d vec;
    
    vec.x = v.x * amt;
    vec.y = v.y * amt;
    return (vec);
}

/**
 *  RETURNS THE DOT PRODUCT OF VA & VB
 */
float           vec_dot (t_vec2d va, t_vec2d vb)
{
    return (va.x * vb.x + va.y * vb.y);
}