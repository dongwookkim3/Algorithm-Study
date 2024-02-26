# [Bronze III] Фигурки - 29029 

[문제 링크](https://www.acmicpc.net/problem/29029) 

### 성능 요약

메모리: 2268 KB, 시간: 4 ms

### 분류

그리디 알고리즘, 구현

### 제출 일자

2024년 2월 26일 20:00:29

### 문제 설명

<p>Нолик опять попал в неприятности! На этот раз он умудрился переворошить коллекцию фигурок Дим Димыча. Дим Димыч очень трепетно относится к этим фигуркам, поэтому, если он увидит их в таком беспорядке, он очень расстроится. Симка решила быстро все исправить.</p>

<p>После того, как Нолик поиграл с фигурками, каждая из них стояла на полке и была направлена в одном из четырех направлений: на сервер, на юг, на запад или на восток. Чтобы хоть как-то исправить ситуацию, Симка решила перевернуть некоторые фигурки так, чтобы в итоге все они были направлены в одну сторону. За одну секунду Симка может поменять направление одной из фигурок. Помогите Симке определить, за какое минимальное время она может добиться того, чтобы все фигурки были направлены в одну сторону.</p>

### 입력 

 <p>В первой строке входных данных дано число <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><msup><mn>10</mn><mn>5</mn></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le n \le 10^5$</span></mjx-container>) --- количество фигурок на полке. Во второй строке дана последовательность символов <<N>>, <<S>>, <<W>>, <<E>> длинны <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> --- направления фигурок.</p>

### 출력 

 <p>Выведите минимальное время, за которое Симка может справится со своей задачей.</p>

