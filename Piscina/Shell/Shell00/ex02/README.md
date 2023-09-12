# Exercício 02: Sim, de novo...

Crie os seguintes arquivos e directórios. Faça o que for necessário para que quando usar o comando `ls -l` a saída seja a seguinte:

```text
%>
total XX
drwx--xr-x  2   XX  XX  XX  Jun 1   20:47   test0
-rwx--xr--  1   XX  XX   4  Jun 1   21:46   test1
dr-x---r--  2   XX  XX  XX  Jun 1   22:45   test2
-r-----r--  2   XX  XX   1  Jun 1   23:43   test3
-rw-r----x  1   XX  XX   2  Jun 1   23:44   test4
-r-----r--  2   XX  XX   1  Jun 1   23:43   test5
lrwxrwxrwx  1   XX  XX   5  Jun 1   22:20   test6 -> test0
```

Assim que finalizar, execute o comando `tar -cf exo2.tar` para criar o arquivo que será enviado.

> ***Obs.:*** esse exercício é semelhante ao anterior, porém, há duas coisas que merecem nossa atenção. A primeira é o _symbolic link_ do _test6_ apontando para o diretório _test0_. E a outra é o _hard link_ do arquivo _test5_ ao _test3_.

##### Comando: [ln](https://man7.org/linux/man-pages/man1/ls.1.html)

Para criar links basta utilizar o comando `ln`. A _flag_ `-s` classificará o link como simbolico.

```shell
ln -s test6 test0
```

Por outro lado, para criar _hard links_ basta utilizar o comando `ln` sem _flags_.

```shell
ln test5 test3
```
