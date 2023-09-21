# Exercício 01: ft_strncpy

Reproduza o funcionamento da função [strncpy](https://man7.org/linux/man-pages/man3/strncpy.3.html):

Ela deve ser prototipada dessa forma:

```c
char    *ft_strncpy(char *dest, char *src, unsigned int n);
```

**Entregar arquivos:** ft_strncpy.c<br>
**Funções permitidas:** Nenhuma



A função `strncpy` tem por função copiar o conteúdo de um vetor para outro vetor. Tendo como possibilidade limitar a quantidade de caracteres que serão copiados.

```c
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++
    }
}
```

O `strncpy` copia apenas a quantidade de caracteres passada para ele, então, se o número de caracteres for menor do que o tamanho do conteúdo do vetor de _source_ ele copiará apenas os caracteres, mantendo qualquer informação do vetor de _destination_.

Exemplo:

```c
char dest[20] = "Not tested!";
char src[20] = "You";

ft_strncpy(dest, src, 3);
```

Ao imprimirmos o conteúdo do vetor _destination_ teremos:

```text
You tested!
```

Porém, se fizermos a copia de _4_ caracteres, mesmo que o vetor _source_ tenha apenas _3_ caracteres, o resultado será:

```text
You
```
