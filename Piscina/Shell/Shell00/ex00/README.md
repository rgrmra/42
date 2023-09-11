# Exercício 00: Z

> /[42](https://github.com/rgrmra/42)/[Piscina](https://github.com/rgrmra/42/Piscina)/[Shell](https:/github.com/rgrmra/42/Piscina/Shell)/[Shell00](https://github.com/rgrmra/42/Piscina/Shell/Shell00)/ex00

Crie um arquivo de nome _z_ que retorne _Z_ seguido de uma nova linha quando utiliza-se o comando: `cat`.

Há alguns modos para se criar um arquivo através do _Shell_. Os dois melhores são utilizando o `touch` e o `echo`.



##### Utilizando o touch: #####

```shell
touch z
```

O `touch` só criará o arquivo, para inserir o _Z_ dentro do arquivo ainda será necessário utilizar um editor de texto.
> ***Obs.:*** o comando `touch` tem por padrão modificar os metadados de tempo de um arquivo, porém, como causa, se o arquivo não existir, ele acaba o criando.



##### Utilizando o echo: #####

```shell
echo Z > z
```

O `echo`, por outro lado, já nos fornece a possibilidade de criar um arquivo e inserir alguma informação dentro do arquivo. Sendo `echo` o comando, o _primeiro parâmetro_ a informação que irá para dentro do arquivo e o _segundo parâmetro_ (que vem depois do sinal de maior) o nome do arquivo.



##### Testando o exercício:

Para testar o exercício, basta digitar o comando `cat` seguido do nome do arquivo. Há também a possibilidade de testar com a _flag_ `-e` que mostrará com um **$** o final do arquivo, demonstrando que não há nenhuma outra informação além do que desejamos.

```shell
cat z
cat z -e
```
