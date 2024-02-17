# [Bronze IV] Chili Peppers - 28249 

[문제 링크](https://www.acmicpc.net/problem/28249) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학, 문자열

### 제출 일자

2024년 2월 18일 05:56:12

### 문제 설명

<p>Ron is cooking chili using an assortment of peppers.</p>

<p>The spiciness of a pepper is measured in Scoville Heat Units (SHU). Ron's chili is currently not spicy at all, but each time Ron adds a pepper, the total spiciness of the chili increases by the SHU value of that pepper.</p>

<p>The SHU values of the peppers available to Ron are shown in the following table:</p>

<table class="table table-bordered table-center-30 th-center td-center">
	<tbody>
		<tr>
			<th>Pepper Name</th>
			<th>Scolville Heat Units</th>
		</tr>
		<tr>
			<td>Poblano</td>
			<td>1500</td>
		</tr>
		<tr>
			<td>Mirasol</td>
			<td>6000</td>
		</tr>
		<tr>
			<td>Serrano</td>
			<td>15500</td>
		</tr>
		<tr>
			<td>Cayenne</td>
			<td>40000</td>
		</tr>
		<tr>
			<td>Thai</td>
			<td>75000</td>
		</tr>
		<tr>
			<td>Habanero</td>
			<td>125000</td>
		</tr>
	</tbody>
</table>

<p>Your job is to determine the total spiciness of Ron's chili after he has finished adding peppers.</p>

### 입력 

 <p>The first line of input will contain a positive integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>, representing the number of peppers Ron adds to his chili. The next <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> lines will each contain the name of a pepper Ron has added. Each pepper name will exactly match a name that appears in the table above. Note that more than one pepper of the same name can be added.</p>

### 출력 

 <p>The output will consist of a positive integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D447 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>T</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$T$</span></mjx-container>, representing the total spiciness of Ron's chili.</p>

