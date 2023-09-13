# Exercício 06: Skip

Crie um executável que imprima uma linha e pule a outra a partir da primeira linha.




Conheço dois modos para realizar esse exercício, os dois com o comando `awk`, mas é provável que existam outros métodos.



Podemos fazer com o `print` e o `getline`. Desse modo, imprimimos a primeira linha e pegamos a segunda, mas nunca fazemos nada com ela. Imprimindo somente as linhas impares.

```shell
ls -l | awk '{print;getline}'
```



Podemos fazer com o `NR` (abreviação de _Number of Records_) utilizando uma operação matemática para encontrar o resto da divisão de `NR` por _2_. Também, imprimindo somente as linhas impares.

```shell
ls -l | awk 'NR % 2 == 1'
```



Fica a seu critério utilizar o que desejar.
