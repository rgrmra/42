# Exercício 03: ft_div_mod

Crie uma função que divida os parâmetros de `a` por `b` e armazene o resultado no ponteiro `div`. Ela também deve armazenar o resto da divisão de `a` por `b` no ponteiro `mod`.

Ela deve ser prototipada dessa forma:

```c
void    ft_div_mod(int a, int b, int *div, int *mod);
```

**Entregar arquivos:** ft_div_mod.c<br>
**Funções permitidas:** Nenhuma



Nesse exercício basta atribuir a divisão de `a` por `b` ao `div` e o resto da divisão de `a` por `b` ao `mod`.

```c
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
```
