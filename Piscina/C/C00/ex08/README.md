# Exercício 09: ft_print_combn

Crie uma função que imprima todos as combinações de _n_ números em ordem ascendente.

O valor de _n_ deve estar entre _1_ e _9_.

Se _n = 2_ a saída será:

```text
%> ./a.out | cat -e
01, 02, 03, ..., 09, 12, ..., 79, 89%>
```

Ela deve ser prototipada dessa forma:

```c
void    ft_print_combn(int n);
```



**Entregar arquivos:** ft_print_combn.c

**Funções permitidas:** write



Esse exercício é semelhante ao ex05, mas nesse caso, informaremos a quantidade de digitos que queremos combinar.

A primeira vez que fiz esse exercício, fiz com um inteiro que sempre recebia mais _1_, a função ficou extremamente lenta. Preferi, então, trabalhar com um vetor de _9_ posições.



Primeiramente nossa função verifica se o valor está entre _1_ e _9_.

```c
if (n < 1 || n > 9)
{
    return ;
}
```

Mesmo sendo um função sem retorno, eu posso quebrá-la com um _return_ impedindo o fluxo de execução.

Depois, inserimos no vetor o primeiro número valido. 

```c
i = 0;
while (n > -1)
{
    n--;
    nb[i] = n;
    i++;
}
```

Agora, acrescentamos _1_ a casa da unidade e sempre que o valor chegar a _9_ nós acrescentamos _1_ a casa da dezena, e verificamos as outras casas se possuem um número _9_ ou limitado pela condição do vetor.

```c
i = 0;
ft_print_number(nb, n);
nb[i] += 1;
if (nb[i] > 9 && n > 1
{
    nb[i + 1] += 1;
    nb[i] = nb[i + 1] + 1;
    while (nb[i + 1] >= 10 - i)
    {
        nb[i + 2] += 1;
        nb[i + 1] = nb[i + 2] + 1;
        nb[i] = nb[i + 1];
        i++;
    }
}
```

Por fim imprimimos o número, com algumas limitações, pois, nossa condição não impede números errados ou repetidos.

```c
i = --n;
if (nb[0] > 9 || nb[0] == nb[1])
{
    return ;
}
```

Dessa forma quebramos a impressão do número errado ou repetido.
