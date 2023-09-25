# Exercício 00: ft_strcmp

Reproduza o funcionamento da função [strcmp](https://www.man7.org/linux/man-pages/man3/strcmp.3.html).

Ela deve ser prototipada dessa forma:

```c
int ft_strcmp(char *s1, char *s2);
```

**Enviar arquivos:** ft_strcmp.c<br>
**Funções permitidas:** Nenhuma

---

A função `strcmp` compara cada caractere entre duas `strings`, se houver um caractere diferente ela retorna um valor maior ou menor que _0_, se não houver caracteres diferentes ela retorna _0_.

```c
while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
    i++;
}
return (s1[i] - s2[i]);
```
