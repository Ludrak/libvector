/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrobino <lrobino@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 13:58:40 by lrobino           #+#    #+#             */
/*   Updated: 2020/03/09 13:58:56 by lrobino          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_H
#define VECTORS_H

# define PI 3.1415926535

typedef struct  s_vec2d
{
    float x;
    float y;
}               t_vec2d;

/*
**  VECTOR UTILS  
*/
t_vec2d     create_vector(float x, float y);

t_vec2d     vec_add(t_vec2d va, t_vec2d vb);

t_vec2d     vec_sub(t_vec2d va, t_vec2d vb);

t_vec2d     vec_mult(t_vec2d va, t_vec2d vb);

t_vec2d     vec_multf(t_vec2d v, float amt);

t_vec2d     vec_norm(t_vec2d vec);

float       vec_mag(t_vec2d vec);

float       vec_dot (t_vec2d va, t_vec2d vb);

#endif