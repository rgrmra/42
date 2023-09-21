# Exercício 02: ft_str_is_alpha

Crie uma função que retorne _1_ se a _string_ passada como parâmetro possuir apenas caracteres alfabeticos, e _0_ se possuir qualquer outro caractere.

Ela deve ser prototipada dessa forma:

```c
int ft_str_is_alpha(char *str);
```

Ela deve retornar _1_ se a _string_ for vazia.

**Entregar arquivos:** ft_str_is_alpha.c<br>
**Funções permitidas:** Nenhuma



Há muitas formas de realizar esse exercício, o modo mais rápido que encontrei foi retornar _0_ quando encontrar qualquer caractere que não seja alfabético.

```c
if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
{
    return (0);
}
```

Dessa forma estamos identificando qualquer caractere além dos alfabéticos.
E ao final da função basta colocar o `return (1)`. Assim, mesmo que a _string_ seja vazia, retornará _1_.
