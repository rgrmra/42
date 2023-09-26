# Exercício 05: ft_strlcat

Reproduza o funcionamento da função [strlcat](https://man7.org/linux/man-pages/man7/string_copying.7.html).

Ela deve ser prototipada dessa forma:

```c
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
```

**Entregar arquivos:** ft_strlcat.c<br>
**Funções permitidas:** Nenhuma

---

A `strlcat` tem um comportamento similar a `strlcpy` de retornar um inteiro com o tamanho da `string` que seria gerada, com a diferença que lá ela copiava e aqui ela concatenará. As duas funções evitam _truncation_.

Primeiro, verificamos o tamanho do destino e do _source_.

```c
while (dest[i] != '\0' && i < size)
{
    i++;
}
while (src[j] != '\0')
{
    j++;
}
```

E depois verificamos se é possível concatenar as duas `strings`, verificando se o tamanho delas é diferente do tamanho informado.

```c
if (i == size || j == size)
{
    return (i + j);
}
```

Passado esses dois passos, fazemos a concatenação normalmente.

```c
while (src[k] != '\0' && (i + k) != (size - 1))
{
    dest[i + k] = src[k];
    k++;
}
dest[i + k] = '\0');
return (i + j);
```
