/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:40:32 by tmansing          #+#    #+#             */
/*   Updated: 2019/06/05 13:18:47 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t        ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t d_len;
    size_t s_len;
    size_t i;

    d_len = (size_t)ft_strlen((char *)dst);
    s_len = (size_t)ft_strlen((char *)src);
    i = d_len;
    while ((*src) && ((d_len + 1) < size))
    {
        dst[d_len++] = *src++;
    }
    dst[d_len] = '\0';
    if (i > size)
        return (s_len + size);
    else
        return (s_len + i);
}
