/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coralie <coralie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 13:58:40 by lrobino           #+#    #+#             */
/*   Updated: 2020/04/21 10:55:56 by coralie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORS_H
#define VECTORS_H

# define PI 3.1415926535

typedef struct  s_vec2d
{
    double x;
    double y;
}               t_vec2d;

typedef struct  s_vec2f
{
    float   x;
    float   y;
}               t_vec2f;

typedef struct  s_vec2i
{
    int     x;
    int     y;
}               t_vec2i;

/*
**  VECTOR UTILS 2 DOUBLE
*/
t_vec2d     create_vector(double x, double y);

t_vec2d     vec_add(t_vec2d va, t_vec2d vb);

t_vec2d     vec_sub(t_vec2d va, t_vec2d vb);

t_vec2d     vec_mult(t_vec2d va, t_vec2d vb);

t_vec2d     vec_multf(t_vec2d v, double amt);

t_vec2d     vec_norm(t_vec2d vec);

double      vec_mag(t_vec2d vec);

double      vec_dot (t_vec2d va, t_vec2d vb);


/*
**  VECTOR UTILS 2 FLOAT
*/

t_vec2f     create_vectorf(float x, float y);

t_vec2f     vecf_add(t_vec2f va, t_vec2f vb);

t_vec2f     vecf_sub(t_vec2f va, t_vec2f vb);

t_vec2f     vecf_mult(t_vec2f va, t_vec2f vb);

t_vec2f     vecf_norm(t_vec2f vec);

float      vecf_mag(t_vec2f vec);

float      vecf_dot (t_vec2f va, t_vec2f vb);

/*
**  VECTOR UTILS 2 INT
*/

t_vec2i     create_vectori(int x, int y);

t_vec2i     veci_add(t_vec2i va, t_vec2i vb);

t_vec2i     veci_sub(t_vec2i va, t_vec2i vb);

t_vec2i     veci_mult(t_vec2i va, t_vec2i vb);

t_vec2i     veci_norm(t_vec2i vec);

int         veci_mag(t_vec2i vec);

#endif