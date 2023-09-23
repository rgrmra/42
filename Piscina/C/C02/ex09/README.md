# Exercício 09: ft_strcaptalize

Crie uma função que transforme a primeira letra de cada palavra em Maiúscula e qualquer outra em minúscula.

Ela deve ser prototipada dessa forma:

```c
char    *ft_strcapitalize(char *str);
```

**Entregar arquivos:** ft_strcapitalize<br>
**Funções permitidas:** Nenhuma

Ela deve retornar **str**.

Exemplo:
```text
salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
```
```text
Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
```

---

Primeiramente fazemos uma verificação inicial para saber se o primeiro caractere é uma letra minúscula, se sim, decrementamos _32_.

```c
if (str[0] >= 'a' && str[0] <= 'z')
{
    str[0] -= 32;
}
```

Para evitar muitas condições, o melhor agora é identificar cada caractere maiúsculo e acrescentar _32_ para transformá-lo em minúsculo.

```c
if (str[i] >= 'A' && str[i] <= 'Z')
{
    str[i] += 32;
}
```

Por fim, se o caractere for minúsculo e o caractere anterior não for um alfa-numérico nós decrementamos _32_.

```c
if ((str[i] >= 'a' && str[i] <='z')
    && (str[i - 1] < 'A' || str[i - 1] > 'Z')
    && (str[i - 1] < 'a' || str[i - 1] > 'z')
    && (str[i - 1] < '0' || str[i - 1] > '9'))
{
    str[i] -= 32;
}
```
