char *ft_strjoin(const char *s1,const char *s2)
{
    char *new;
    int i;
    int j;

    i = 0;
    j = 0;
    new = (char *)malloc((ft_strlen(s1) + ft_strlen(b) + 1) * sizeof(char));
    if(new == NULL)
        return NULL;
    while(s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        new[i + j] = s2[j];
        j++;
    }
    new[i + j] = '\0';
    return (new);
}