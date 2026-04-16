#include "libft.h"

#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t counter;

    counter = 0;
    while(s[counter] != '\0')
        counter++;
    return (counter);
}

char *ft_strchr(const char *s, int c)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s) + 1;
    while (s[i] != c && i < len)
        i++;
    if (i == len && c != '\0')
        return (NULL);
    else
        return ((char *)s + i);
}

int main()
{
    // Original string containing username and password
    const char* str = "GeeksforGeeks:abc@123";
    // Delimiter to separate username and password

    char delimiter = 'f';
    // Find the position of the delimiter in the string
    char* delimiter_position = ft_strchr(str, delimiter);

    // If the delimiter is found in the string
    if (delimiter_position != NULL) {
        // Calculate the length of the username
        size_t username_length = delimiter_position - str;

        // Allocate memory for the username and copy the
        // username part of the string
        char username[username_length + 1];
        strncpy(username, str, username_length);

        // Null-terminate the username string
        username[username_length] = '\0';

        // The password starts right after the delimiter
        char* password = delimiter_position + 1;

        // Print the extracted username and password
        printf("Username: %s\n", username);
        printf("Password: %s\n", password);
    }
    else {
        // If the delimiter is not found, print an error
        // message
        printf("Delimiter not found.\n");
    }
    return 0;
}