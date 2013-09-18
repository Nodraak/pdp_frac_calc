
#ifndef CONSTANTES_H
#define CONSTANTES_H

typedef enum    e_error
{
    t_ERR_NONE,
    t_ERR_DIV_ZERO
    /* to do : modulo zero, overflow ... */
}               t_error;

typedef struct  s_frac
{
    int         nom;
    int         denom;
    t_error     nan;
}               t_frac;

#endif

