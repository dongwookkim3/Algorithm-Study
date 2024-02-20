# [Bronze II] 시간복잡도를 배운 도도 - 24510 

[문제 링크](https://www.acmicpc.net/problem/24510) 

### 성능 요약

메모리: 2024 KB, 시간: 60 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 20일 23:03:47

### 문제 설명

<p>도도는 이번 신촌캠프에서 시간복잡도의 개념에 대해 배웠다. 하지만 듣다가 졸려서 자버린 결과 오개념을 가져 버렸는데, 바로 반복문의 개수로만 시간복잡도를 판단한다는 것이다. </p>

<p>시간복잡도를 판단하기 위해 도도는 같은 줄에 몇 개의 반복문이 있는지 궁금해졌다. 도도가 반복문으로 생각하는 코드는 <span style="color:#e74c3c;"><code>for</code></span>, <span style="color:#e74c3c;"><code>while</code></span> 이다. </p>

<p>도도를 위해 같은 줄에 있는 반복문의 최대 개수를 구하는 프로그램을 작성해보자.</p>

### 입력 

 <p>첫째 줄에 코드의 줄 개수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D436 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D436 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>C</mi><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><mi>C</mi><mo>≤</mo><mn>100</mn><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$C (1 \leq C \leq 100)$</span></mjx-container>가 주어진다.</p>

<p>둘째 줄부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D436 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>C</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$C$</span></mjx-container>개의 줄에 걸쳐 코드가 입력된다. 입력으로 주어지는 코드는 모두 알파벳 소문자이다. 각 줄은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>10</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$10\,000$</span></mjx-container>자를 넘지 않는다.</p>

### 출력 

 <p>첫째 줄에 같은 줄에 있는 반복문의 최대 개수를 출력한다.</p>

