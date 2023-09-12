# Exercício 09: Ilusões, não truques, Michael...

Crie um arquivo mágico de nome _ft_magic_ que deverá ser corretamente formatado para detectar os arquivos de tipo **42 file** e constituído por _42_ no 42° byte.



***Primeiramente, o que vem a ser um arquivo mágico?*** Basicamente um arquivo mágico é um arquivo utilizado pelo `file` para verificar se um arquivo tem um determinado tipo. Por exemplo, para definir se um arquivo de extensão _.php_ é realmente um arquivo de tipo _php_, o arquivo mágico verifica certas condições que satisfaçam aquelas condições. No caso do _php_ é o comando `<?php` no início do arquivo.

Com isso em mente, vamos ao que importa.



##### Comando: [file](https://man7.org/linux/man-pages/man1/file.1.html)

O comando `file` determina o tipo do arquivo. Com a _flag_ `-C` compilamos o arquivo que desejamos e com a _flag_ `-m` definimos que será um arquivo mágico.

```shell
file -C -m ft_magic
```

Esse comando nos retornará um arquivo _.mgc_ que utilizaremos para verificar se o arquivo que queremos verificar é realmente um arquivo de tipo **42 file**.



Para testar basta utilizar o comando `file` com a _flag_ `-m` indicando o arquivo mágico compilado (_.mgc_) e o arquivo que deseja verificar.

```shell
file -m ft_magic.mgc arquivo
```

Se o comando `file` encontrar as condições de satisfaçam o arquivo mágico, ele retornará a descrição do tipo do arquivo como um arquivo **42 file**.



***Mas como criamos o arquivo _ft_magic_?*** Para criar o arquivo _ft_magic_ definiremos o _byte_ de início, o tipo que desejamos encontrar, o valor que procuramos e a frase de retorno que será imprimida se a condição for verdadeira.

1. O _byte_ de início será o 42º _byte_, ou seja, o _byte_ _41_. Lembre-se, computadores contam a partir do _0_, não do _1_.
2. O tipo que queremos será uma _string_.
3. O valor a ser encontrado será o próprio _42_.
4. A frase de retorno será _42 file_.

Com tudo isso, devemos criar o arquivo _ft_magic_ separando cada condição por <kbd>Tab</kbd>.

```text
41  string  42  42 file
```
