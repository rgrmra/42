# Exercício 05: Can you create it?

Crie um arquivo contendo somente _42_ e NADA mais. Seu nome deve ser "\?$\*'MaRViN'\*$\?".

Exemplo:

```text
%> ls -lRa *MaRV* | cat -e
-rw---xr--  1 75355 32015   2   Oct 2   12:21   "\?$*'MaRViN'*$?\"$
%>
```



Antes de qualquer coisa, já te informo que será impossível criar esse arquivo por métodos normais, alguns dos caracteres exigidos para o nome do arquivo são utilizados pelo _shell_ o que nos impede de utilizarmos como nomes de arquivos. Então, o que precisamos fazer é utilizar o caractere de escape, a contra barra.

Assim se quisermos utilizar as aspas duplas digitamos **\\"** e não somente as **\"**. E será assim para todos os outros caracteres que são utilizados pelo sistema.

```shell
echo 42 > \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
```



Com o arquivo criado e já com o _42_ dentro do arquivo, precisamos, agora, truncar o arquivo. Se observarmos o arquivo com o comando `ls -l` verificaremos que o arquivo possui _3 bytes_, mas devemos deixar somente _2 bytes_.

Isso ocorre, pois, sempre fica um espaço ao final do arquivo editado. E para resolver isso, utilizaremos o comando `truncate`.



##### Comando: [truncate](https://man7.org/linux/man-pages/man1/truncate.1.html)

O comando `truncate` comprime ou expande o tamanho de um arquivo para um determinado tamanho. Com a _flag_ `-s` definimos o tamanho em _bytes_ que desejamos que o arquivo possua.

```shell
truncate -s 2 \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
```



> ***Obs.:*** Não sei se precisa modificar as permissões do arquivo como foi feito nos exercícios da _Shell00_, eu acabei por modificar, não custa tentar.
