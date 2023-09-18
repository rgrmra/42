# Exercício ft_ultimate_ft

Crie uma função que receba o ponteiro de um ponteiro de um ponteiro de um ponteiro de um ponteiro de um ponteiro de um ponteiro de um ponteiro de um ponteiro de tipo _int_ como parâmetro e defina o valor daquele inteiro como _42_.

Ela deve ser prototipada dessa forma:

```c
void    ft_ultimate_ft(int *********nbr);
```



**Enviar arquivos:** ft_ultimate_ft.c<br>
**Funções permitidas:** Nenhuma



Esse exercício é similar ao anterior, com a diferença de que agora utilizamos nove ponteiros, e não apenas um.

```c
void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
```

Para testar isso, primeiramente precisamos criar uma variavél e nove ponteiros.

```c

int nbr;
int *nbr1;
int **nbr2;
int ***nbr3
int ****nbr4;
int *****nbr5;
int ******nbr6;
int *******nbr7;
int ********nbr8;
int *********nbr9:
```

Depois, precisamos atribuir valores para cada um, informando o que cada um irá receber.

```c
nbr = 21;
nbr1 = &nbr;
nbr2 = &nbr1;
nbr3 = &nbr2;
nbr4 = &nbr3;
nbr5 = &nbr4;
nbr6 = &nbr5;
nbr7 = &nbr6;
nbr8 = &nbr7;
nbr9 = &nbr8;
```

Por fim, para testar, bastar chamar a função passando o ponteiro e imprimir o valor da variavél.

```c
ft_ultimate_ft(nbr9);
printf("%d\n", nbr);
```
