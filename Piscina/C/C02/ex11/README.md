# Exercício 11: ft_putstr_non_printable

Crie uma função que imprima uma `string` de caracteres na tela. Se a `string` possuir caracteres que não são imprimiveis, eles deverão ser imprimidos no formato hexadecimal em minúsculo precedido por uma contra-barra.

Ela deve ser prototipada dessa forma:

```c
void    ft_putstr_non_printable(char *str);
```

**Entregar arquivos:** ft_putstr_non_printable.c<br>
**Funções permitidas:** write

**Exemplo:**

```text
Coucou\ntu vas bien ?
```

```text
Coucou\0atu vas bien ?
```

---

Se encontrarmos um caractere que não seja imprimível, basta imprimir o hexadecimal dele, através da função `ft_put_nbr` adaptada para hexadecimal.

```c
void    ft_putnbr_hex(int nb)
{
    if (nb < 10)
        ft_putchar(nb + 48);
    else if (nb < 16)
        ft_putchar(nb + 87);
    if (nb >= 16)
    {
        ft_putnbr_hex(nb / 16);
        ft_putnbr_hex(nb % 16);
    }
}
```
