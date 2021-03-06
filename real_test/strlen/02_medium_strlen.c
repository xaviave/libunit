/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   02_medium_strlen.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 15:47:33 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 17:20:35 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../real_test.h"

static char	*fill(char *test)
{
	int		i;

	i = 0;
	if (!(test = (char *)malloc(sizeof(char) * (100001))))
		return (NULL);
	while (i < 100000)
	{
		test[i] = 'a';
		i++;
	}
	test[i] = '\0';
	return (test);
}

int			medium_strlen(void)
{
	char	*test;

	test = NULL;
	test = fill(test);
	if (strlen(test) == ft_strlen(test))
		return (0);
	else
		return (-1);
}
