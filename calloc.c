void *calloc(size_t num, size_t size)
{
    void *a;
    int i;

    i = 0;
    a = (void*)malloc(num*size);
    if(a == NULL)
    {
        return (NULL);
    }
    while(i < num)
    {
        a[i] = 0;
        i++;
    }
    return (a);
}