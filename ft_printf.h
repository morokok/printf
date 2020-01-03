/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 17:02:34 by mmarzouk          #+#    #+#             */
/*   Updated: 2020/01/03 21:36:26 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int g_r;

typedef struct s_flag
{
	int dash;
	int z;
	int p;
	int st1;
	int st2;
}	t_flag;

void				*ft_memset(void *buf, int x, size_t count);
void				ft_bzero(void *s, size_t nbyte);
void				*ft_memmove(void *to, const void *from, size_t n);
void				*ft_memcpy(void *to, const void *from, size_t n);
void				*ft_memccpy(void *to, const void *from, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *buf1, const void *buf2, size_t count);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strnstr(const char *hays, const char *nedl, int len);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int a);
int					ft_isdigit(int a);
int					ft_isalnum(int a);
int					ft_isascii(int a);
int					ft_isprint(int a);
int					ft_toupper(int a);
int					ft_tolower(int a);
char				*ft_strdup(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);

int 				ft_printf(const char *s, ...);
void				all(char *s,va_list l);
void				itox(long long x, char c);
void				ft_putnbr_fd(int n, int fd , char c);
#endif
