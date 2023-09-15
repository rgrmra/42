# Exercício 00: ft_putchar

Escreva uma função de imprima um caractere passado como parâmetro.
A função deve ser prototipada da seguinte forma:

```c
void    ft_putchar(char c);
```

Para imprimir o caractere, você deve usar a função _write_ da seguinte forma:

```c
write(1, &c, 1);
```



**Enviar arquivo:** ft_putchar.c
**Funções Permitidas:** write



Primeiramente você deve entender que o exercício pede uma função, então não será permitido enviar o _main_ no seu arquivo. Não o deixe comentado ao final do arquivo, parece um bom método para agilizar a sua vida e da pessoa que irá te avaliar, porém, você terá dificuldades posteriormente. Lembre-se, quanto mais vezes você escrever o código, mais fácil será para codar depois. Segundo, deixar o _main_ comentado no arquivo é erro de **NORMA**.

> ***Obs.:*** Leia a NORMA!



Uma função é constituída de um tipo de retorno, um nome, e seus parâmetros. No caso do **ft_putchar** nós temos um tipo de retorno vazio (_void_), ou seja, que não retorna nada, o próprio nome da função, que é **ft_putchar** e um único parâmetro do tipo _char_.

Então, toda vez que a função for solicitada, ela recebera um parâmetro do tipo _char_ e não retornará nada. Apenas imprimirá na tela com a função _write_.

A função write, apenas escreve. Ela recebe três parâmetros, o _file descriptor_, o endereço do caractere e a quantidade de _bytes_.

O _file descriptor_ é responsável por armazenar a posição dos objetos, como por exemplo o teclado que fica na posição _0_, o terminal que fica na posição _1_, o terminal de erros que fina na posição _2_ e os outros arquivos que ficam a partir da _3ª_ posição.



Assim ficará nossa função:

```c
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
```



> ***Obs.:*** Não esqueça de colocar o _header_ da 42 em todos os seus arquivos.
