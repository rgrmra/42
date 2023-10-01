# Exercício 01: ft_recursive_factorial

Crie uma função recursiva que retorne o fatorial de um número passado como parâmetro.

Se o argumento for invalido função deverá retornar _0_.

Não se deve lidar com _overflows_, o resultado será indefinido.

Ela deve ser prototipada dessa forma:

```c
int ft_recursive_factorial(int nb);
```

**Entregar arquivos:** ft_recursive_factorial.c<br>
**Funções permitidas:** Nenhuma

---

A mesma ideia do exercício anterior, porém, agora, faremos de forma recursiva.

Primeiro tratemos os erros:

```c
if (nb < 0)
    return (0);
nbr = nb;
```

Agora, ao invés de utilizarmos um _while_, chamaremos a função novamente passando o número menos _1_.

```c
if (nb > 1)
    return (nbr * ft_recursive_factorial(--nb));
return (1);
```

Se o número for igual a zero retornará _1_.
