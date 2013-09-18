/*******************************************************************************
*
*  File Name : ft_simplifie.c
*
*  Purpose : simplifier les fractions
*
*  Creation Date : 18-09-13 12:12:34
*
*  Last Modified : 18-09-13 13:09:38
*
*  Created By : Adur
*
*******************************************************************************/

#include "constantes.h"
#include "ft_reduce.h"

t_frac ft_reduce(t_frac frac)
{
    t_frac result;
    int pgcd;
    int sign;

    pgcd = ft_pgcd(frac.nom, frac.denom);
    sign = (frac.nom * frac.denom < 0 ? -1 : 1);
    result.nom = ft_abs(frac.nom) / pgcd * sign;
    result.denom = ft_abs(frac.denom) / pgcd;

    return result;
}

int ft_pgcd(int x, int y)
{
    int c;

    x = ft_abs(x);
    y = ft_abs(y);

    c = x % y;
    if (c == 0)
        return y;

    do
    {
        x = y;
        y = c;
        c = x % y;
    }while (c != 0);

    return y;
}

int ft_abs(int x)
{
    return (x < 0 ? -x : x);
}

