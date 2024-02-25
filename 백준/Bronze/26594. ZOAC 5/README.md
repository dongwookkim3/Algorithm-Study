# [Bronze III] ZOAC 5 - 26594 

[문제 링크](https://www.acmicpc.net/problem/26594) 

### 성능 요약

메모리: 4916 KB, 시간: 36 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 25일 18:43:15

### 문제 설명

<p>2022년 12월, 다섯 번째로 개최된 ZOAC의 오프닝을 맡은 성우는 누구보다 화려하게 ZOAC를 알리려 한다.</p>

<p>매번 새로운 방식으로 문자열을 보여주던 성우는 이번 대회에서는 평범하게 앞 글자부터 하나씩 보여주기로 했다. 성우는 문자를 입력하기 위해 키보드로 손을 뻗은 순간, 실수로 마시던 소주를 키보드에 쏟아버리고 말았다... 알코올에 취한 키보드는 어떤 자판을 한 번만 눌러도 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>번 누른 것처럼 인식을 하게 되어버렸다!</p>

<p>소중한 키보드를 고치기 위해 고장 접수를 하는 성우는 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>을 정확하게 알아야 한다. 눈물이 앞을 가려 모니터를 제대로 볼 수 없는 성우를 위해 대신 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>을 구해주도록 하자!</p>

### 입력 

 <p>첫째 줄에 성우가 고장 난 키보드로 입력한 문자열이 주어진다.</p>

<p>문자열의 길이는 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1\,000\,000$</span></mjx-container>보다 크지 않고, 빈 문자열은 주어지지 않는다. </p>

<p>성우는 알파벳 대문자만 입력하고, 어떤 알파벳도 두 번 이상 입력하지 않는다.</p>

<p>성우는 독수리 타법이므로 한 번에 하나의 자판만 누를 수 있다.</p>

### 출력 

 <p>첫째 줄에 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>을 출력한다.</p>

