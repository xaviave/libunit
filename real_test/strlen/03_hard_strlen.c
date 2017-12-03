/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   03_hard_strlen.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 15:55:08 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 17:20:20 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

static char	*fill(char *test)
{
	int     i;

	i = 0;
	if (!(test = (char *)malloc(sizeof(char) * (1000000001))))
		return (NULL);
	while (i < 1000000000)
	{
		test[i] = 'a';
		i++;
	}
	test[i] = '\0';
	return (test);
}

int			hard_strlen(void)
{
	char	*test;

	test = NULL;
	test = fill(test);
	if (strlen(test) == ft_strlen(test))
		return (0);
	else
		return (-1);
}
