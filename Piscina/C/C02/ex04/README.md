# Exercício 04: ft_str_is_lowercase

Crie uma função que retorne _1_ se a _string_ passada como parâmetro possuir somente caracteres minúsculos, e _0_ se possuir qualquer outro caractere.

Ela deve ser prototipada dessa forma:

```c
int ft_str_is_lowercase(char *str);
```

Ela deve retornar _1_ se a _string_ for vazia.

**Entregar arquivos:** ft_str_is_lowercase.c<br>
**Funções permitidas:** Nenhuma



Semelhante ao exercício anterior, porém, ao invés de números, utilizaremos o _a_ e o _z_ minúsculo.

```c
if (str[i] < 'a' || str[i] > 'z')
{
    return (0);
}
```
