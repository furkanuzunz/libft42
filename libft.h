#ifndef LIBFT_H
#define LIBFT_H 

#endif 

#include <stddef.h> // #size_t tanimi icin

int ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isdigit(int n);
int ft_ascii(int n);
int ft_isprint(int n);
int ft_strlen(char *str);
int ft_memcmp(const void *str1,const void *str2,size_t n);


char *ft_strdup(const char *str);
char *ft_itoa(int n);




void ft_bzero(void *s,int n);
void *ft_calloc(size_t n,size_t sizek);
void *ft_memchr(const void *s,int a,size_t n);
