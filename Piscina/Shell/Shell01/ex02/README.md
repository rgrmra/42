# Exercício 02: find_sh

Crie um executável que encontre todos os arquivos que terminem com '_.sh_' no diretório atual e em todos os outros subdiretórios. E deve exibir somente o nome do arquivo sem a extensão.



##### Comando: [find](https://man7.org/linux/man-pages/man1/find.1.html)

Nós já vimos que para encontrar um arquivo precisamos utilizar o comando `find`, definir qual tipo queremos com a _flag_ `-type` e o que procuramos com a _flag_ `-name`.

```shell
find . -type f -name '*.sh'
```

Agora, executaremos a _flag_ `-execdir` que nos permitirá executar um determinado comando para cada condição que encontrarmos com o comando `find`.



##### Comando: [basename](https://man7.org/linux/man-pages/man1/basename.1.html)

O comando `basename` tem outras funcionalidade, mas a que desejamos aqui é remover o sufixo do arquivo, isso é, sua extensão.

```shell
basename arquivo.sh '.sh'
```



E por fim, juntar tudo em um único comando.

```shell
find . -type f -name '*.sh' -execdir {} '.sh' ';'
```
