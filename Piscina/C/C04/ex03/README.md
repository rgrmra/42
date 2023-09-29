# Exercício 03: ft_atoi

Crie uma função que converta a parte inicial de uma `string` passada como parâmetro em um inteiro.

A `string` pode começar com um quantidade de espaços (como determina `isspace(3)`).

A `string` pode ser seguida de uma quantidade de sinais _'+'_ ou _'-'_ que determinará se o número será positivo ou negativo.

Finalmente a `string` poderá ser seguida de uma quantidade de números de base 10.

Sua função deve ler a `string` até que a `string` deixe de seguir as regras e retornar o número.

Você não deve se importar com _overflow_ ou _underflow_, o resultado poderá ser indeterminado.

Exemplo:

```c
%> ./a.out "   ---+--+1234ab567"
-1234
```

Ela deve ser prototipada dessa forma:

```c
int ft_atoi(char *str);
```

**Entregar arquivos:** ft_atoi.c<br>
**Funções permitidas:** Nenhuma

---

A função [isspace](https://man7.org/linux/man-pages/man3/isspace.3.html) define quais caracteres são espaços. Leia o manual!

Primeiramente criaremos uma função que elimine espaços. Essa função irá avançar a `string` toda vez que encontrar um espaço.

```c
void    ft_remove_space(char **str)
{
    while (**str != '\0' && (**str == ' ' || (**str >= 9 && **str <= 13)))
        *(str)++;
}
```

Agora, eliminaremos todos os sinais contando a quantidade de sinais negativos.

```c
void    ft_remove_sign(char **str, int *sign)
{
    while (**str == '+' || **str == -)
    {
        if (**str == '-')
            *sign += 1;
        *(str)++;
    }
}
```

Por fim, realizaremos o calculo do número.

```c
while (*str >= '0' && *str <= '9')
{
    nb *= 10;
    nb += *str - 48;
    str++;
}
if (sign % 2 == 1)
    nb = -nb;
```
