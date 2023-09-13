# Exercício 01: print_groups

Crie um executável que exiba a lista de grupos do qual o usuário na variável de ambiente _FT_USER_ é membro, separado por vírgulas e sem espaço.

***O que é uma variável de ambiente?*** Uma variável de ambiente é um atalho para determinada informação, o _PATH_ por exemplo contém o local exato de todas as aplicações que desejamos que estejam presentes no sistema.



O exercício pede que tenhamos um determinado login na variável de ambiente, porém, não temos nenhuma variável de ambiente com o nome _FT_USER_ e nenhum login definido nela.

##### Comando: [export](https://www.man7.org/linux/man-pages/man1/export.1p.html)
Então, primeiramente, devemos criar a variável de ambiente com o login desejado. Para isso, usaremos o comando `export`.

```shell
export FT_USER=bocal
```

Assim, quando chamamos a variável de ambiente _FT_USER_ obteremos como retorno o valor: bocal.

```shell
echo $FT_USER
```

##### Comando: [id](https://man7.org/linux/man-pages/man1/id.1.html)

O comando `id` imprime as informações do usuário e do grupos. Com a _flag_ `-G` imprimimos todos os grupos a qual o usuário faz parte, e com a _flag_ `-n` imprimimos o nome do grupo ao invés do número do grupo.

```shell
id -Gn $FT_USER
```



Assim obtemos todos os grupos ao qual o usuário faz parte, porém, ainda precisamos eliminar os espaços e substituí-los por vírgulas e eliminar a quebra de linha do final.




##### Comnado: [tr](https://man7.org/linux/man-pages/man1/tr.1.html)

O comando `tr` substituí um caractere por outro, esse ato é chamado de tradução. Para isso basta utilizar o comando `tr` informando o caractere que será substituído pelo que deseja. E se utilizarmos a _flag_ `-d` informamos que desejamos deletar um caractere e não fazer a tradução.

```shell
tr ' ' ','
```

```shell
tr -d '\n'
```



Com tudo isso, temos os comando necessários para criar o nosso executável, mas ainda precisamos juntar tudo num único comando. E para isso utilizaremos o **|** (_pipe_) a barrinha vertical. O _pipe_ é um separador de comandos que executará um comando após o outro, utilizando as mesmas informações.

```shell
id -Gn $FT-USER | tr ' ' ',' | tr -d '\n'
```



> ***Obs.:*** Não esqueça de dar permissão de execução em todos os seus executáveis com o comando `chmod`.
