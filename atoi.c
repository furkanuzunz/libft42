int atoi(const char *str)
{
    int result;
    int i;
    int sign;

    result = 0;
    i = 0;
    sign = 1;
    while(str[i] == 32 || (str[i]<= 13 && str[i] >= 9))
        i++;
    if(str[i] == '-')
    {   
        sign *= -1;
        i++;
    }
    else if(str[i] ==  '+')
        i++;
    while(str[i] && (str[i] < '9' && str[i] > '0'))
    {
        result = result *10;
        result = result + str[i] - '0';
        i++; 
    }
    return (result * sign);
}