# Exercício 03: ft_print_numbers

Crie uma função que imprima todos os digitos, em uma única linha e de forma ascendente.

Ela deve ser prototipada dessa forma:

```c
void    ft_print_numbers(void);
```



**Enviar aquivo:** ft_print_numbers

**Funções permitidas:** write



Assim como nos exercícios anteriores, a estrutura e a lógica será a mesma, bastando apenas modificar o que será impresso.



```c
#include <unistd.h>

void    ft_print_numbers(void)
{
    char    number;

    number = '0';
    while (number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
}

```
