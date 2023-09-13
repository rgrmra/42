# Exercício 04: MAC

Crie um executável que exiba os endereços MAC da sua máquina seguidos de uma quebra de linha.



##### Comando: [ifconfig](https://man7.org/linux/man-pages/man8/ifconfig.8.html)

O comando `ifconfig` exibe as informações de rede da sua máquina, como o ip, endereço MAC. Se desejar exibir todos, basta utilizar a _flag_ `-a`, mas para o exercício não será necessário.



O comando `ifconfig` nos retorna muitas informações, e desejamos apenas o endereço MAC. Para isso precisaremos limitar o que receberemos, utilizando um comando auxiliar, o `grep`.



##### Comando: [grep](https://man7.org/linux/man-pages/man1/grep.1.html)

O comando `grep` exibe somente as linhas que se encaixam no padrão desejado. Em conjunto com o nosso comando `ifconfig`, nós utilizaremos o `grep` para pegar todas as linhas que contenham a informação "ether", que nada mais é do que a abreviação da palavra _ethernet_.

```shell
ifconfig | grep 'ether'
```



##### Comando: [awk](https://man7.org/linux/man-pages/man1/awk.1p.html)

O comando `awk` encontra padrões e processa linguagem. É um comando robusto, mas desejamos utilizar apenas uma pequena parte dele.
O comando `awk` tem uma particularidade interessante de dividir uma _string_ em campos. Se quisermos o primeiro campo, utilizamos o **$1**, se for o segundo, utilizamos o **$2**. Logo, para imprimir o segundo campo que desejamos, basta utilizar o `print`.

```shell
awk '{print$2}
```



Por fim, unir tudo numa mesma linha com o _pipe_.

```shell
ifconfig | grep 'ehter' | awk '{print$2}'
```
