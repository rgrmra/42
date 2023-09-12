# Exercício 06: gitignore

Escreva um _shell script_ que retorne todos os arquivos existentes e ignorados pelo seu repositório _Git_.



##### Comando: [git ls-files](https://man7.org/linux/man-pages/man1/git-ls-files.1.html)

O comando `git ls-files` mostra as informações sobre os arquivos no seu repositório git. A _flag_ `--others` exibe outros arquivos e com a _flag_ `--ignored` exibe apenas os arquivos ignorados. E a _flag_ `--exclude-standard` adiciona as exclusões padrão do _Git_.

```bash
#!/bin/bash
git ls-files --others i --exclude-standard
```

Não esqueça de dar permissão para o arquivo com o comando `chmod`.
