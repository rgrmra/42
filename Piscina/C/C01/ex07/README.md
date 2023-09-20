# Exercício 07: ft_rev_int_tab

Crie uma função que inverta um determinado _array_ de inteiros passado como parâmetro. 

Ela deve ser prototipada dessa forma:

```c
void    ft_rev_int_tab(int *tab, int size);
```

**Entregar arquivos:** ft_rev_int_tab.c<br>
**Funções permitidas:** Nenhuma



Nessa função trocaremos de lugar a posição inicial do array com a última posição. Depois incrementaremos _1_ no iterador e decrementaremos _1_ no tamanho do _array_. Dessa forma estaremos acessando todas as posições do _array_.

Porém, não devemos fazer essa iteração até o final, mas somente até que o iterador seja menor que o tamanho do _array_.

```c
int ft_rev_int_tab(int *tab, int size)
{
    int i;
    int tmp;

    i = -1;
    while (++i < --size)
    {
        tmp = tab[i];
        tab[i] = tab[size];
        tab[size] = tmp;
    }
}
