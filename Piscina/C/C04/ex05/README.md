# Exercício 05: ft_atoi_base

Crie uma função que converta a parte inicial de uma base do tipo  `string` para um número de tipo `int`.

A função deve ser exatamente igual a `ft_atoi`.

Se houver algum argumento inválido a função deve retornar _0_. Exemplo de argumentos inválidos:

- a base está vazia
- a base contém caractes repetidos
- a base contém + ou -

Ela deve ser prototipada dessa forma:

```c
int ft_atoi_base(char *str, char *base);
```

**Entregar arquivos:** ft_atoi_base.c<br>
**Funções permitidas:** Nenhuma

---

Se o outro exercício era um conversor de decimal para uma base específica, esse é um conversor de uma base específica para decimal.

Esse exercício tem a junção da função `ft_atoi` com a função `ft_putnbr_base`.

Basicamente, eliminaremos os espaços e contaremos os sinais como na função `ft_atoi` e checaremos a base como na função `ft_putnbr_base`.

Por fim, faremos a conversão do número, verificando cada caractere se ele está presente na base.

```c
	while (*str != '\0')
	{
		i = 0;
		while (*(base + i) != '\0')
		{
			if (*(base + i) == *str)
			{
				*nb *= *bs;
				*nb += i;
				break ;
			}
			i++;
		}
		if (*(base + i) != *str++)
			return ;
	}
```

Essa função calculará cada caractere da base até que encontre um caractere diferente, ou o nulo.
