# [Bronze III] Double Password - 24606 

[문제 링크](https://www.acmicpc.net/problem/24606) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

조합론, 수학

### 제출 일자

2024년 2월 28일 02:58:17

### 문제 설명

<p>A computer at ICPC headquarters is protected by a four-digit password---in order to log in, you normally need to guess the four digits exactly. However, the programmer who implemented the password check left a backdoor in the computer---there is a second four-digit password. If the programmer enters a four-digit sequence, and for each digit position the digit entered matches at least one of the two passwords in that same position, then that four-digit sequence will log the programmer into the computer.</p>

<p>Given the two passwords, count the number of distinct four-digit sequences that can be entered to log into the computer.</p>

### 입력 

 <p>The input consists of exactly two lines. Each of the two lines contains a string <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi><mjx-texatom texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">|</mo><mi>s</mi><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><mo>=</mo><mn>4</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$|s| = 4$</span></mjx-container>, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D460 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2208"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi><mo>∈</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$s \in$</span></mjx-container> {<code>0-9</code>}<sup>*</sup>). These are the two passwords.</p>

### 출력 

 <p>Output a single integer, which is the number of distinct four-digit sequences that will log the programmer into the system.</p>

