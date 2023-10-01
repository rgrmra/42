# Exercício 00: ft_iterative_factorial

Crie uma função que retorne um número. O número será o resultado de uma operação fatorial feita pelo número passado como parâmetro.

Se o argumento for inválido a função retornará _0_.

Não se deve lidar com _overflows_, o resultado será indefinido.

Ela deve ser prototipada dessa forma:

```c
int ft_iterative_factorial(int nb);
```

**Entregar arquivos:** ft_iterative_factorial.c<br>
**Funções permitidas:** Nenhuma

---

A fatoração de um número é a multiplicação do número pelos números anteriores.

A fatoração de _5_, por exemplo, é _120_. Pois, _5 * 4 * 3 * 2 * 1_ é igual a _120_.

Tendo isso em mente, façamos, primeiro, o tratamento da função.

```c
if (nb < 0)
    return (0);
nbr = 1;
```

Dessa forma, eliminamos qualquer algarismo menor que _0_ e definimos o número como sendo _1_. Caso o número escolhido seja _0_ ele retornará _1_.

```c
while (nb > 1)
    nbr *= nb--;
return (nbr);
```

A iteração será feita até que `nb` seja igual a _1_, retornando o valor da multiplicação de todos os números.
