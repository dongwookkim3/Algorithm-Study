# [Bronze IV] Speed fines are not fine! - 6763 

[문제 링크](https://www.acmicpc.net/problem/6763) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

구현

### 문제 설명

<p>Many communities now have “radar” signs that tell drivers what their speed is, in the hope that they will slow down.</p>

<p>You will output a message for a “radar” sign. The message will display information to a driver based on his/her speed according to the following table:</p>

<table class="table table-bordered" style="width:30%">
	<tbody>
		<tr>
			<td style="text-align:center">km/h over the limit</td>
			<td style="text-align:center">Fine</td>
		</tr>
		<tr>
			<td style="text-align:center">1 to 20</td>
			<td style="text-align:center">$100</td>
		</tr>
		<tr>
			<td style="text-align:center">21 to 30</td>
			<td style="text-align:center">$270</td>
		</tr>
		<tr>
			<td style="text-align:center">31 or above</td>
			<td style="text-align:center">$500</td>
		</tr>
	</tbody>
</table>

### 입력 

 <p>The input will be two integers. The first line of input will be speed limit. The second line of input will be the recorded speed of the car.</p>

### 출력 

 <p>If the driver is not speeding, the output should be:</p>

<p><code>Congratulations, you are within the speed limit! </code></p>

<p>If the driver is speeding, the output should be:</p>

<p><code>You are speeding and your fine is $F. </code></p>

<p>where F is the amount of the fine as described in the table above.</p>

