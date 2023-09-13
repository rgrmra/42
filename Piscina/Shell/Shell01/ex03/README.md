# Exercício 03: count_files

Crie um executável que exiba o número de arquivos e diretórios, incluindo o diretório atual e os subdiretórios.



Novamente utilizaremos o comando `find` com a _flag_ `-type`, porém, dessa vez não precisamos da _flag_ `-name`, pois, desejamos encontrar todos os arquivos.

```shell
find . -type f,d
```

O comando find irá exibir todos os arquivos e diretórios, mas desejamos exibir somente a contagem de arquivos e diretórios. Para isso, utilizaremos o comando `wc`.



# Comando: [wc](https://man7.org/linux/man-pages/man1/wc.1.html)

O comando `wc` é um contador, que conta linhas, palavras, caracteres e _bytes_. No nosso caso desejamos contar somente o número de linhas, pois, a saída do comando `find` nos retornará cada arquivo ou diretório em linhas. E para isso, utilizaremos a _flag_ `-l`.

```shell
wc -l
```

Agora, precisamos juntar tudo com o _pipe_.

```shell
find . -type f,d | wc -l
```
