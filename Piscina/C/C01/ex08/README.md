# Exercício 08: ft_sort_int_tab

Crie uma função que ordene um _array_ de inteiros passado como parêmetro em ordem crescente.

Ela deve ser prototipada dessa forma:

```c
int ft_sort_int_tab(int *tab, int size);
```

**Entregar arquivos:** ft_sort_int_tab.c<br>
**Funções permitidas:** Nenhuma



Primeiramente nesse exercício devemos conhecer [algoritmos de ordenação](https://www.geeksforgeeks.org/sorting-algorithms/). Há uma lista enorme, mas sugiro que você tenha conhecimento de pelo menos os quatro primeiro, sendo eles: [Selection Sort](https://www.geeksforgeeks.org/selection-sort/), [Bubble Sort](https://www.geeksforgeeks.org/bubble-sort/), [Insertion Sort](https://www.geeksforgeeks.org/insertion-sort/), [Merge Sort](https://www.geeksforgeeks.org/merge-sort/).

Eu escolhi como preferência o _Selection Sort_, é simples de implementar e é mais eficiênte que o _Bubble Sort_.

Primeiramente devemos encontrar o menor valor no array, e quando encontrarmos.

```c
while (++j < size)
    while (tab[j] < tab[minor])
        minor = j;
```

Depois trocaremos de lugar com o valor na primeira posição.

```c
if (i != minor)
{
    tmp = tab[i];
    tab[i] = tab[minor];
    tab[minor] = tmp;
}
```
