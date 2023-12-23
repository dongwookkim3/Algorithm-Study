# [Bronze III] 빅데이터 vs 정보보호 vs 인공지능 - 30957 

[문제 링크](https://www.acmicpc.net/problem/30957) 

### 성능 요약

메모리: 2268 KB, 시간: 4 ms

### 분류

많은 조건 분기, 구현, 문자열

### 제출 일자

2023년 12월 16일 14:03:26

### 문제 설명

<p>서울사이버대학교 빅데이터·정보보호학과는 빅데이터에 관심이 있는 학생들과 정보보호에 관심이 있는 학생들이 골고루 섞여 있는 학과이다. 2024학년도를 맞이하여 서울사이버대학교는 인공지능학과를 새로 만들게 되었다.</p>

<p>빅데이터·정보보호학과와 인공지능학과의 교육과정을 함께 구상하던 노교수와 천교수는 학생들이 빅데이터, 정보보호, 인공지능 중 어느 분야에 더 관심이 많은지 궁금해졌다. 그래서 학생들을 만날 때마다 항상 이를 물어보고 답을 <span style="color:#e74c3c;"><code>B</code></span>, <span style="color:#e74c3c;"><code>S</code></span>, <span style="color:#e74c3c;"><code>A</code></span>로 구분하여 메모장에 적어두었다. (<span style="color:#e74c3c;"><code>B</code></span>는 빅데이터, <span style="color:#e74c3c;"><code>S</code></span>는 정보보호, <span style="color:#e74c3c;"><code>A</code></span>는 인공지능을 의미한다.)</p>

<p>지금 상태로는 한눈에 들어오지 않아 학생들이 빅데이터, 정보보호, 인공지능 중 어느 분야에 더 관심이 많은지를 알아내기 어렵기 때문에, 당신에게 분석을 의뢰했다. 물어본 학생의 수와 답이 주어질 때, 결과를 출력하자.</p>

### 입력 

 <p>첫 번째 줄에 물어본 학생의 수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-script></mjx-msup><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><msup><mn>10</mn><mn>5</mn></msup><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$(1 \le N \le 10^5)$</span> </mjx-container></p>

<p>두 번째 줄에 메모장에 적힌 답들이 한 줄의 문자열로 주어진다. 문자열은 <span style="color:#e74c3c;"><code>B</code></span>, <span style="color:#e74c3c;"><code>S</code></span>, <span style="color:#e74c3c;"><code>A</code></span>로만 구성되어 있다.</p>

### 출력 

 <p>첫 번째 줄에 가장 많은 학생의 관심을 받는 분야의 문자를 출력한다. 만약 가장 많은 학생의 관심을 받는 분야가 2개라면, <span style="color:#e74c3c;"><code>B</code></span>, <span style="color:#e74c3c;"><code>S</code></span>, <span style="color:#e74c3c;"><code>A</code></span>의 순서로 모두 출력한다. 만약 세 분야의 관심이 동일하면, <span style="color:#e74c3c;"><code>SCU</code></span>를 출력한다. (SCU는 Seoul Cyber University의 약자이다.)</p>

