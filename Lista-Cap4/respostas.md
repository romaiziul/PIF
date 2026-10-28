# Lista de Exercícios — Capítulo 4: Comandos de Decisão

Respostas teóricas baseadas nos conceitos de seleção apresentados no capítulo sobre comandos de decisão de Victorine Viviane Mizrahi. Os trechos de código usam a sintaxe de C e explicitam o efeito das condições, dos operadores lógicos e do fluxo entre `case`.

## Questão 01 — Condições e atribuição

**a)** `if (x = 0)` executa uma **atribuição**: guarda `0` em `x`. O valor da própria expressão de atribuição é `0`, que é interpretado como falso; portanto, o bloco associado ao `if` não é executado. Já `x == 0` compara os valores e não altera `x`.

**b)** Em C, uma condição escalar é falsa quando seu valor é igual a zero e verdadeira quando é diferente de zero. Isso vale para inteiros e para valores reais (`float`/`double`); por exemplo, `0`, `0.0` e `-0.0` são falsos, enquanto `-2` e `0.5` são verdadeiros.

**c)** Em `if (x = -5)`, a atribuição guarda `-5` em `x`. O resultado da expressão é `-5`, diferente de zero, então a condição é verdadeira e o bloco é executado. O padrão C permite usar uma expressão escalar como condição e considera verdadeiro qualquer valor não zero.

## Questão 02 — Associação de `else`

**a)** A saída é `Opção B`. Como `x > 10` é verdadeiro, a execução chega ao `if (y > 10)`. Essa condição é falsa (`y` vale 5), então seu `else` correspondente imprime `Opção B`.

**b)** Pela regra de associação de C, um `else` sem par explícito é associado ao `if` mais próximo que ainda não tenha um `else`. A indentação não altera essa regra.

**c)** Para fazer `Opção B` ocorrer somente quando `x <= 10`, delimite o primeiro ramo com chaves:

```c
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

## Questão 03 — Operador condicional `?:`

**a)** A expressão `condição ? valor_se_verdadeiro : valor_se_falso` testa `media >= 7.0`. Se for verdadeira, atribui `'A'` a `situacao`; se for falsa, atribui `'R'`. Para `media = 6.8`, fica armazenado `'R'`.

**b)** Equivalente com `if-else`:

```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** Não é uma substituição geral para qualquer `if-else`. O operador ternário é uma **expressão** que escolhe entre dois valores; cada alternativa deve produzir um resultado compatível. Um `if-else` pode executar vários comandos, controlar operações sem valor de retorno ou conter fluxos mais complexos. Nesses casos, blocos `if-else` são mais adequados.

## Questão 04 — `switch` e fall-through

**a)** A saída exata é:

```text
Prata
Ouro
```

A expressão `codigo` vale 2, então a execução começa em `case 2`. Como não há `break` depois de `printf("Prata")`, ela continua para o próximo rótulo (`case 3`) e imprime `Ouro`. O `break` após `Ouro` encerra o `switch`.

**b)** `break` encerra a execução do `switch` (ou do laço mais interno, quando está em um laço). Sem ele, a execução prossegue para os comandos do próximo `case`; esse comportamento é chamado *fall-through*.

**c)** A expressão de `switch` deve ter tipo inteiro ou enumerado (por exemplo, `int`, `char` ou `enum`; tipos inteiros menores sofrem promoção). `float` e `double` não são permitidos diretamente, pois os rótulos `case` precisam ser constantes inteiras.

## Questão 05 — Curto-circuito

**a)** A saída é `a = 0, b = 5, c = 8`. O lado esquerdo `a != 0` é falso; em `&&`, isso já determina o resultado, então `++b` não é avaliado. O `else` subtrai 2 de `c`.

**b)** Em `A && B`, se `A` for falso, `B` não precisa ser avaliado. Em `A || B`, se `A` for verdadeiro, `B` não precisa ser avaliado. Essa avaliação da segunda parte somente quando ela pode alterar o resultado é o curto-circuito.

**c)** Na condição `a == 0 || ++b > 5`, `a == 0` é verdadeiro; portanto, `++b` não é executado. O bloco do `if` soma 10 a `c`: ao final, `b = 5` e `c = 20`.

## Questão 06 — `if` independentes e cadeia `else-if`

**a)** Com `idade = 65`, são impressas, nessa ordem, `Idoso`, `Adulto` e `Jovem`. As três condições independentes (`idade >= 60`, `idade >= 18` e `idade >= 12`) são verdadeiras. O `else` pertence somente ao `if (idade >= 12)` mais próximo, cuja condição também é verdadeira, então `Criança` não aparece.

**b)** Cada `if` independente é testado separadamente, logo mais de um bloco pode ser executado. Em uma cadeia `if` / `else if` / `else`, as condições são verificadas em sequência e apenas o primeiro ramo verdadeiro é executado; se nenhum for verdadeiro, executa-se `else`.

**c)** Uma classificação exclusiva pode ser escrita assim:

```c
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```

## Referência

MIZRAHI, Victorine Viviane. *Treinamento em linguagem C*. 2. ed. São Paulo: Pearson Prentice Hall, 2008. Capítulo 4: Comandos de decisão.
