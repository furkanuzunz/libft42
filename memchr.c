void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while(i <= n)
    {
        if((unsigned char*)str[i] == (unsigned char)c)
        {
            return ((unsigned char *)&str[i]);
        }
        i++;
    }
    return (NULL);
}