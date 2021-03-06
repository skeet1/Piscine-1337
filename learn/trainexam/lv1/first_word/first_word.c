/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 08:54:55 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/09 09:39:35 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
