/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmansing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:11:49 by tmansing          #+#    #+#             */
/*   Updated: 2019/05/31 15:14:37 by tmansing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	*ft_memset(void *b,int c, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dst,const void *src, int c, size_t n);
void	*ft_memcpy(void *dst,const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s,int c);
char	*ft_strnew(size_t size);
void	ft_strclr(char *s);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
size_t	ft_strlcat(char *dst, const char *src, size_t size);


#endif
