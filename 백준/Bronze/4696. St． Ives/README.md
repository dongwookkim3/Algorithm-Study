# [Bronze IV] St. Ives - 4696 

[문제 링크](https://www.acmicpc.net/problem/4696) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

사칙연산, 수학

### 문제 설명

<p>Robert the chapman (a medieval traveling merchant) made regular trips between his home village and St. Ives to peddle his cloth, ribbons, and needles. On one such trip he encountered a curious procession:</p>

<p style="margin-left: 40px;">As I was traveling to St. Ives<br>
I met a man with seven wives.<br>
Every wife had seven sacks.<br>
Every sack had seven cats.<br>
Every cat had seven kits.<br>
Kits, cats, sacks, wives -<br>
How many were traveling to St. Ives?</p>

<p>The answer to this classic ancient riddle is ’one’. Robert was traveling to St. Ives. The others were all traveling away from St. Ives. However, if we prefer to ask the question of how many were traveling from St. Ives, we can add up:</p>

<ul>
	<li>1 man</li>
	<li>7 wives</li>
	<li>7*7 sacks</li>
	<li>7*7*7 cats</li>
	<li>7*7*7*7 kittens</li>
</ul>

<p>for a total of 2801.</p>

<p>On his next trip to St. Ives, Robert met the same man, this time accompanied by 3 wives, each<br>
with 3 sacks, and so on. Becoming curious about what seemed to be a bizarre village ritual of some kind, Robert kept track of how many traveled with the man each time he encountered him during the subsequent year.</p>

<p>On average, what was the size of the processions that Robert encounter on his trips to St. Ives?</p>

### 입력 

 <p>Input consists of multiple data sets. Each data set consists of a line with a single floating point number number representing the numbers of wives, sacks per wife, cats per sack, and kittens per cat that Robert encountered that year.</p>

<p>End of input is indicated by a value of zero.</p>

### 출력 

 <p>For each data set, print the size of the average procession as a real number presented to 2 decimal points precision.</p>

