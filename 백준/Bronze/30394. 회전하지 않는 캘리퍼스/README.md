# [Bronze III] 회전하지 않는 캘리퍼스 - 30394 

[문제 링크](https://www.acmicpc.net/problem/30394) 

### 성능 요약

메모리: 2020 KB, 시간: 4 ms

### 분류

구현

### 제출 일자

2024년 2월 23일 18:03:50

### 문제 설명

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/b6495243-656a-41d7-9e50-ff180cbb4a3b/-/preview/"></p>

<p>버니어 캘리퍼스(Vernier Calipers)는 길이나 높이, 너비 등 기계류 또는 사람의 신체 부위 치수를 정밀하게 측정하는 자의 일종이다. 자 부분과 날 부분으로 구성되어 있으며, 두 날 부분 사이에 물건을 끼워 너비를 잰다. 재휘는 알고리즘 수업 시간에 기하학 알고리즘 중 볼록 껍질에서 사용되는 '회전하는 캘리퍼스' 알고리즘을 배웠다. 그런데 알고리즘을 있는 그대로 받아들인 재휘는 문득 캘리퍼스를 껍질 주위로 돌리는 것이 매우 어려운 일이라는 사실을 깨달았다. 그래서 재휘는 좀 더 쉬운 회전하지 않는 캘리퍼스 알고리즘을 고안해냈다.</p>

<p>회전하지 않는 캘리퍼스 알고리즘은 다음과 같다. 먼저, 한 평면 위의 점 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개가 주어진다. 그다음 캘리퍼스를 측정하고자 하는 점의 집합과 동일한 평면에 놓고 자 부분이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>y</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$y$</span></mjx-container>축과 평행하도록 세운다(날 부분이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>x</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$x$</span></mjx-container>축과 평행하게 한다). 이후 캘리퍼스의 날을 충분히 크게 벌리고 조금씩 좁혀가며 날이 점에 닿게 되면 멈춘다. 이때, 캘리퍼스의 크기는 충분히 크고, 캘리퍼스가 측정한 거리 값이 실행 결과가 된다.</p>

<p>이제 회전하지 않는 캘리퍼스 알고리즘을 구현해 보자.</p>

### 입력 

 <p>첫 번째 줄에 점의 수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다.</p>

<p>두 번째 줄부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 줄에 점들의 좌표 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-msub space="2"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>x</mi><mi>i</mi></msub><mo>,</mo><msub><mi>y</mi><mi>i</mi></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$x_i, y_i$</span></mjx-container>가 공백으로 구분되어 주어진다. 점들의 좌표값은 모두 정수이다.</p>

### 출력 

 <p>캘리퍼스로 측정한 거리 값을 출력한다.<span style="display: none;"> </span></p>

