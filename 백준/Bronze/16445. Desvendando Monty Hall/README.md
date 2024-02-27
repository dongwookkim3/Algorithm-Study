# [Bronze III] Desvendando Monty Hall - 16445 

[문제 링크](https://www.acmicpc.net/problem/16445) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 27일 21:26:38

### 문제 설명

<p>No palco de um programa de auditório há três portas fechadas: porta 1, porta 2 e porta 3. Atrás de uma dessas portas há um carro, atrás de cada uma das outras duas portas há um bode. A produção do programa sorteia aleatoriamente a porta onde vai estar o carro, sem trapaça. Somente o apresentador do programa sabe onde está o carro. Ele pede para o jogador escolher uma das portas. Veja que agora, como só há um carro, atrás de pelo menos uma entre as duas portas que o jogador não escolheu, tem que haver um bode!</p>

<p>Portanto, o apresentador sempre pode fazer o seguinte: entre as duas portas que o jogador não escolheu, ele abre uma que tenha um bode, de modo que o jogador e os espectadores possam ver o bode. O apresentador, agora, pergunta ao jogador: “você quer trocar sua porta pela outra porta que ainda está fechada?”. E vantajoso trocar ou não? O jogador quer ficar com a porta que tem o carro, ´ claro!</p>

<p>Paulinho viu uma demonstração rigorosa de que a probabilidade de o carro estar atrás da porta que o jogador escolheu inicialmente é 1/3 e a probabilidade de o carro estar atrás da outra porta, que ainda está fechada e que o jogador não escolheu inicialmente, é 2/3 e, portanto, a troca é vantajosa. Paulinho não se conforma, sua intuição lhe diz que tanto faz, que a probabilidade é 1/2 para ambas as portas ainda fechadas...</p>

<p>Neste problema, para acabar com a dúvida do Paulinho, vamos simular esse jogo milhares de vezes e contar quantas vezes o jogador ganhou o carro. Vamos supor que:</p>

<ul>
	<li>O jogador sempre escolhe inicialmente a porta 1;</li>
	<li>O jogador sempre troca de porta, depois que o apresentador revela um bode abrindo uma das duas portas que não foram escolhidas inicialmente.</li>
</ul>

<p>Nessas condições, em um jogo, dado o número da porta que contém o carro, veja que podemos saber exatamente se o jogador vai ganhar ou não o carro.</p>

### 입력 

 <p>A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 10<sup>4</sup>), indicando o número de jogos na simulação. Cada uma das N linhas seguintes contém um inteiro: 1, 2 ou 3; representando o número da porta que contém o carro naquele jogo.</p>

### 출력 

 <p>Seu programa deve produzir uma única linha, contendo um inteiro representando o número de vezes que o jogador ganhou o carro nessa simulação, supondo que ele sempre escolhe inicialmente a porta 1 e sempre troca de porta depois que o apresentador revela um bode abrindo uma das duas portas que não foram escolhidas inicialmente.</p>

