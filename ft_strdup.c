#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t counter;

    counter = 0;
    while (s[counter] != '\0')
        counter++;
    return (counter);
}

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;
	size_t	counter;

	size = ft_strlen(s);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		ptr[counter] = s[counter];
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}

#include <stdio.h>

int main(void)
{
    char    *original_1 = "Hola 42";
    char    *copia_1;
    char    *original_2 = "";
    char    *copia_2;

    printf("--- TESTS PARA FT_STRDUP ---\n\n");

    // TEST 1: Cadena normal
    printf("1. Duplicando una cadena normal: \"%s\"\n", original_1);
    copia_1 = ft_strdup(original_1);
    if (copia_1)
    {
        printf("   Contenido original: %s\n", original_1);
        printf("   Contenido copia:    %s\n", copia_1);
        printf("   Memoria original: %p\n", original_1);
        printf("   Memoria copia:    %p\n", copia_1);
        free(copia_1);
    }
    else
        printf("   [KO] Falló la reserva de memoria.\n");

    // TEST 2: Cadena vacía
    printf("\n2. Duplicando una cadena vacía: \"%s\"\n", original_2);
    copia_2 = ft_strdup(original_2);
    if (copia_2)
    {
        printf("   Contenido original: %s\n", original_2);
        printf("   Contenido copia:    %s\n", copia_2);
        printf("   Memoria original: %p\n", original_2);
        printf("   Memoria copia:    %p\n", copia_2);
        free(copia_2);
    }
    else
        printf("   [KO] Falló la reserva de memoria.\n");

    /* NOTA: No se prueba ft_strdup(NULL) porque el comportamiento 
       estándar de strdup con NULL es un Segfault (Undefined Behavior). */

    return (0);
}