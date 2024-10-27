
char *ft_strchr(const char *str, int c)
{
    while(*str != '\0' )
    {
        if(*str == (char)c)
            return (char *)str;
        str++;
    }
    return (NULL);
}