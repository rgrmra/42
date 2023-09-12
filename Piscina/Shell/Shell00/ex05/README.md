# Exercício 05: Git commit

Crie um programa _shell_ que retorne os _id_ dos últimos 5 _commits_ do seu repositório _Git_.

Para acessar os _logs_ do seu _Git_ basta digitar o comando `git log`, porém, obteremos as informações completas do _log_. Para simplificar, basta usar a _flag_ `--format` que possibilita formatar nosso _log_ como desejarmos em conjunto com o `%H` que exibe o _commit hash_ completo. Basta, agora, apenas definir a quantidade que desejmos com a _flag_ `-5`, que limita o números de _commit_ para cinco.

```shell
git log --format='%H' -5
```



Com isso obtemos o comando necessário para exibir o que precisamos. Infelizmente somente isso não fará o arquivo ser um executável. Para isso é necessário criar um arquivo com o cabeçalho `#!/bin/bash` e dar permissões de execução para o arquivo.

```bash
#!/bin/bash
git log --format='%H' -5
```



Para dar permissões utilize o comando `chmod` com a _flag_ `+x` que define permissão total para todos os grupos.

```shell
chmod +x git_commit.sh
```
