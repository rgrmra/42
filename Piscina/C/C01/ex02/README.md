# Exercício 02: ft_swap

Crie uma função que troque o valor de dois inteiros que foram passados como parâmetros.

Ela deve ser prototipada dessa forma:

```c
void    ft_swap(int *a, int *b);
```



**Entregar arquivos:** ft_swap.c<br>
**Funções permitidas:** Nenhuma



Para trocar o conteúdo de duas variáveis, primeiramente criaremos uma variável temporária que receberá o valor de uma das duas variáveis.

```c
int tmp;
```

Depois faremos a troca do conteúdo através dos ponteiros:

```c
tmp = *a;
*a = *b;
*b = tmp;
```

Assim, dizemos que, a variável **tmp** receberá o valor do pointeiro de **a**, o ponteiro de **a** receberá o valor do ponteiro de **b** e o ponteiro de **b** receberá o valor da variável **tmp**.

Para testar, basta criar duas variáveis com valores diferente, e mandar imprimir antes e depois de chamar a função.

```c
int a;
int b;

a = 2;
b = 4;
printf("%d%d\n", a, b);
ft_swap(&a, &b);
printf("%d%d\n", a, b);
```

A saída será:

```text
24
42
```
