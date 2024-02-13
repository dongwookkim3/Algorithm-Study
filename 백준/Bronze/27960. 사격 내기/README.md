# [Bronze III] 사격 내기 - 27960 

[문제 링크](https://www.acmicpc.net/problem/27960) 

### 성능 요약

메모리: 2208 KB, 시간: 0 ms

### 분류

비트마스킹, 수학

### 제출 일자

2024년 2월 14일 02:25:09

### 문제 설명

<p>A, B, C는 올해에도 예비군 훈련을 받으러 간다. 이번 예비군 훈련 과정 중에는 영점 사격이 있으며, 10개의 과녁 각각에 점수를 매겨 맞춘 과녁 점수의 총합을 측정한다. 과녁을 맞혔을 때, 과녁별로 각각 1점 / 2점 / 4점 / 8점 / 16점 / 32점 / 64점 / 128점 / 256점 / 512점을 얻는다. 과녁을 맞히지 않으면 해당 점수를 얻을 수 없으며, 각 과녁은 사람별로 최대 한 번만 맞힐 수 있다.</p>

<p>A, B와 C는 영점 사격 점수를 가지고 훈련 이후에 먹을 저녁 내기를 했다. A와 B는 각자 자신들의 총합 사격 점수를 공유했지만, C는 저녁 내기의 상황을 더 쫄깃하게 하고 싶었던지 점수를 공유하지 않고 아래와 같은 말을 했다.</p>

<p><strong>"난 너희 둘 중 한 명만 맞힌 표적은 다 맞혔는데, 너희 둘 다 못 맞히거나 둘 다 맞힌 것은 전부 안 맞혔어."</strong></p>

<p>A와 B는 이 말만으로는 도저히 C의 총합 점수를 알 수가 없어서 몰래 여러분에게 도움을 요청했다. C의 점수를 구해 A와 B를 도와주자!</p>

### 입력 

 <p>첫 번째 줄에 A와 B의 영점 사격 총합 점수인 정수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.153em; margin-left: -0.032em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-msub space="2"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em; margin-left: -0.032em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>S</mi><mi>A</mi></msub><mo>,</mo><msub><mi>S</mi><mi>B</mi></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$ S_A, S_B $</span></mjx-container> <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msub space="4"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.153em; margin-left: -0.032em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-msub space="2"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em; margin-left: -0.032em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c33"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>0</mn><mo>≤</mo><msub><mi>S</mi><mi>A</mi></msub><mo>,</mo><msub><mi>S</mi><mi>B</mi></msub><mo>≤</mo><mn>1</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>023</mn><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$ (0 \leq S_A, S_B \leq 1\,023) $</span></mjx-container>가 주어진다. A와 B의 점수를 과녁의 점수 합으로 나타낼 수 없는 경우는 주어지지 않는다.</p>

### 출력 

 <p>C의 점수를 출력한다.</p>

