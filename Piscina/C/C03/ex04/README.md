# Exercício 04: ft_strstr

Reproduza o funcionamento da função [ft_strstr](https://man7.org/linux/man-pages/man3/strstr.3.html).

Ela deve ser prototipada dessa forma:

```c
char    *ft_strstr(char *str, char *to_find);
```

**Entregar arquivos:** ft_strstr.c<br>
**Funções permitidas:** Nenhuma

---

A função `strstr` encontra a primeira ocorrência da _substring_ a ser encontrada na `string`.

Basicamente, fazemos uma iteração de comparação entre as duas `strings` e retornamos o endereço do que encontramos.

Primeiro identificaremos o tamanho da _substring_. Se o tamanho da _substring_ for _0_ retornamos toda a `string`.

```c
while (to_find != '\0')
{
    size++;
}
if (size == 0)
{
    return (str);
}
```

Depois procuramos encontrar a _substring_ na `string`. Se encontrarmos retornamos o endereço.

```c
if (str[len] != to_find[i])
{
    i = 0;
}
else
{
    i++;
    if (len == i)
    {
        return (&str[len - i + 1]);
    }
}
```

Por fim, se nada for satisfeito, retornamos _null_.

```c
return (0);
```
