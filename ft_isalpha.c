int ft_isalpha(char c)
{
    int is_alpha;

    is_alpha = 0;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        is_alpha = 1;
    }
    return is_alpha;
}