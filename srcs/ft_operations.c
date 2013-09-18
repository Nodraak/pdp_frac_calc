/*******************************************************************************
*
*  File Name : ft_operations.c
*
*  Purpose : op functions
*
*  Creation Date : 18-09-13 11:57:20
*
*  Last Modified : 18-09-13 13:10:49
*
*  Created By : Adur
*
*******************************************************************************/


#include "constantes.h"
#include "ft_operations.h"
#include "ft_reduce.h"

t_frac  ft_oppose(t_frac frac)
{
    t_frac result;

    result.nom = -frac.nom;
    result.denom = frac.denom;

    return ft_reduce(result);
}

t_frac  ft_inverse(t_frac frac)
{
    t_frac result;

    result.nom = frac.denom;
    result.denom = frac.nom;
    if (result.denom == 0)
        result.nan = t_ERR_DIV_ZERO;

    return ft_reduce(result);
}

t_frac  ft_add(t_frac frac1, t_frac frac2)
{
    t_frac result;

    result.nom = frac1.nom*frac2.denom + frac2.nom*frac1.denom;
    result.denom = frac1.denom * frac2.denom;

    return ft_reduce(result);
}

t_frac  ft_sub(t_frac frac1, t_frac frac2)
{
    return ft_reduce(ft_add(frac1, ft_oppose(frac2)));
}

t_frac  ft_mul(t_frac frac1, t_frac frac2)
{
    t_frac result;

    result.nom = frac1.nom * frac2.nom;
    result.denom = frac1.denom * frac2.denom;

    return ft_reduce(result);
}

t_frac  ft_div(t_frac frac1, t_frac frac2)
{
    return ft_reduce(ft_mul(frac1, ft_inverse(frac2)));
}

