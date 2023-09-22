# Exercício 06: ft_str_is_printable

Crie uma função que retorne _1_ se a _string_ passada como parâmetro pussuir apenas caracteres imprimiveis, e _0_ se contiver qualquer outro caractere.

Ela deve ser prototipada dessa forma:

```c
int ft_str_is_printable(char *str);
```

Ela deve retornar _1_ se a _string_ for vazia.

**Entregar arquivos:** ft_str_is_printable.c<br>
**Funções permitidas:** Nenhuma



Semelhante ao exercício anterior, porém, ao invés de caracteres maiúsculo, utilizaremos o espaço e o til.

```c
if (str[i] < ' ' || str[i] > '~')
{
    return (0);
}
```

> ***Obs.:*** Se você não entendeu porque utilizei o espaço e o til, sugiro verificar a tabela ASCII novamente, e se continuar em dúvida, a internet está a sua disposição.
