int ft_isdigit(char c)
{
    int is_digit;

    is_digit = 0;
    if (c >= '0' && c <= '9')
    {
        is_digit = 1;
    }
    return is_digit;
}