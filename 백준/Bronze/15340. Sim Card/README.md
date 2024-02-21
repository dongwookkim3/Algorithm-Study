# [Bronze III] Sim Card - 15340 

[문제 링크](https://www.acmicpc.net/problem/15340) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 2월 22일 02:50:23

### 문제 설명

<p>There are three mobile operators in Iran. Each operator has different prices for call and data usage, given in the table below. All prices are in Rials:</p>

<table class="table table-bordered" style="width:55%">
	<thead>
		<tr>
			<th>#</th>
			<th>Name</th>
<th>Call (per minute)</th>
<th>Data (per megabyte)</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>1</td>
			<td>ParsTel</td>
			<td>30</td>
			<td>40</td>
		</tr>
		<tr>
			<td>2</td>
			<td>ParsCell</td>
			<td>35</td>
			<td>30</td>
		</tr>
		<tr>
			<td>3</td>
			<td>ParsPhone</td>
			<td>40</td>
			<td>20</td>
		</tr>
	</tbody>
</table>

<p>Some foreign students have arrived Iran to participate in the ACM-ICPC, Tehran Site. They already know how many minutes they will call, and how much Internet they will use. For each student, you want to recommend an operator to minimize the total cost of call usage and data usage for that student.</p>

### 입력 

 <p>Each line of the input contains the information of one student. For each student, there are two positive integers c and d (1 ≤ c, d ≤ 1000) that show the amount of call (in minutes) and data usage (in megabytes) for the student, respectively. The input terminates with “0 0” that should not be processed.</p>

### 출력 

 <p>For each student, print a line containing the minimum total cost of call usage and data usage.</p>

