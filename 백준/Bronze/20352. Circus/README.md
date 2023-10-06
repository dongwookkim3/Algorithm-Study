# [Bronze IV] Circus - 20352 

[문제 링크](https://www.acmicpc.net/problem/20352) 

### 성능 요약

메모리: 2032 KB, 시간: 0 ms

### 분류

기하학, 수학

### 문제 설명

<p>In the modern world, the spotlight has shifted entirely from live shows to televised recordings.  Well, not entirely... One small troupe of indomitable entertainers still holds out and puts on regular circus performances.</p>

<p>The shows are extremely popular. Streaming media services nearby have caught on and, of course tried to cash in by opening their own circuses. However, they still need good acts to pull in crowds---and the natural solution has been to sneak into the big top to poach ideas and talent.</p>

<p>This can not go on. The ringmaster, inspired by his distant cousins from a small village in Armorica, proposes to build a circular wall around the big top to prevent unauthorised entry.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/392054f5-15e7-4ca1-99ea-9bf639b1d104/-/preview/" style="width: 504px; height: 211px;"></p>

<p style="text-align: center;">Figure C.1: Diagram of the indomitable circus, fencing, and the surrounding encampments of Flixium, Fundibulum, Maximillian, and Hulum. This image was adapted from an <a href="https://en.wikipedia.org/wiki/File:Goseck_circle,_Germany_4900_-_4700_BC.jpg">illustration</a> of the Goseck circle by Kenny Arne Lang Antonsen.</p>

<p>To build this wall, enough fencing will be needed to cover a length equal to the perimeter of the circular tent. How many metres will you need to obtain?</p>

### 입력 

 <p>The input consists of:</p>

<ul>
	<li>One line with an integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>a</mi><mo>≤</mo><msup><mn>10</mn><mrow data-mjx-texclass="ORD"><mn>18</mn></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le a \le 10^{18}$</span></mjx-container>), the area of the circus tent in square metres.</li>
</ul>

### 출력 

 <p>Output the total length of fence needed for the circus palisade wall, in metres. Your answer should have an absolute or relative error of at most <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msup><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-texatom size="s" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c36"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msup><mn>10</mn><mrow data-mjx-texclass="ORD"><mo>−</mo><mn>6</mn></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$10^{-6}$</span></mjx-container>.</p>

