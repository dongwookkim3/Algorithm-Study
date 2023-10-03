# [Bronze IV] Tri-du - 13597 

[문제 링크](https://www.acmicpc.net/problem/13597) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

구현

### 문제 설명

<p>Tri-du é um jogo de cartas derivado do popular jogo de Truco. O jogo utiliza um baralho normal de 52 cartas, com treze cartas de cada naipe, mas os naipes são ignorados. Apenas o valor das cartas,considerados como inteiros de 1 a 13, são utilizados.</p>

<p>No jogo, cada jogador recebe três cartas. As regras são simples:</p>

<ul>
	<li>Um trio (três cartas de mesmo valor) ganha de uma dupla (duas cartas de mesmo valor).</li>
	<li>Um trio formado por cartas de maior valor ganha de um trio formado por cartas de menor valor.</li>
	<li>Uma dupla formada por cartas de maior valor ganha de uma dupla formada por cartas de menor valor.</li>
</ul>

<p>Note que o jogo pode não ter ganhador em muitas situações; nesses casos, as cartas distribuídas são devolvidas ao baralho, que é embaralhado e uma nova partida é iniciada</p>

<p>Um jogador já recebeu duas das cartas que deve receber, e conhece seus valores. Sua tarefa é escrever um programa para determinar qual o valor da terceira carta que maximiza a probabilidade de esse jogador ganhar o jogo.</p>

### 입력 

 <p>A entrada consiste de uma ´unica linha que contém dois inteiros, A (1 ≤ A ≤ 13) e B (1 ≤ B ≤ 13) indicando os valores das duas primeiras cartas recebidas.</p>

### 출력 

 <p>Seu programa deve produzir uma única linha com um inteiro representando o valor da carta que maximiza a probabilidade de o jogador ganhar a partida.</p>

