char *ft_strnstr(const char *lookingfor, const char *wanted, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if(*wanted == '\0')
    {
        return (char *)lookingfor;
    }
    while(lookingfor[i] != '\0' && i < len)
    {
        j = 0;
        while(wanted[i] != '\0' && looking[i + j] == wanted[j] && (i+j) < len)
        {
            if(wanted[j] == '\0')
            {
                return (char *)&lookingfor[i];
            }
            j++;
        }
        i++;
    }
    return (NULL);
}