/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:16:23 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:56:21 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "real_test.h"

int 	main(void)
{
	int	result;

	result = 0;
	result += launch_strlen();
	result += launch_atoi();
	if (result == 0)
		return (0);
	else
		return (-1);
}
