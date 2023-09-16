# Exercício 04: ft_is_negative

Crie uma função que imprima 'N' ou 'P' dependendo do sinal do inteiro passado como parâmetro. Se negativo, imprime 'N', e se positivo ou zero, imprime 'P'.

Ela deve ser prototipada dessa forma:

```c
void    ft_is_negative(void);
```



**Enviar arquivo:** ft_is_negative

**Funções permitidas:** write



Um pouco diferente dos exercícios anteriores e com uma lógica mais simples, esse exercício apenas faz uma verificação para identificar se o número passado como parâmetro é um número positivo ou negativo. Se menor que zero é negativo, se maior ou igual a zero é positivo.



```c
void    ft_is_negative(int n)
{
    if (n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}
```
