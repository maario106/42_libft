#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;
	char	*ptr;

	counter = 0;
	ptr = (char *)s;
	while (counter < n)
	{
		ptr[counter] = '\0';
		counter++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *ptr;

    printf("--- TESTS PARA FT_CALLOC ---\n\n");

    // TEST 1: Uso normal
    printf("1. Uso normal (5 elementos de 4 bytes):\n");
    ptr = ft_calloc(5, 4);
    if (ptr)
    {
        printf("   [OK] Memoria reservada correctamente en: %p\n", ptr);
        free(ptr); // Siempre liberamos lo que pedimos
    }
    else
        printf("   [KO] Falló y devolvió NULL\n");

    // TEST 2: Cero elementos (nmemb = 0)
    printf("\n2. Trampa del cero (nmemb = 0, size = 5):\n");
    ptr = ft_calloc(0, 5);
    if (ptr)
    {
        printf("   [OK] Devolvió un puntero válido para free(): %p\n", ptr);
        free(ptr);
    }
    else
        printf("   [KO] Devolvió NULL\n");

    // TEST 3: Tamaño cero (size = 0)
    printf("\n3. Trampa del cero (nmemb = 5, size = 0):\n");
    ptr = ft_calloc(5, 0);
    if (ptr)
    {
        printf("   [OK] Devolvió un puntero válido para free(): %p\n", ptr);
        free(ptr);
    }
    else
        printf("   [KO] Devolvió NULL (Aquí explotaría si usaras == 0)\n");

    // TEST 4: Ataque de desbordamiento (Overflow)
    printf("\n4. Desbordamiento crítico (nmemb = SIZE_MAX, size = 2):\n");
    ptr = ft_calloc(SIZE_MAX, 2);
    if (!ptr)
        printf("   [OK] ¡Protección activada! Detectó el overflow y devolvió NULL.\n");
    else
    {
        printf("   [KO] ¡Peligro! Reservó memoria falsa y causará un Buffer Overflow: %p\n", ptr);
        free(ptr);
    }

    printf("\n--- FIN DE LOS TESTS ---\n");
    return (0);
}