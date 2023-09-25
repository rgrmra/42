# Exercício 02: ft_strcat

Reproduza o funcionamento da função [strcat](https://man7.org/linux/man-pages/man3/strcpy.3.html).

Ela deve ser prototipada dessa forma:

```c
char    *ft_strcat(char *dest, *char src);
```

**Entregar arquivos:** ft_strcat.c<br>
**Funções permitidas:** Nenhuma

---

A função `strcat` concatena uma `string` na outra.

Primeiro verificamos o tamanho do vetor de destino e depois fazemos a copia a partir desse ponto.

```c
while (dest[i] != '\0')
{
    i++;
}
while (src[j] != '\0')
{
    dest[i] = src[j];
    i++;
    j++;
}
```

Ao final, basta fechar o vetor com o caractere nulo.

```c
des[i] = '\0';
```
