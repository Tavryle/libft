/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:18:46 by tmansing          #+#    #+#             */
/*   Updated: 2019/05/22 16:26:39 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int len)
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
		{
			break ;
		}
	}
	dest[i] = '\0';
	return (dest);
}
