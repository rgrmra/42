# Exercício 05: ft_print_comb

Crie um função que exiba a combinação de três digitos diferentes em ordem ascendente.

Esse é o output esperado:

```text
%> ./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ... 789%>
```

987 não conta porque 789 já foi encontrado.

999 não conta porque o digito 9 se repete.

Ela deve ser prototipada dessa forma:

```c
void    ft_print_comb(void);
```

**Enviar arquivos:** ft_print_comb.c

**Funções permitidas:** write



Primeiramente precisamos entender o exercício para compreender quais números serão impressos. Quando falamos de três digitos diferentes sem repeti-los estamos na verdade limitando nossa busca.

Se não podemos repetir nenhum número como por exemplo 111, 222, etc. Tão pouco podemos repetir números como 001, 002, etc. Então sabemos que precisamos de três números distintos um dos outros.

Nesse caso, o primeiro número será o 012, pois começa com os menores números sem repeti-los.

Se o 012 é o primeiro número, sabemos que suas outras combinações não serão permitidas. Logo: 021, 102, 120, 201 e 210 não serão imprimidos.

E isso é muito importante, porque agora sabemos que o número da centena tem que ser menor que o da dezena e a dezena tem que ser menor que a unidade.

```c
if (hundreds < tens && tens < ones)
    ft_print_number(ones, tens, hundreds);
```



A primeira vez que fiz esse exercício utilizei três _whiles_ um para cada número. É claro que funciona, mas não é necessário. A partir do momento que sabemos que devemos incrementar _1_ na unidade, e que quando a unidade for maior que _9_ aumentamos _1_ na dezena e assim repetimos até acrescentarmos _1_ a centena.

```c
if (ones > 9)
{
    ones = tens;
    tens++;
}
if (tens > 9)
{
    tens = hundreds;
    hundreds++;
}
```



Por fim, basta imprimir os número com a função **ft_print_number**.
