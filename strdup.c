char *ft_strdup(const char *str)
{
    int i;
    int n;
    char *cpy;

    i = 0;
    n = 0;
    while(str[n] != '\0')
    {
        n++;
    }
    cpy = (char *)malloc((n + 1) * sizeof(char));
    if(cpy == NULL)
    {
        return (NULL);
    }
    while(i < n)
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[n] = '\0';
    return (str);



}