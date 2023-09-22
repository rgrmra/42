# Exercício 07: ft_strupcase

Crie uma função que transforme todos as letras em maiúsculas.

Ela deve ser prototipada dessa forma:

```c
char    *ft_strupcase(char *str);
```

Ela deve retornar **str**.

**Entregar arquivos:** ft_strupcase.c<br>
**Funções permitidas:** Nenhuma



Primeiro devemos verificar se existe algum caractere minúsculo na _string_ e para cada caractere minúsculo encontrado decrementaremos _32_.

```c
if (str[i] >= 'a' && str[i] <= 'z')
{
    str[i] -= 32;
}
```

> ***Obs.:*** Se você nao entendeu porque decrementei _32_ do caractere, sugiro verificar a tabela ASCII novamente, e se continuar em dúvida, a internet está a sua diposição.
