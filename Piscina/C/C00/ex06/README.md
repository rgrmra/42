# Exercício 06: ft_print_comb2

Crie um função que exiba todos os números diferentes de dois e dois digitos entre 00 e 99 de forma ascendente.

Essa é a saída esperada:

```text
%> ./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 09 99, 01 02, ..., 97 99, 98 99%>
```

Ela deve ser prototipada dessa forma:

```c
void    ft_print_comb2(void);
```

**Entregar arquivos:** ft_print_comb2.c

**Funções permitidas:** write



Semelhante ao exerício anterior, esse muda apenas que ao invés de um número, utilizaremos dois. E será impresso todos os número acima do primeiro número.

Se temos o _00_ na esquerda, começaremos com _01_ na direita até chegar ao _99_.

```c
while (limit < 99)
{
    num++;
    ft_print_number(limit, num);
    if (num > 98)
    {
        limit++;
        num = limit;
    }
}
```

Por fim basta imprimir os números. Mas para imprimi-los precisaremos separá-los e imprimir carctere por caractere.

```c
ft_putchar(limit / 10 + 48);
ft_putchar(limit % 10 + 48);
```

A divisão por _10_ pega o número da esquerda, a modulo de _10_ pega o número da direita.
