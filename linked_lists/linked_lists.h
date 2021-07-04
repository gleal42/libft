#ifndef LINKED_LISTS_H
# define LINKED_LISTS_H

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void	ft_lstadd_back(t_list **lst, t_list *new_lst);
void	ft_lstadd_front(t_list **lst, t_list *new_lst);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
void	ft_print_list_long(t_list *list);
void	ft_lstswap(t_list **head);
int		is_nbr_in_list(long long nbr, t_list *a);

#endif
