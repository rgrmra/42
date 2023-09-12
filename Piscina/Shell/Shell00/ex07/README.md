# Exercício 07: diff

Crie o arquivo _b_ conforme:

```text
%> cat -e a
STARWARS$
Episode IV, A NEW HOPE It is a period of civil war.$
$
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.$
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,$
an armored space station with enough power to destroy an entire planet.$
$
Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...$
$
```

```shell
%> diff a b > sw.diff
```

Não há muitas informações sobre esse exercício, tudo o que é pedido é você crie o arquivo _b_ conforme o exemplo apresentado, porém, a maioria das pessoas acredita que o arquivo _b_ deve ser escrito conforme o exemplo do comando `cat -e a`, o que estaria totalmente errado. O arquivo _b_ deve ser criado conforme o comando `diff a b > sw.diff`.



Nós é apresentado dois comandos nesse exercício, o `diff` e o `patch`. O comando `diff` compara a diferença entre dois arquivos linha por linha e o comando `patch` aplica a diferença de um arquivo _diff_ para a versão original.

Isso significa que ao utilizar o comando `diff a b > sw.diff` nós geraramos um arquivo _sw.diff_ que contém as diferenças entre o arquiva _a_ e o arquivo _b_. E se perdermos o arquivo _b_ e quisermos restaurá-lo, basta criar uma cópia do arquivo _a_ e aplicar o comando `patch` ao arquivo, logo, faremos uma copia com o comando `cp`.

```shell
cp a b
```

Agora resturamos o arquivo _b_ com o comando `patch`.

```shell
patch b sw.diff
```

E esse é o arquivo que você deve entregar, porém, entregá-lo não fará você compreender o exercício. Então, seguimos.

Se abrirmos o arquivo _b_ restaurado, veremos o seguinte:

```text
Episode V, A NEW H0PE It is a period of civil war
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. 
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.


Pursued by the Empire's sinister agents,
Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..




```

E se quisermos testar o exercício, basta criar novamente o arquivo _diff_.

```shell
diff a b > sw2.diff
```

E para testar esse novo arquivo, basta utilizar o comando `diff` nos dois arquivos _diff_ com o comando:

```shell
diff sw.diff sw2.diff > sw3.diff
```

Que criará um arquivo _diff_ vazio, demonstrando que os arquivos comparados não possuem diferença alguma.



##### Informações interessantes:

A _Moulinette_ testa os _outputs_ dos seus arquivos/funções/programas com o comando `diff`, vale muito a pena ter ciência desse comando e como ele funciona, e obvio, como restaurar o arquivo com o comando `patch`.
