# [Bronze III] Speed Limit - 14541 

[문제 링크](https://www.acmicpc.net/problem/14541) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 문제 설명

<p>Basri, Lim and Rama are taking a road trip during their semester break. But the odometer in their car is broken, so they don't know how many miles they have driven. Fortunately, Bill has a working stopwatch, so they can record their speed and the total time they have driven. Unfortunately, their record keeping strategy is a little odd, so they need help computing the total distance driven. You are to write a program to do this computation.</p>

<p>For example, if their log shows</p>

<table class="table table-bordered" style="width:30%">
	<thead>
		<tr>
			<th>Speed (miles/hour)</th>
			<th>Total elapsed time in hours</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>20</td>
			<td>2</td>
		</tr>
		<tr>
			<td>30</td>
			<td>6</td>
		</tr>
		<tr>
			<td>10</td>
			<td>7</td>
		</tr>
	</tbody>
</table>

<p>this means they drove 2 hours at 20 miles per hour, then 6−2 = 4 hours at 30 miles per hour, then 7−6=1 hour at 10 miles per hour. The distance driven is then (2)(20) + (4)(30) + (1)(10) = 40 + 120 + 10 = 170 miles. Note that the total elapsed time is always since the beginning of the trip, not since the previous entry in their log.</p>

### 입력 

 <p>The input consists of one or more data sets. Each set starts with a line containing an integer <em>n</em>, (1 ≤ n ≤ 10), followed by <em>n</em> pairs of values, one pair per line. The first value in a pair, <em>s</em>, is the speed in miles per hour and the second value, <em>t</em>, is the total elapsed time. Both <em>s</em> and <em>t</em> are integers, (1 ≤ <em>s</em> ≤ 90) and (1 ≤ <em>t</em> ≤ 12).  The values for <em>t</em> are always in strictly increasing order. A value of −1 for <em>n</em> signals the end of the input.</p>

### 출력 

 <p>For each input data set, print the distance driven, followed by a space, followed by the word "miles".</p>

