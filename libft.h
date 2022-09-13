# ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
size_t	ft_strlen(const char *str);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t number, size_t size);	
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int f);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
#endif