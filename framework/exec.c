/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   exec.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 09:52:32 by xamartin     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 17:49:13 by xamartin    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "exec.h"

int					g_mark = 0;

static int			ft_test_signal(pid_t father)
{
	if (WIFEXITED(father))
	{
		if (father == 0)
		{
			ft_putendl(GRE"			[OK]"RES);
			g_mark++;
			return (1);
		}
		else
			ft_putendl(RED"			[KO]");
	}
	if (WIFSIGNALED(father))
	{
		if (WTERMSIG(father) == SIGALRM)
			ft_putendl(RED"		[TIMEOUT]"RES);
		if (WTERMSIG(father) == SIGSEGV)
			ft_putendl(RED"		[SEGV]"RES);
		if (WTERMSIG(father) == SIGBUS)
			ft_putendl(RED"			[BUSE]"RES);
		if (WTERMSIG(father) == SIGABRT)
			ft_putendl(RED"		[ABORT]"RES);
		if (WTERMSIG(father) == SIGFPE)
			ft_putendl(RED"		[FLOATING POINT]"RES);
	}
	return (0);
}

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
		alarm(5);
		if (f() == 0)
			exit(0);
		exit(1);
	}
	if (father > 0)
		wait(&father);
	return (ft_test_signal(father));
}

int					fork_test(t_libunit **lst)
{
	t_libunit		*mem;
	int				result;
	int				nb_test;

	nb_test = 0;
	result = 0;
	g_mark = 0;
	mem = *lst;
	while (mem)
	{
		ft_putstr(BLU"\nTEST = ");
		ft_putstr(mem->str);
		ft_putstr(RES);
		result += exec(mem->f);
		mem = mem->next;
		nb_test++;
	}
	ft_putstr(GRE"\nMark : "RES);
	ft_putstr(YEL);
	ft_putnbr(g_mark);
	ft_putstr(PIN" / "RES);
	ft_putstr(YEL);
	ft_putnbr(nb_test);
	ft_putendl(RED" !!!!\n"RES);
	return (result);
}
