/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   exec.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 11:18:49 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:28:33 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "exec.h"

static t_libunit	*lst_new(char *str, int (*f)(void))
{
	t_libunit		*new;
	if (!(new = (t_libunit *)malloc(sizeof(t_libunit))))
		return (NULL);
	new->str = str;
	new->f = f;
	return (new);
}

void				lst_add(char *str, int (*f)(void), t_libunit **lst)
{
	t_libunit		*new;
	new = lst_new(str, f);
	new->next = *lst;
	*lst = new;
}

int					exec(int (*f)(void))
{
	pid_t			father;
	
	father = fork();
	if (father == 0)
	{
		if (f() == 0)
			exit(0);
		exit(1);
	}
	if (father > 0)
		wait(&father);
	return (0);
}

int					fork_test(t_libunit **lst)
{
	t_libunit		*mem;
	int				result;

	result = 0;
	mem = *lst;
	while (mem->next != NULL)
	{
		ft_putstr("TEST = ");
		ft_putendl(mem->str);
		result += exec(mem->f);	
		mem = mem->next;
	}
	return (result);
}
