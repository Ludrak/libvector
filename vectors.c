/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrobino <lrobino@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 13:59:40 by lrobino           #+#    #+#             */
/*   Updated: 2020/03/09 14:01:19 by lrobino          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "vectors.h"
#include <math.h>

/**
 *  RETURN THE ADDITION OF VA & VB 
 */
t_vec2d     vec_add(t_vec2d va, t_vec2d vb)
{
    t_vec2d vec;

    vec.x = va.x + vb.x;
    vec.y = va.y + vb.y;
    return (vec);
}

/**
 *  RETURN THE SUBSTRACTION OF VA & VB 
 */
t_vec2d     vec_sub(t_vec2d va, t_vec2d vb)
{
    t_vec2d vec;
    
    vec.x = va.x - vb.x;
    vec.y = va.y - vb.y;
    return (vec);
}

/**
 *  RETURN THE PRODUCT OF VA & VB 
 */
t_vec2d     vec_mult(t_vec2d va, t_vec2d vb)
{
    t_vec2d vec;
    
    vec.x = va.x * vb.x;
    vec.y = va.y * vb.y;
    return (vec);
}

/**
 *  RETURN THE NORMALIZED V
 */
t_vec2d     vec_norm(t_vec2d v)
{
    t_vec2d vec;
    float   mag;
    
    mag = vec_mag(v);
    vec.x = v.x / mag;
    vec.y = v.y / mag;
    return (vec);
}

/**
 *  RETURN THE MAGNITUDE OF V
 */
float       vec_mag(t_vec2d v)
{
    return (sqrtf((v.x * v.x) + (v.y * v.y)));
}