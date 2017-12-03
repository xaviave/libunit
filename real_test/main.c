/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 17:16:23 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 19:11:56 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "real_test.h"

int		main(void)
{
	int	result;

	ft_putendl(PIN"▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿▾▿"RES);
	ft_putendl(PIN"⎥        1️⃣  0️⃣  1️⃣  - 〔 LIBUNIT TEST 〕          ⎪"RES);
	ft_putendl(PIN"∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸∸"RES);
	result = 0;
	result += launch_strlen();
	result += launch_atoi();
	if (result == 0)
		return (0);
	else
		return (-1);
}
