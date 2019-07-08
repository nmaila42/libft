/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:04:47 by nmaila            #+#    #+#             */
/*   Updated: 2019/06/27 12:09:02 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void		*ft_memset(void *str, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *str1, const void *str2, size_t n);
void		*ft_memccpy(void *str1, const void *str2, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strcat(char *dst, const char *src);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t n);
size_t		ft_strlen(const char *str);
char		*ft_strncat(char *dst, const char *src, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t n);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strdup(const char *s1);
char		*ft_strstr(const char *hays, const char *need);
char		*ft_strnstr(const char *hays, const char *need, size_t n);
void		ft_strclr(char *str);
int			ft_strequ(const char *s1, const char *s2);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
char		*ft_strmap(const char *s1, char(*f)(char));
char		*ft_strmapi(const char *s1, char(*f)(unsigned int, char));
char		*ft_strnew(size_t size);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strsub(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_atoi(const char *str);
char		*ft_itoa(int nbr);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
void		ft_strdel(char **as);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(const char *s, char c);
void		ft_putchar_fd(char c, int fd);
int			ft_putchar(char c);
void		ft_putendl(const char *s);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr(const char *str);
void		ft_putstr_fd(const char *s, int fd);

#endif
