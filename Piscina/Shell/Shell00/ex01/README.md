# Exercício 01: testShell00

Crie um arquivo de nome testShell00 e que contenha o seguinte output quando o comando `ls -l` é executado:

```text
%> ls -l
total   1
-r--r-xr-x  1   XX  XX  40 Jun  1   23:42   testShell00
%>
```

Após finalizar os passos anteriores, compacte o arquivo com o comando `tar`, para gerar o arquivo que será enviado.



##### Comandos:

Os comandos a serem conhecidos nesse exercício são: `ls`, `chmod`, `touch` e o `tar`.


##### Tamanho: [ASCII](https://man7.org/linux/man-pages/man7/ascii.7.html)

Antes de verificar qualquer comando, perceba que o arquivo contém 40 _bytes_, isso significa que há até 40 _bytes_ de informações dentro do arquivo. Dê uma olhada na tabela ASCII, ela te auxiliará a colocar as informações necessárias dentro do arquivo.



##### Comando: [ls](https://man7.org/linux/man-pages/man1/ls.1.html)

O comando `ls` lista todo o conteúdo de um diretório. A _flag_ `-l` mostra uma lista mais detalhada de todos os arquivos e diretórios, mostrando as permissões, os links, o usuário e o grupo, quantos _bytes_ há no arquivo, a data de modificação e, por fim, o nome do arquivo. A _flag_ `-a` mostra todos os arquivos, incluindo os ocultos.

```shell
ls -l
ls -la
```



##### Comando: [touch](https://man7.org/linux/man-pages/man1/touch.1.html)

O comando `touch` altera os metadados de tempo de um arquivo/diretório. A _flag_ `-a` altera a data de acesso, a _flag_ `-m` altera a data de modificação e a _flag_ `-t` define a data no formato _timestamp_ **[[CC]YY]MMDDhhmm[.ss]**.

| timestamp | definição                | tempo |
| :-------: | :----------------------- | :--:  |
|    CC     | primeiros digitos do ano |  20   |
|    YY     | ultimos digitos do ano   |  23   |
|    MM     | mês                      |  06   |
|    DD     | dia                      |  01   |
|    hh     | hora                     |  23   |
|    mm     | minutos                  |  42   |
|    ss     | segundos                 |  00   |

Com isso em mente, basta utilizar o comando:

```shell
touch -amt 202306012342.00 testShell00
```

O comando `stat` mostrará as datas que foram modificadas, porém, perceba que a _change time_ e _birth time_ não serão modificadas. 

```shell
stat testShell00
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



##### Comando: [tar](https://man7.org/linux/man-pages/man1/tar.1.html)

O comando `tar` serve para compactar o(s) arquivo(s) em um único arquivo para envia-los sem que nenhum alteração aconteça com eles. A _flag_ `-c` cria o arquivo tar e a _flag_ `-f` define qual(is) arquivo(s) será(ão) compactado(s).

```shell
tar -cf testShell00.tar testShell00
```

E se quiser descompactar o arquivo basta utilizar a _flag_ `-x` que significa _extract_.

```shell
tar -xf testShell00.tar
```
