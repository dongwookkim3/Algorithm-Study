# [Bronze III] 빅데이터? 정보보호! - 26264 

[문제 링크](https://www.acmicpc.net/problem/26264) 

### 성능 요약

메모리: 3476 KB, 시간: 28 ms

### 분류

문자열

### 제출 일자

2024년 2월 22일 00:52:13

### 문제 설명

<p>서울사이버대학교 빅데이터·정보보호학과는 빅데이터에 관심이 있는 학생들과 정보보호에 관심이 있는 학생들이 골고루 섞여 있는 학과이다.</p>

<p>빅데이터·정보보호학과에서 수업을 하던 노교수는 학생들이 빅데이터와 정보보호 중 어느 분야에 더 관심이 많은지 궁금해졌다. 그래서 학생들을 만날 때마다 항상 이를 물어보고 답을 bigdata 혹은 security로 구분하여 메모장에 적어두었는데, 실수로 띄어쓰기와 개행이 전혀 없는 상태로 기록해두었다.</p>

<p>이대로는 학생들이 빅데이터와 정보보호 중 어느 분야에 더 관심이 많은지를 알아낼 수 없기 때문에, 당신에게 분석을 의뢰했다. 물어본 학생의 수와 답이 주어질 때, 결과를 출력하자.</p>

### 입력 

 <p>첫 번째 줄에 물어본 학생의 수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>100</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le N \le 100\,000$</span></mjx-container>)</p>

<p>두 번째 줄에 메모장에 적힌 답들이 한 줄의 문자열로 주어진다. 문자열은 <code>bigdata</code> 또는 <code>security</code>로만 구성되어 있으며, 띄어쓰기 등의 다른 문자가 포함되어 있지 않다.</p>

### 출력 

 <p>첫 번째 줄에 정보보호 분야보다 빅데이터 분야에 관심이 있는 학생이 더 많으면 "<code>bigdata?</code>"를, 빅데이터 분야보다 정보보호 분야에 관심이 있는 학생이 더 많으면 "<code>security!</code>"를, 같으면 "<code>bigdata? security!</code>"를 따옴표 없이 출력한다.</p>

