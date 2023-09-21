# Exercício 00: ft_strcpy

Reproduza o funcionamento da função [strcpy](https://man7.org/linux/man-pages/man3/strcpy.3.html):

Ela deve ser prototipada dessa forma:

```c
char *ft_strcpy(char *dest, char *str);
```

**Entregar arquivos:** ft_strcpy.c<br>
**Funções permitidas:** Nenhuma



A função `strcpy` tem por função copiar o conteúdo de um vetor para outro vetor.

```c
char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
```

Fazemos a iteração nos vetores, realizando a copia de cada caractere e ao final adicionamos o `\0` definindo o final da cadeia de caracteres.
