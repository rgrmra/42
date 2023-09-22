# Exercício 08: ft_strlowcase

Crie uma função que transforme todas as letras em minúsculas.

Ela deve ser prototipada dessa forma:

```c
char    *ft_strlowcase(char *str);
```

Ela deve retonar **str**.

**Entregar arquivos:** ft_strlowcase.c<br>
**Funções permitidas:** Nenhuma



Semelhante ao exercício anterior, porém, ao invés de procurarmos pelos caracteres minúsculos, procuraremos pelos caracteres maiúsculos e, para cada caractere maiúsculo, acrescentaremos _32_.

```c
if (str[i] >= 'A' && str[i] <= 'Z')
{
    str[i] += 32;
}
```
