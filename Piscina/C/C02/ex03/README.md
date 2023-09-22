# Exercício 03: ft_str_is_numeric

Crie uma função que retorne _1_ se a _string_ passada como parâmetro possuir apenas caracteres numericos, e _0_ se possuir qualquer outro caractere.

Ela deve ser prototipada dessa forma:

```c
int ft_str_is_numeric(char *str);
```

Ela deve retornar _1_ se a _string_ for vazia.

**Enviar aqrquivos:** ft_str_is_numeric.c<br>
**Funções permitidas:** Nenhuma



Exatamente igual ao exercício anterior, porém com uma única limitação, retornar _0_ se o valor estiver além de _0_ e _9_.

```c
if (str[i] < '0' || str[i] > '9')
{
    return (0);
}
```
