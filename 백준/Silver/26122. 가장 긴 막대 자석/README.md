# [Silver V] 가장 긴 막대 자석 - 26122 

[문제 링크](https://www.acmicpc.net/problem/26122) 

### 성능 요약

메모리: 5848 KB, 시간: 16 ms

### 분류

구현, 문자열

### 제출 일자

2024년 3월 20일 13:36:42

### 문제 설명

<p>막대 자석 문자열은 문자 <code>N</code>과 <code>S</code>로만 구성되면서 다음과 같은 조건을 만족하는 문자열이다: 막대 자석 문자열에 등장하는 <code>N</code>의 개수와 <code>S</code>의 개수는 동일하며, 문자열의 앞쪽 절반을 구성하는 문자는 모두 <code>N</code>이거나 모두 <code>S</code>이다. 예를 들어, <code>NS</code>, <code>NNSS</code>, <code>SSSNNN</code> 등은 막대 자석 문자열이지만, <code>SNS</code>, <code>NNNSS</code>, <code>NSNS</code> 등은 막대 자석 문자열이 아니다.</p>

<p>윤이는 문자 <code>N</code>과 <code>S</code>로 구성된 문자열을 가지고 있다. 윤이는 이 문자열의 부분 문자열 중에서 가장 긴 막대 자석 문자열을 찾고자 한다. 부분 문자열이란 문자열의 연속된 일부를 의미한다. 윤이가 주어진 문자열의 부분 문자열 중에서 찾을 수 있는 가장 긴 막대 자석 문자열의 길이는 얼마인지 구하시오.</p>

### 입력 

 <p>첫 번째 줄에 문자열의 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$K$</span></mjx-container>가 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c33"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mtext class="mjx-n"><mjx-c class="mjx-cA0"></mjx-c></mjx-mtext><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>K</mi><mo>≤</mo><mn>300</mn><mtext> </mtext><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1\leq K\leq 300\ 000$</span></mjx-container>)</p>

<p>두 번째 줄에 문자 <code>N</code>과 <code>S</code>로만 구성된 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$K$</span></mjx-container>의 문자열이 주어진다.</p>

### 출력 

 <p>주어진 문자열의 부분 문자열 중에서 가장 긴 막대 자석 문자열의 길이를 출력한다. 만약 막대 자석 문자열을 찾을 수 없다면, 대신 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0$</span></mjx-container>을 출력한다.</p>

