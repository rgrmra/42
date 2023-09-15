# Exercício 02: ft_print_reverse_alphabet

Crie uma função que imprima o alfabeto em minúsculo, em uma única linha e de forma decrescente, começando pela letra 'z'.

A função deve ser prototipada da seguinte forma:

```c
void    ft_print_reverse_alphabet(void);
```



**Enviar arquivo:** ft_print_reverse_alphabet.c
**Funções permitidas:** write



Como feito anteriormente, fizemos a lógica de um _loop_. Faremos a mesma coisa nesse, apenas invertendo a lógica e os valores dos caracteres.



```c
#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    character;

    character = 'z';
    while (character >= 'a')
    {
        write(1, &character, 1);
    }
}
```

Veja que a estrutura do exercício é exatamente a mesma do anterior, modificando apenas o valor dos caracteres ('a' virou 'z' e 'z' virou 'a'), e invertendo a lógica (**<=** (menor igual) virou **>=** (maior igual)).
