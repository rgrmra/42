# Exercício 06: ft_strlen

Crie um programa que conte e retorne o número de caracteres em uma `string`.

Ela deve ser prototipada dessa forma:

```c
int ft_strlen(char *str);
```

**Entregar arquivos:** ft_strlen.c<br>
**Funções permitidas:** Nenhuma



Para contar uma `string` usaremos um iterador até encontrarmos o caractere nulo ('\0'). E depois retornamos o valor da contagem.

```c
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str++ != '\0')
        i++;
    return (i);
}
```
