# Exercício 07: ft_putnbr

Crie uma função que imprima um número passado como parâmetro. A função deve ser capaz de imprimir todos os números possíveis de uma variável de tipo **int**.

Ela deve ser prototipada dessa forma:

```c
void    ft_putnbr(int nb);
```

**Entregar arquivos:** ft_putnbr

**Funções permitidas:** write



Vamos utilizar a mesma ideia do exercício anterior, mas agora precisamos fazer alguns tratamentos para evitar alguns erros.

O primeiro deles é o limite do tipo **int**, ele possui um alcance de -_2147483648_ até _2147483647_. O valor negativo possui um número a mais, pois, o número _0_ é positivo.

Para evitar isso devemos utilizar uma conversão explicita.

```c
long    nbr;

nbr = (long) nb;
```

Resolvido isso, agora trataremos da impressão dos números menores que _0_. Ou seja, os negativos.

```c
if (nbr < 0)
{
    ft_putchar('-');
    nbr = -nbr;
}
```

Se o número for negativo, imprimimos o sinal de negativo e convertemos o número em um positivo.

Por fim, se o número for menor que _10_, imprimimos o caractere. E se for maior ou igual a _10_ convertemos o número com a mesma formula do exercício anterior. Porém, ao invés de utilizarmos uma função iterativa, faremos de forma recursiva.

Por hora, recursividade parecerá complexa, mas depois que entender fará mais sentido.

```c
if (nbr < 10)
	ft_putchar(nbr + 48);
if (nbr >= 10)
{
    ft_putnbr(nbr / 10);
    ft_putnbr(nbr % 10);
}
```

Toda vez que trabalhamos com funções recursivas, devemos prestar atenção não no começo, mas no final da condição. Logo:

Se queremos imprimir o número _123_, devemos entender que a função dividirá o número em _10_ e chamará a ela mesma passando o valor _12_. O valor _12_ por sua vez será dividido por _10_ e chamará a função novamente passando o valor _1_. O número _1_ é menor que _10_ e será impresso. Depois ela retornará para a função anterior, a do número _12_, que pegará o modulo de _10_ e chamará a função novamente passando o valor _2_ que será impresso. E por fim fará a mesma coisa com o valor _3_.

Essa é a mágica da recursividade!
