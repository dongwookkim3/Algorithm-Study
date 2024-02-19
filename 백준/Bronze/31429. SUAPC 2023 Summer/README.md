# [Bronze V] SUAPC 2023 Summer - 31429 

[문제 링크](https://www.acmicpc.net/problem/31429) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 19일 22:19:46

### 문제 설명

<p style="text-align: center;"><img alt="" src="https://u.acmicpc.net/ef1e1da0-2b5a-440e-bb47-c6089f26a449/image1.png" style="width: 1000px; height: 423px;"></p>

<p style="text-align: center;">[그림] SUAPC 2023 Summer 스코어보드 (<a href="https://www.acmicpc.net/contest/spotboard/1104">링크</a>)</p>

<p>SUAPC는 신촌지역 5개 대학(서강, 숙명, 연세, 이화, 홍익)의 학부생 및 대학원 1년 차를 대상으로 하는 프로그래밍 대회다. 대회 문제는 서울 리저널의 문제 출제 경향을 따르며 제한 시간 동안 얼마나 많은 문제를 정확하게 풀 수 있는지를 평가하여 순위를 결정한다. 위의 사진은 SUAPC 2023 Summer의 스코어보드다.</p>

<p>문제를 많이 푼 팀이 고순위로 결정되며, 동일 수의 문제를 푼 팀이 다수 있는 경우 푼 문제들의 페널티(= (첫 정답을 제출한 시간) + (첫 정답을 받기 전까지 오답을 제출한 횟수) × 20)의 합이 작은 순으로 순위가 결정된다. 위 사진의 스코어보드상에서 가장 오른쪽에 적힌 수가 각 팀이 푼 문제들의 페널티의 합을 의미한다.</p>

<p>양의 정수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어졌을 때, SUAPC 2023 Summer에서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>등을 한 팀이 푼 문제 수와 푼 문제들의 페널티의 합을 구하여라.</p>

### 입력 

 <p>첫 번째 줄에 양의 정수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>11</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le N \le 11$</span></mjx-container>)</p>

### 출력 

 <p>SUAPC 2023 Summer에서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>등을 한 팀이 푼 문제 수와 푼 문제들의 페널티의 합을 공백으로 구분하여 출력한다.</p>

