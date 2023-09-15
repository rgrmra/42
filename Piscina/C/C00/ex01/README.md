# Exercício 01: ft_print_alphabet

Crie uma função que exiba o alfabeto em minúsculo, em uma única linha e de forma ascendente, começando pela letra 'a'.

A função deve ser prototipada da seguinte forma:

```c
void	ft_print_alphabet(void);
```



**Enviar arquivo:** ft_print_alphabet.c
**Funções Permitidas:** write

Há muitos modos de se realizar esse exercício, você como programador deve sempre em realizar o a mais eficiente e que tenha maior manutenibilidade. Com isso em mente, vejamos primeiro o que deve ser evitado.




**Evite:**

```c
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    ft_putchar('a');
    ft_putchar('b');
    ft_putchar('d');
    ...
    ft_putchar('z');
}
```

Uma função com 26 **ft_putchar** funciona, mas deixa o código gigante.



**Evite:**

```c
#include <unistd.h>

void    ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 1);
}
```

Uma função com uma única _string_ funciona, mas não lhe ensina a utilizar a capacidade do computador.



**Faça:**

```c
#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    character;

    character = 'a';
    while (character <= 'z')
    {
        write(1, &character, 1);
        character++;
    }
}
```

É uma função mais complexa que a anterior que imprimia os caracteres diretamente de uma string, porém, ela possui uma manutenibilidade maior. Se quisermos inverter o alfabeto iremos somente inverter o valor dos caracteres e da lógica.

