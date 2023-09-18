# Exercício 00: ft_ft

Crie uma função que receba um ponteiro de tipo _int_ como parâmetro e defina o valor daquele inteiro como _42_.

Ela deve ser prototipada dessa forma:

```c
void    ft_ft(int *nb);
```

**Entregar arquivos:** ft_ft.c<br>**Funções Permitidas:** Nenhuma



Ponteiros a primeira vista parecem ser complicado, mas, a partir do momento que os entende, fica mais fácil.

Primeiramente, para compreender ponteiros, basta entender seu conceito. Ponteiros, basicamente, apontam. 

Quando declaramos uma variável de tipo _int_ e atribuímos um valor qualquer a ela e queremos passar a variável para uma função e não apenas seu valor, nós usamos ponteiros.

```c
int main(void)
{
    int nbr;

    nbr = 21;
    ft_ft(&nbr);
    return (0);
}
```

O ponteiro, por outro lado, receberá o endereço (na memória) da variável, fazendo qualquer alteração diretamente na variável.

```c
void    ft_ft(int *nbr)
{
    *nbr = 42;
}
```

Dessa forma, toda vez que chamarmos passando o endereço de algum inteiro **ft_ft(&nbr);** qualquer valor que houver na variável será substituído por _42_.

Para testar o valor final da variável, basta imprimir o valor da variável.

```c
printf("%d\n", nbr);
```

A saída será:

```text
42
```
