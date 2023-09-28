/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:15:03 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/26 18:15:09 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*Checks if c is value recieved is a letter
Returns 0 if false, non-zero if true*/
int		ft_isalpha(int c);

/*Checks if c recieved is a decimal number
Returns 0 if false, non-zero if true*/
int		ft_isdigit(int c);

/*Checks if c isalpha or isdigit
Returns 0 if false, non-zero if true*/
int		ft_isalnum(int c);

/*Checks if c is an ASCII character
Returns 0 if false, non-zero if true*/
int		ft_isascii(int c);

/*Checks if c is a printable ASCII character
Returns 0 if false, non_zero if true*/
int		ft_isprint(int c);

//It counts the length of s without the NULL character
size_t	ft_strlen(const char *s);

/*Writes "len" bytes of "c"(converted to unsigned char) 
into string b. It returns b*/
void	*ft_memset(void *b, int c, size_t len);

/*Writes "n" zeroes to string "s" if "n" is zero,
nothing happens*/
void	ft_bzero(void *s, size_t n);

/*Copies "n" bytes from "src" to "dst". No overlap handling
Returns original value of dst*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*Copies "len" bytes from "src" to "dst". Handles overlap
Returns original value of dst*/
void	*ft_memmove(void *dst, const void *src, size_t len);

/*Copies up to dstsize - 1 characters (1 for NULL) from src to
dst. It adds a NULL at the end.
Returns total length of the string it tried to create*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*Appends at most dstsize - strlen(dst) - 1 characters from
string "src" to the end of "dst". It adds a NULL termination
Returns total length of the string it tried to create*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*Converts lowercase to uppercase
Returns converted character or same character if not lowercase*/
int		ft_toupper(int c);

/*Converts uppercase to lowercase
Returns converted character or same character if not uppercase*/
int		ft_tolower(int c);

/*Locates first occurrence of "c" in "s". Checks also for '\0' char
It returns a pointer to the located value or NULL if nothing is found*/
char	*ft_strchr(const char *s, int c);

/*Identical to ft_strchr, except it locates las occurrence of "c"*/
char	*ft_strrchr(const char *s, int c);

/*Compares both strings lexicographically, up to "n" characters
Returns an integer greater than, equal to or less than 0, depending
on "s1" being greater, equal to or less than "s2"*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*Locates the first ocurrence of "c" (converted) to an unsigned char in "s"
Returns a pointer to the byte located or NULL if such byte doesn't exist within
"n" bytes*/
void	*ft_memchr(const void *s, int c, size_t n);

/*compares "s1" to "s2, both are assumed to be "n" bytes long
Returns 0 if  both strings are identical, otherwise it returns the
difference between the first two differing bytes*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*Locates the first orccurrence of needle inside haystack
If needle is empty, returns haystack. If needle is not found, returns NULL
Otherwise a pointer to the first occurrence of needle is returned*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

//Converts "str" into its int representation
int		ft_atoi(const char *str);

/*Allocates enough space for "count" objects that are "size" bytes of
memory each and returns a pointer to the allocated memory. Allocated memory
is filled with bytes of value 0*/
void	*ft_calloc(size_t count, size_t size);

/*It allocates sufficient memory for a copy of "s1", copies it and
returns a pointer to it*/
char	*ft_strdup(const char *s1);

/*It returns a substring of "s". Substring starts at index "start" and
has a "len" max length*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

//Returns a concatenation of s1 and s2
char	*ft_strjoin(char const *s1, char const *s2);

/*Erases all characters in string "set" from the beginning and the end of
"s1" until it finds a character not belonging to "set"
It returns the resulting substring*/
char	*ft_strtrim(char const *s1, char const *set);

/*It separates "s" into two string, "c" would be the delimiting char
It returns an array of both NULL terminated strings*/
char	**ft_split(char const *s, char c);

//It returns a string representing the number "c"
char	*ft_itoa(int n);

/*Applies function "f" to each character in "s". 
It retunrs a new resulting string*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*Applies function "f" to each character in "s" the address of the
character can be modified if necessary*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

//Sends "c" to the specified file descriptor
void	ft_putchar_fd(char c, int fd);

//Sends string "s" to the specified file descriptor
void	ft_putstr_fd(char *s, int fd);

/*Sends string "s" to the specified file descriptor followed by
a line jump*/
void	ft_putendl_fd(char *s, int fd);

//Sends number "n" to the specified file descriptor
void	ft_putnbr_fd(int n, int fd);

//Creates a new node
t_list	*ft_lstnew(void *content);

//Adds a node to the beginning of a list
void	ft_lstadd_front(t_list **lst, t_list *new);

//Counts the amount of nodes in a list
int		ft_lstsize(t_list *lst);

//Returns the last node in a list
t_list	*ft_lstlast(t_list *lst);

//adds a node to the end of the list
void	ft_lstadd_back(t_list **lst, t_list *new);

//Erases a node
void	ft_lstdelone(t_list *lst, void (*del)(void *));

//Erases all nodes in a list and the list is set to NULL
void	ft_lstclear(t_list **lst, void (*del)(void *));

/*Iterates over a list and applies function "f" to each
node's content*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/*Iterates over a list and applies function "f" to the content of
each node. It returns a new resulting list. If creationg fails,
function "del" is used to erase nodes*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
