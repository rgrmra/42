# Exercício 05: ft_str_uppercase

Crie uma função que retorne _1_ se a _string_ passada como parâmetro possuir apenas caracteres maiúsculos, e _0_ se possuir qualquer outro caractere.

Ela deve ser prototipada dessa forma:

```c
int ft_str_is_uppercase(char *str);
```

Ela deve retornar _1_ se a _string_ for vazia.

**Entregar arquivos:** ft_str_is_uppercase.c<br>
**Funções permitidas:** Nenhuma



Semelhante ao exercício anterior, porém, ao invés de caracteres minúsculos, utilizaremos o _A_ e o _Z_ maiúsculo.

```c
if (str[i] < 'A' || str[i] > 'Z')
{
    return (0);
}
```
