int first_index(const char *s1, const char *set)
{
    int i = 0;
    int j = 0;
    int first = 0;
    while(set[i])
    {
        if(set[i] == s1[first])
        {
            first++;
            i--;
        }
        i++;
    }
    return (first);
}

int last_index(const char *s1, const char *set)
{
    int i = 0;
    int j = 0;
    int last = ft_strlen(s1) - 1;

    while(set[i])
    {
        if(set[i] == s1[last])
        {
        last--;
            i = -1;
        }  
        i++;
    }
    return (last);
}
char *ft_strtrim(const char *s1,const char *set);
{
    int first;
    int last;
    char *new;
    int n = 0;

    first = first_index(s1,set);
    last = last_index(s1,set);

    new = (char *)malloc((last - first + 1) * sizeof(char));
    while(start <= first)
    {
        new[n + start] = s1[start];
        start++;
    }
    new[n + start] = '\0';
    return (new);

}