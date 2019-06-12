/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:29:35 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/11 14:25:46 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	if (s == '\0')
	{
		write (1, "NULL", 6);
	}
	else
	{
		while (s[i] != '\0' && s + i != NULL)
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
