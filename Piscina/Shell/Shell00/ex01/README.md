# Exercício 01: testShell00

> /[42](https://github.com/rgrmra/42)/[Piscina](https://github.com/rgrmra/42/Piscina)/[Shell](https:/github.com/rgrmra/42/Piscina/Shell)/[Shell00](https://github.com/rgrmra/42/Piscina/Shell/Shell00)/ex01

Crie um arquivo de nome testShell00 e que contenha o seguinte output quando o comando `ls -l` é executado:

```shell
%> ls -l
total   1
-r--r-xr-x  1   XX  XX  40 Jun  1   23:42   testShell00
%>
```

Após finalizar os passos anteriores, compacte o arquivo com o comando `tar`, para gerar o arquivo que será enviado.



##### Comandos:

Os comandos a serem conhecidos nesse exercício são: `ls`, `chmod`, `touch` e o `tar`.



##### Comando: [ls](https://man7.org/linux/man-pages/man1/ls.1.html)

O comando `ls` lista todo o conteúdo de um diretório. A _flag_ `-l` mostra uma lista mais detalhada de todos os arquivos e diretórios, mostrando as permissões, os links, o usuário e o grupo, quantos _bytes_ há no arquivo, a data de modificação e, por fim, o nome do arquivo. A _flag_ `-a` mostra todos os arquivos, incluindo os ocultos.

```shell
ls -l
ls -la
```



##### Comando: [chmod](https://man7.org./linux/man-pages/man1/chmod.1.html)

O comando `chmod` modifica as permissões de um arquivo ou diretório. Há três modos de permissões e três níveis de permissões. O primeiro nível é o do usuário, o segundo é o do grupo e o terceiro é dos outros. As permissões são de leitura **r** (_read_), de escrita **w** (_write_) e de execução **x** (_execute_).
Então temos oito modos de permissão no total, sendo eles:

| número |         permissões         | binário | código |
| :----: | :------------------------: | :-----: | :----: |
|   7    | leitura, escrita, execução |   111   |  rwx   |
|   6    |     leitura e escrita      |   110   |  rw-   |
|   5    |     leitura e execução     |   101   |  r-x   |
|   4    |          leitura           |   100   |  r--   |
|   3    |     escrita e execução     |   011   |  -wx   |
|   2    |          escrita           |   010   |  -w-   |
|   1    |          execução          |   001   |  --x   |
|   0    |          nenhuma           |   000   |  ---   |

E podemos utilizar o comando `chmod` para modificar as permissões do arquivo:

```shell
chmod 455 testShell00
```



##### Comando: [touch](https://man7.org/linux/man-pages/man1/touch.1.html)

 O comando `touch` altera os metadados de tempo de um arquivo/diretório.
