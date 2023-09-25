# Exercício 01: ft_strncmp

Reproduza o funcionamento da função [strncmp](https://www.man7.org/linux/man-pages/man3/strcmp.3.html).

Ela deve ser prototipada dessa forma:

```c
int ft_strncmp(char *s1, char *s2, unsigned int n);
```

**Entregar arquivos:** ft_strncmp.c<br>
**Funções permitidas:** Nenhuma

---

Essa função possui o mesmo comportamento da função anterior, a diferença é que agora possuímos um limitador de caracteres a serem verificados. Então, faremos a verificação até que o contador atinja o limite.

```c
while (s1[i] = '\0' && s2[i] = '\0' && i < n)
{
    if (s1[i] != s2[i])
    {
        break ;
    }
    i++;
}
```

Se encontrar algum caractere diferente, nós quebramos o _loop_ e retornamos o valor da verificação. 

```c
if (i == n)
{
    return (0);
}
return (s1[i] - s2[i]);
```
