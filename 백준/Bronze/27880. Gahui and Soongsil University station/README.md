# [Bronze IV] Gahui and Soongsil University station - 27880 

[문제 링크](https://www.acmicpc.net/problem/27880) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학, 문자열

### 제출 일자

2024년 2월 20일 23:47:08

### 문제 설명

<p>Soongsil University Station is famous as the deepest station on Seoul Subway Line 7. This station is so deep that the platform is on the <code>B6</code>. Gahui was surprised that she did not reach the platform after more than five minutes from the exit. Gahui wants to know how deep Soongsil University station is. <strong>Find the depth</strong> of the Soongsil University station. </p>

<p>Depth is the <strong>vertical distance from the exit to the platform.</strong></p>

### 입력 

 <table class="table table-bordered table-center-50">
	<tbody>
		<tr>
			<td style="text-align: center;">line</td>
			<td style="text-align: center;">{<code>floor1</code>}</td>
			<td style="text-align: center;">{<code>floor2</code>}</td>
		</tr>
		<tr>
			<td style="text-align: center;">1</td>
			<td style="text-align: center;">F1</td>
			<td style="text-align: center;">B1</td>
		</tr>
		<tr>
			<td style="text-align: center;">2</td>
			<td style="text-align: center;">B1</td>
			<td style="text-align: center;">B2</td>
		</tr>
		<tr>
			<td style="text-align: center;">3</td>
			<td style="text-align: center;">B2</td>
			<td style="text-align: center;">B5</td>
		</tr>
		<tr>
			<td style="text-align: center;">4</td>
			<td style="text-align: center;">B5</td>
			<td style="text-align: center;">B6</td>
		</tr>
	</tbody>
</table>

<p style="text-align: center;"><strong>[Table 1] Description of the given input</strong></p>

<p>For every two adjacent floors ordered by depth, the information is given on a line as follows:</p>

<ul>
	<li><code>Stair</code> <code>x</code>

	<ul>
		<li>If you go down <code>x</code> stairs from the {<code>floor1</code>} floor, you will reach the {<code>floor2</code>} floor.</li>
	</ul>
	</li>
	<li><code>Es</code> <code>x</code>
	<ul>
		<li>If you go down the escalator with <code>x</code> steps from the {<code>floor1</code>} floor, you will reach the {<code>floor2</code>} floor.</li>
	</ul>
	</li>
</ul>

### 출력 

 <p>Print the answer in <code>cm</code>. If the answer is <code>5096cm</code>, print <code>5096</code>.</p>

