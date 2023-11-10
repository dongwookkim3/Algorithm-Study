# [Bronze V] Loteria Falha - 30664 

[문제 링크](https://www.acmicpc.net/problem/30664) 

### 성능 요약

메모리: 108080 KB, 시간: 116 ms

### 분류

임의 정밀도 / 큰 수 연산, 사칙연산, 수학

### 제출 일자

2023년 11월 10일 20:57:25

### 문제 설명

<p>Muita gente sonha em ganhar dinheiro fácil. Algumas pessoas tentam fazer isso através da loteria. Compram jogos como as “raspadinhas” e bilhetes de loteria aguardando sorteios multimilionários.</p>

<p>Gilmar, um rapaz muito malandro, decidiu usar seus conhecimentos matemáticos para tentar aumentar suas chances nestes jogos de sorte. Ele comprou vários bilhetes de um mesmo tipo de raspadinha e analisou as cartelas, até que percebeu uma propriedade muito curiosa: cada raspadinha tinha impresso um número identificador do cartão que permitia a ele ter noção das chances de ser premiado.</p>

<p>De cada 10 cartões que comprou na banca, aproximadamente 1 ou 2 vinham premiados de alguma forma: no mínimo uma outra raspadinha grátis ele ganhava, ou um prêmio simbólico em dinheiro. Quando aplicou seu método para escolher que cartões comprar, percebeu que de cada 10 cartões, em média 8 continham algum prêmio!</p>

<p>Como a tarefa é muito cansativa para ser feita manualmente, ele pensou que você, amigo de longa data, poderia ajudá-lo com um programa que, dado o número identificador do cartão, diz se ele faz parte do conjunto de cartões com maior chance de prêmio. O truque é procurar os cartões cujo número identificador seja múltiplo de 42. Você está apto a ajudar seu colega nesta empreitada?</p>

### 입력 

 <p>A entrada é composta por vários casos de teste, um por linha.</p>

<p>Cada caso de teste contém um inteiro n de até 30 dígitos decimais.</p>

<p>A entrada termina com n = 0. Este caso não deverá ser processado.</p>

### 출력 

 <p>Para cada caso de teste haverá uma linha na saída. Caso o número identificador do cartão seja um múltiplo de 42, imprima “PREMIADO”. Caso contrário, imprima “TENTE NOVAMENTE”.</p>

