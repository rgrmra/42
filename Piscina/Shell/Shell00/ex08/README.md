# Exercício 08: clean

Crie um arquivo de nome _clean_ e coloque dentro dele a linha de comando necessário para procurar no diretório atual e em todos os subdiretórios e que delete todos os arquivos que terminem com **~** ou comecem e terminem com **#**.

##### Comando: [find](https://man7.org/linux/man-pages/man1/find.1.html)

O comando `find` procura arquivos em uma hierarquia de diretórios. A _flag_ `-type` define o tipo de arquivo que desejamos, `f` para arquivos (_files_) `d` para diretórios (_directories_) e `l` para _symbolic links_.

```shell
find . -type f
```

Então procuramos em todos os subdiretórios a partir do diretório atual definido pelo **.** (ponto), também desejamos encontra com a _flag_ `-name` os arquivos que contenham o nome que desejamos e com a _flag_ `-or` (ou) para explicitar que queremos deletar um ou outro.

```shell
find . -type f -name '*~' -or -name '#*#'
```

Ao final queremos imprimir o nome do arquivo e depois deletá-lo. Para isso utilizaremos a _flag_ `-print` para imprimir o nome do arquivo e a _flag_ `-delete` para deletar o arquivo.

```shell
find . -type f -name '*~' -print -delete -or '#*#' -print -delete
```

Acabamos por encontrar o comando que satisfaz todas as condições pedidas, porém nos repetirmos a cada condição escrevendo o `-print` e `-delete` duas vezes. Devemos simplificar, imagine se houvesse outras condições de nomes, seria necessário repetir várias vezes o `-print` e o  `-delete` para cada condição, então, simplifiquemos isso com barras:

```shell
find . -type f \( -name '*~' -or -name '#*#' \) -print -delete
```

O comando entre barras define a condição do nome que queremos encontrar e ao final imprimimos e deletamos o(s) arquivo(s), sem precisar nos repetirmos.
