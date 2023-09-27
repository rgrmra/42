# Exercício 05: ft_putstr

Crie uma função que imprima uma `string`.

Ela deve ser prototipada dessa forma:

```c
void    ft_putstr(char *str);
```

**Entregar arquivos:** ft_putstr.c<br>
**Funções permitidas:** write



Primeiramente, precisamos entender que uma `string` é na verdade uma cadeia de caracteres, e precisamos imprimir caractere por caractere. Qualquer `string` deverá possuir o caractere nulo ('\0') ao final da cadeia de caracteres.

```c
void    ft_putstr(char *str)
{
    while (*str != '\0')
        write(1, str++, 1);
}
```
