/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   03_test_basic3.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:48:05 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 18:48:05 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int		test_basic3(void)
{
	if (atoi("007") == ft_atoi("007"))
		return (0);
	else
		return (-1);
}
