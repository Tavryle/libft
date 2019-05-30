/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:50:44 by tmansing          #+#    #+#             */
/*   Updated: 2019/05/30 12:43:26 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((unsigned char)s1[i] 
			&& ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
