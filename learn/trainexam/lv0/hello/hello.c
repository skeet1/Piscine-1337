/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 08:34:50 by mkarim            #+#    #+#             */
/*   Updated: 2021/07/09 08:38:35 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int main()
{
	write(1, "Hello World!\n",13);
}