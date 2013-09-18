/*******************************************************************************
*
*  File Name : ft_printf.c
*
*  Purpose : print functions
*
*  Creation Date : 18-09-13 13:11:29
*
*  Last Modified : 18-09-13 13:14:20
*
*  Created By : Adur
*
*******************************************************************************/

#include <stdio.h>

#include "constantes.h"

void    ft_print_frac(t_frac frac)
{
    printf("%d / %d", frac.nom, frac.denom);
    fflush(stdout);
}


