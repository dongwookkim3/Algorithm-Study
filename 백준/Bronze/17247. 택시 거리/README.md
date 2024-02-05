# [Bronze I] 택시 거리 - 17247 

[문제 링크](https://www.acmicpc.net/problem/17247) 

### 성능 요약

메모리: 5812 KB, 시간: 132 ms

### 분류

사칙연산, 기하학, 수학

### 제출 일자

2024년 2월 6일 03:51:19

### 문제 설명

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/2151cf07-1489-4434-84e0-6f265e62be77/-/preview/"></p>

<p>택시 거리는 바둑판 모양의 도로망을 가진 도시에서 점 A에서 B까지의 최단 거리를 구할 경우 도로를 따라서만 가는 가장 짧은 거리를 뜻한다.</p>

<p>위의 사진에서는 빨간색 선이 택시거리이다. 즉, 점 A의 좌표가 (x<sub>1</sub>, y<sub>1</sub>)이고 점 B의 좌표를 (x<sub>2</sub>, y<sub>2</sub>)라고 했을 때, 두 장소 사이의 택시 거리 D는 다음과 같다.</p>

<p><mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D437 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-texatom space="4" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-msub space="3"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-texatom texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-texatom space="3" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-msub space="3"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>D</mi><mo>=</mo><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><msub><mi>x</mi><mn>2</mn></msub><mo>−</mo><msub><mi>x</mi><mn>1</mn></msub><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><mo>+</mo><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><msub><mi>y</mi><mn>2</mn></msub><mo>−</mo><msub><mi>y</mi><mn>1</mn></msub><mo stretchy="false">|</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(D = |x_2 - x_1| + |y_2 - y_1|\)</span> </mjx-container></p>

<p>인접한 0과 0, 0과 1, 1과 1 사이의 거리를 1이라고 할 때, 두 1 사이의 거리를 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫 줄엔 문자열의 높이 N과 가로 M이 주어진다. (2 ≤ N, M ≤ 1,000) 이다.</p>

<p>두 번째 줄부터 M개의 숫자 0또는 1이 예제 입력과 같이 N개의 줄에 걸쳐 입력된다.</p>

<p>1는 항상 두 개만 입력된다.</p>

### 출력 

 <p>주어진 숫자들에서 1과 1사이의 택시 거리를 구하시오.</p>

