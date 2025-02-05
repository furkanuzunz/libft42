#include "libft.h"

void *ft_calloc(size_t count,size_t size)
{
    void *ptr;
    // count eleman sayisi gibi birşey
    ptr = malloc(count * size);
    if(!ptr)
    {
        return (NULL);
    }
    ft_bzero(ptr,count*size); // sifirlattik getirdik.
    return ptr;
}