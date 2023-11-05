# [Bronze II] 이제는 더 이상 물러날 곳이 없다 - 30455 

[문제 링크](https://www.acmicpc.net/problem/30455) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

애드 혹, 게임 이론

### 제출 일자

2023년 11월 5일 16:33:10

### 문제 설명

<p>건덕이와 건구스는 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 칸이 가로로 놓인 전장에서 승부를 겨루고 있다. 처음에는 가장 왼쪽 칸에 건덕이가, 가장 오른쪽 칸에 건구스가 자리 잡고 있으며, 승자는 아래 규칙에 따라 정해진다.</p>

<ol>
	<li>자신의 차례에 아래 두 가지 행동 중 하나를 <strong>반드시</strong> 수행해야 한다. 전장을 벗어나도록 이동할 수 없으며, 행동을 마친 뒤에는 상대방의 차례가 된다.

	<ul>
		<li>좌우로 인접한 칸으로 이동한다.</li>
		<li>좌우로 인접한 칸에 상대방이 있다면, 상대방을 공격한다.</li>
	</ul>
	</li>
	<li>상대방을 공격하는 경우 승리한다.</li>
</ol>

<p>전장의 크기가 주어졌을 때, 누가 승리하는지 판단하자. 둘 다 최선을 다해서 승부를 겨루며, 처음 행동을 수행하는 사람은 건덕이다.</p>

### 입력 

 <p>전장에 놓인 칸의 개수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mrow><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-mrow></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mrow data-mjx-texclass="INNER"><mo data-mjx-texclass="OPEN">(</mo><mn>3</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>200</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn><mo data-mjx-texclass="CLOSE">)</mo></mrow></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$\left( 3\leq N\leq 200\, 000 \right)$</span> </mjx-container></p>

### 출력 

 <p>건덕이가 이길 경우 <span style="color:#e74c3c;"><code>Duck</code></span>을, 건구스가 이길 경우 <span style="color:#e74c3c;"><code>Goose</code></span>를 출력한다.</p>

