# [Bronze III] 팰린드롬 소떡소떡 - 25630 

[문제 링크](https://www.acmicpc.net/problem/25630) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 15일 14:45:56

### 문제 설명

<p>소떡소떡은 기다란 꼬치에 소세지와 떡을 끼운 음식이다. 편의상 소떡소떡을 알파벳 <code>s</code>와 <code>t</code>로만 구성된 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>의 문자열로 생각하자. 알파벳 <code>s</code>는 소세지를, <code>t</code>는 떡을 의미한다.</p>

<p style="text-align: center;"><img alt="" src=""></p>

<p>위 그림은 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c37"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>7</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$7$</span></mjx-container>인 소떡소떡의 예시이다. 유진이는 소떡소떡을 먹기 전에 소떡소떡을 <em>팰린드롬 소떡소떡</em>으로 만들려고 한다. 팰린드롬이란, 앞에서부터 읽었을 때와 뒤에서부터 읽었을 때가 같은 문자열을 말한다. 예를 들어 <code>sts</code>, <code>tsst</code>, <code>tt</code>는 팰린드롬이다.</p>

<p style="text-align: center;"><img alt="" src=""></p>

<p>유진이는 특별한 마법을 사용해서 꼬치에 꽂힌 소세지 하나를 떡으로 바꾸거나, 반대로 떡 하나를 소세지로 바꿀 수 있다. 위 그림은 마법을 한 번 사용해서 떡 하나를 소세지로 바꾼 그림이다.</p>

<p style="text-align: center;"><img alt="" src=""></p>

<p>위 그림은 마법을 한 번 더 사용해서 떡 하나를 소세지로 바꾼 그림이다. 이제 이 소떡소떡은 <em>팰린드롬 소떡소떡</em>이 되었다.</p>

<p>유진이가 먹으려고 하는 소떡소떡이 주어질 때, 이 소떡소떡을 <em>팰린드롬 소떡소떡</em>으로 만들기 위해서는 마법을 최소 몇 번 사용해야 할까?</p>

### 입력 

 <p>첫째 줄에 소떡소떡의 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>100</mn><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N(1 \le N \le 100)$</span></mjx-container>이 주어진다.</p>

<p>둘째 줄에 소떡소떡을 의미하는 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>의 문자열이 주어진다. 이 문자열은 알파벳 <code>s</code>와 <code>t</code>로만 구성되어 있다.</p>

### 출력 

 <p>소떡소떡을 <em>팰린드롬 소떡소떡</em>으로 만들기 위해서 마법을 최소 몇 번 사용해야 하는지 출력한다.</p>

