/*******************************************************************************
*
*  File Name : main.c
*
*  Purpose : main() function
*
*  Creation Date : 18-09-13 11:54:14
*
*  Last Modified : 18-09-13 13:22:53
*
*  Created By : Adur
*
*******************************************************************************/

#include <stdio.h>

#include "constantes.h"
#include "ft_operations.h"
#include "ft_reduce.h"
#include "ft_print.h"

int main(void)
{
    /* quick example */
    t_frac frac1 = {-1, -3, t_ERR_NONE};
    t_frac frac2 = {1, 2, t_ERR_NONE};

    t_frac result = ft_sub(frac1, frac2);

    ft_print_frac(frac1);
    printf(" - "); /* change it according to the calc you choose */
    ft_print_frac(frac2);
    printf(" = ");
    ft_print_frac(result);
    printf("\n");

    return 0;
}

