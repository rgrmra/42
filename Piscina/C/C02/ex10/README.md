# Exercício 10: ft_strlcpy

Reproduza o funcionamento da função [strlcpy](https://man7.org/linux/man-pages/man7/string_copying.7.html).

Ela deve ser prototipada dessa forma:

```c
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
```

---

A função `strlcpy` tem um funcionamento um tanto quanto interessante. Ela recebe uma `string` de destino, uma `string` com o conteúdo a ser copiado e a quantidade de caracteres que a nova `string` terá.

Porém, diferente das funções `strcpy` e `strncpy` ela não retonará a `string`, mas a quantidade de caracteres que a `string` a ser copiada possui.

**Ok, mas qual é o objetivo disso?** Simples, evitar _truncation_. Você sabe a quantidade de caracteres que deveriam ser copiados e a quantidade de caracteres que a `string` copiada possui, se os valores forem diferentes, ocorreu _truncation_.

Logo, se o valor de _size_ for maior que _0_ faremos a copia da `string`, se não retornaremos apenas o tamanho da `string`.

```c
    if (size > 0)
    {
        while (src[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}
```
