# Exercício 04: ft_putnbr_base

Crie uma função que imprima um número em um sistema de base no terminal.

O número passado como parâmetro será um `int`  e a base uma `string`.

O sistema de base contém todos os caracteres usáveis para imprimir o número:

- 0123456789  base decimal
- 01  base binária
- 0123456789ABCDEF base hexadecimal
- poneyvif base octal

A função deve lidar com números negativos.

Se houver algum argumento invalido, nada deverá ser impresso. Exemplo de argumentos inválidos.

- a base está vazia
- a base contém caracteres duplicados
- a base contém + ou -

Ela deve ser prototipada dessa forma:

```c
void    ft_putnbr_base(int *nbr, *base);
```

**Entregar arquivos:** ft_putnbr_base.c<br>
**Funções permitidas:** write

---

Esse exercício é um conversor de decimal para uma base específica. Tendo isso em mente, tratemos de verificar se a base é válida.

```c
	while (*(base + i) != '\0')
	{
		j++;
		if ((*(base + i) == *(base + j)) || (*(base + i) == ' ')
			|| (*(base + i) == '+') || (*(base + i) == '-')
			|| (*(base + i) >= 9 && *(base + i) <= 13))
		{
			*bs = 0;
			return ;
		}
		if (*(base + j) == '\0')
			j = ++i;
	}
	*bs = i;
```

Verificamos se a base contém algum espaço, se contém caracteres repetidos e se possui + ou -. Se alguma dessas condições for válida, zeramos o valor da base e retornamos.

Se ao retornar, o valor da base for maior que _1_ executamos a função `ft_putnbr`.

```c
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < bs)
		ft_putchar(*(base + nb));
	if (nb >= bs)
	{
		ft_putnbr(nb / bs, base, bs);
		ft_putnbr(nb % bs, base, bs);
	}
```

Essa é a mesma `ft_putnbr` que fizemos anteriormente, porém, ela possui algumas modificações.

A primeira modificação é que ela imprimi o caractere conforme a posição dele na base. A outra é que dividimos o número pelo quantidade de caracteres na base. Dessa forma alcançamos o nosso objetivo.
