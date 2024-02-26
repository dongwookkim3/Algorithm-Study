# [Bronze III] Just a Joystick - 30314 

[문제 링크](https://www.acmicpc.net/problem/30314) 

### 성능 요약

메모리: 2268 KB, 시간: 8 ms

### 분류

그리디 알고리즘, 문자열

### 제출 일자

2024년 2월 26일 20:04:08

### 문제 설명

<p>You just got the high score when playing <em>Battlezone Asteroids Pac-Centipede</em> on an arcade machine! On the "Game Over" screen, you can enter your initials, one letter at a time. This seems to be a very modern arcade machine: whereas the original arcade machines only allowed entering three initials, this machine allows many more. However, to select the letters, you have access to just a joystick. For every letter, you need to move the joystick up or down to cycle between the letters (wrapping around between '<code>Z</code>' and '<code>A</code>', in both directions) and move it to the right to move to the next letter.</p>

<p>It appears that the initials of the previous high-score winner are still filled in. Entering your own initials is going to take some time, and you want to know exactly how long. How many times do you need to you move the joystick up or down to enter your own initials, if you do so in the most efficient way?</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>One line with an integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><msup><mn>10</mn><mn>5</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \leq n \leq 10^5$</span></mjx-container>), the number of letters available to enter your initials.</li>
	<li>One line with a string of length <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container>, the initials of the previous high-score winner.</li>
	<li>One line with a string of length <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container>, the initials that you want to enter.</li>
</ul>

<p>The strings only consist of English uppercase letters (<code>A-Z</code>).</p>

### 출력 

 <p>Output the minimum number of times you should move the joystick up or down to enter your own initials. This does <em>not</em> include the number of times that you need to move the joystick to the right.</p>

