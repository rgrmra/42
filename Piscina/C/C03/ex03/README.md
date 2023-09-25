# Exercício 02: ft_strcat

Reproduza o funcionamento da função [strncat](https://man7.org/linux/man-pages/man3/strncat.3.html).

Ela deve ser prototipada dessa forma:

```c
char    *ft_strncat(char *dest, char *src, undigned int nb);
```

**Entregar arquivos:** ft_strcar.c<br>
**Funções permitidas:** Nenhuma

---

A função `strncat` é semelhante a `strcat`, porém, ela só concateca a quandiade de caracteres desejados.

```c
while (dest[i] != '\0')
{
    i++;
}
while (src[j] != '\0' && j < (nb - 1))
{
    dest[i] = src[j];
    i++;
    j++;
}
```

Ao final, basta fechar o vetor com o caractere nulo.

```c
dest[i] = '\0';
```
