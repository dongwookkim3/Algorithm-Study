# [Bronze III] 찬반투표 - 27736 

[문제 링크](https://www.acmicpc.net/problem/27736) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 3월 17일 00:18:43

### 문제 설명

<p>중앙대학교에서 재학생을 대상으로 하는 어떤 찬반투표가 치러졌다. 모든 재학생은 각자 찬성이나 반대, 혹은 기권 중 하나로 투표에 응답하였다.</p>

<p>해당 투표에서 찬성이 반대보다 많으면 투표가 통과된다. 반대가 찬성보다 많거나, 반대와 찬성의 수가 동일하다면 투표는 통과되지 않는다. 단, 기권한 사람이 재학생의 절반 이상이라면 찬성과 반대의 수와 관계없이 항상 투표는 무효 처리된다.</p>

<p>재학생들의 투표 내역을 입력받아 찬반투표의 결과를 출력하는 프로그램을 구현하시오.</p>

### 입력 

 <p>첫 번째 줄에 중앙대학교 재학생의 수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다.</p>

<p>두 번째 줄에 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 투표 내역이 공백으로 구분되어 주어진다. 각각 찬성은 <span style="color:#e74c3c;"><code>1</code></span>, 반대는 <span style="color:#e74c3c;"><code>-1</code></span>, 기권은 <span style="color:#e74c3c;"><code>0</code></span>으로 주어진다.</p>

### 출력 

 <p>투표가 통과되었으면 <span style="color:#e74c3c;"><code>APPROVED</code></span>, 통과되지 않았으면 <span style="color:#e74c3c;"><code>REJECTED</code></span>, 무효 처리되었으면 <span style="color:#e74c3c;"><code>INVALID</code></span>를 출력한다.</p>

