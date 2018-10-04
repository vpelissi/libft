/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:21:12 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/20 18:25:12 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# define TAILLE_MAX  64

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					get_next_line(int const fd, char **line);

void				ft_bzero(void *s, size_t n);

int					ft_isalnum(int c);

int					ft_isalpha(int c);

int					ft_isascii(int c);

int					ft_isdigit(int c);

int					ft_isprint(int c);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memcpy(void *dst, const void *src, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t len);

void				*ft_memset(void *s, int c, size_t n);

void				*ft_memalloc(size_t size);

void				ft_putchar_fd(char c, int fd);

void				ft_putchar(char c);

void				ft_putendl(char const *s);

void				ft_putnbr(int n);

void				ft_putstr(char const *s);

char				*ft_strcat(char *dest, const char *src);

void				*ft_strchr(const char *s, int c);

int					ft_strcmp(const char *s1, const char *s2);

char				*ft_strcpy(char *dst, const char *src);

char				*ft_strdup(const char *s);

size_t				ft_strlen(const char *str);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strncpy(char *dst, const char *src, size_t n);

char				*ft_strnstr(const char *s1, const char *s2, size_t n);

void				*ft_strrchr(const char *s, int c);

char				*ft_strstr(const char *s1, const char *s2);

void				ft_swap(int *a, int *b);

int					ft_tolower(int c);

int					ft_toupper(int c);

void				ft_putstr_fd(char const *s, int fd);

void				ft_putnbr_fd(int n, int fd);

void				ft_putendl_fd(char const *s, int fd);

void				ft_strclr(char *s);

char				*ft_strncat(char *s1, const char *s2, size_t n);

size_t				ft_strlcat(char *dst, const char *src, size_t size);

void				ft_striter(char *s, void (*f) (char *));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

int					ft_strequ(char const *s1, char const *s2);

int					ft_atoi(const char *str);

void				ft_memdel(void **ap);

char				*ft_strnew(size_t size);

void				ft_strdel(char **as);

char				*ft_strmap(char const *s, char (*f)(char));

char				*ft_strjoin(char const *s1, char const *s2);

char				**ft_strsplit(char const *s, char c);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));

int					ft_strnequ(char const *s1, char const *s2, size_t n);

char				*ft_itoa(int n);

void				ft_lstadd(t_list **alst, t_list *new);

char				*ft_strtrim(char const *s);

int					ft_abs(int n);

#endif
