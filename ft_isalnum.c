int ft_isalnum(char c)
{
    int is_alnum;

    is_alnum = 0;
    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || c >= '0' && c <= '9')
    {
        is_alnum = 1;
    }
    return is_alnum;
}