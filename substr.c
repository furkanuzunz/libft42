char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *new;
    int i;
    int n;

    i = 0;
    if(!s)
        return (NULL);
    n = ft_strlen(s);
    if(start >= n)
        len = 0;
    else if(n < start + len)
        len = n - start;  // açıklaması burada https://chatgpt.com/share/671e33d5-8954-800b-94d5-830dcaf7b1d5
    new = (char *)malloc((len + 1)* sizeof(char));
    if(new == NULL)
        return NULL;
    while(i < len)
    {
       new[i] == s[start + i];
       i++;
    }
    new[i] == '\0';
    return (new);
}