# [Silver II] N번째 큰 수 - 2075 

[문제 링크](https://www.acmicpc.net/problem/2075) 

### 성능 요약

메모리: 10688 KB, 시간: 420 ms

### 분류

자료 구조, 우선순위 큐, 정렬

### 제출 일자

2023년 11월 16일 09:34:37

### 문제 설명

<p>N×N의 표에 수 N<sup>2</sup>개 채워져 있다. 채워진 수에는 한 가지 특징이 있는데, 모든 수는 자신의 한 칸 위에 있는 수보다 크다는 것이다. N=5일 때의 예를 보자.</p>

<table class="table table-bordered" style="width:15%">
	<tbody>
		<tr>
			<td style="width:3%">12</td>
			<td style="width:3%">7</td>
			<td style="width:3%">9</td>
			<td style="width:3%">15</td>
			<td style="width:3%">5</td>
		</tr>
		<tr>
			<td>13</td>
			<td>8</td>
			<td>11</td>
			<td>19</td>
			<td>6</td>
		</tr>
		<tr>
			<td>21</td>
			<td>10</td>
			<td>26</td>
			<td>31</td>
			<td>16</td>
		</tr>
		<tr>
			<td>48</td>
			<td>14</td>
			<td>28</td>
			<td>35</td>
			<td>25</td>
		</tr>
		<tr>
			<td>52</td>
			<td>20</td>
			<td>32</td>
			<td>41</td>
			<td>49</td>
		</tr>
	</tbody>
</table>

<p>이러한 표가 주어졌을 때, N번째 큰 수를 찾는 프로그램을 작성하시오. 표에 채워진 수는 모두 다르다.</p>

### 입력 

 <p>첫째 줄에 N(1 ≤ N ≤ 1,500)이 주어진다. 다음 N개의 줄에는 각 줄마다 N개의 수가 주어진다. 표에 적힌 수는 -10억보다 크거나 같고, 10억보다 작거나 같은 정수이다.</p>

### 출력 

 <p>첫째 줄에 N번째 큰 수를 출력한다.</p>

