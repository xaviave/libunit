/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   11_test_void.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 18:47:27 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 18:50:20 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

int		test_void(void)
{
	if (atoi("") == ft_atoi(""))
		return (0);
	else
		return (-1);
}