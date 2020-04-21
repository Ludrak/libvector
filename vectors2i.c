/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors2i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coralie <coralie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 13:59:40 by lrobino           #+#    #+#             */
/*   Updated: 2020/04/21 10:54:03 by coralie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors.h"
#include <math.h>

/**
 *  RETURN THE ADDITION OF VA & VB 
 */
t_vec2i     veci_add(t_vec2i va, t_vec2i vb)
{
    t_vec2i vec;

    vec.x = va.x + vb.x;
    vec.y = va.y + vb.y;
    return (vec);
}

/**
 *  RETURN THE SUBSTRACTION OF VA & VB 
 */
t_vec2i     veci_sub(t_vec2i va, t_vec2i vb)
{
    t_vec2i vec;
    
    vec.x = va.x - vb.x;
    vec.y = va.y - vb.y;
    return (vec);
}

/**
 *  RETURN THE PRODUCT OF VA & VB 
 */
t_vec2i     veci_mult(t_vec2i va, t_vec2i vb)
{
    t_vec2i vec;
    
    vec.x = va.x * vb.x;
    vec.y = va.y * vb.y;
    return (vec);
}

/**
 *  RETURN THE NORMALIZED V
 */
t_vec2i     veci_norm(t_vec2i v)
{
    t_vec2i vec;
    int   mag;
    
    mag = veci_mag(v);
    vec.x = v.x / mag;
    vec.y = v.y / mag;
    return (vec);
}

/**
 *  RETURN THE MAGNITUDE OF V
 */
int       veci_mag(t_vec2i v)
{
    return ((int)sqrt((v.x * v.x) + (v.y * v.y)));
}