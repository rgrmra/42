# Exercício 03: SSH me!

Crie sua prórpia chave SSH do tipo RSA.

A chave SSH RSA traz segurança ao transmitir arquivos pela internet. Ela tem o objetivo de criptografar o conteúdo dos arquivos que você deseja transmitir praa maior segurança.
Ao criar uma chave SSH RSA há duas versões, uma privada e uma pública. A chave pública é a chave que vocÊ irá compartilhar com os outros, para que eles criptografem os arquivos que lhe desejarem enviar. A chave privada é a sua chave pessoal, será com ela que você descriptografará o conteúdo que lhe enviarem.

Tenha ciencia disso, e compartilhe somente sua chave pública.



##### Comando: [ssh-keygen](https://man7.org/linux/man-pages/man1/ssh-keygen.1.html)

O comando `ssh-keygen` cria, gerencia e converte chaves de autenticação. Com a _flag_ `-t` definimos o tipo de criptografia desejamos, e com o flag `-f` definimos o nome da chave a ser criada.

```shell
ssh-keygen -t rsa -f id_rsa_pub
```
