# Exercício 04: ft_ultimate_div_mod

Crie uma função que divida os parâmetros de `a` por `b` e armazene o resultado no ponteiro `a`. Ela também deve armazenar o resto da divisão de `a` por `b` no ponteiro `b`.

Ela deve ser prototipada dessa forma:

```c
void    ft_ultimate_div_mod(int *a, int *b);
```

**Enviar arquivos:** ft_ultimate_div_mod.c<br>
**Funções permitidas:** Nenhuma



Exatamente igual ao exercício anterior, porém, dessa vez, só temos duas variáveis. Então precisaremos de uma variável temporária para armazenar o valor da divisão, para que não percamos o valor de uma das variáveis.

```c
void    ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a / *b;
    *b = *a % *b;
    *a = tmp;
}
```
