# [level 0] 특별한 이차원 배열 2 - 181831 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181831) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 23일 00:35:42

### 문제 설명

<p>n × n 크기의 이차원 배열 <code>arr</code>이 매개변수로 주어질 때, <code>arr</code>이 다음을 만족하면 1을 아니라면 0을 return 하는 solution 함수를 작성해 주세요.</p>

<ul>
<li>0 ≤ i, j &lt; n인 정수 i, j에 대하여 <code>arr[i][j]</code> = <code>arr[j][i]</code></li>
</ul>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 = <code>arr</code>의 원소의 길이 ≤ 100</li>
<li>1 ≤ <code>arr</code>의 원소의 원소 ≤ 1,000</li>
<li>모든 <code>arr</code>의 원소의 길이는 같습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[[5, 192, 33], [192, 72, 95], [33, 95, 999]]</td>
<td>1</td>
</tr>
<tr>
<td>[[19, 498, 258, 587], [63, 93, 7, 754], [258, 7, 1000, 723], [587, 754, 723, 81]]</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번에서 문제의 조건이 잘 보이도록 표를 만들면 다음과 같습니다.</p>
<table class="table">
        <thead><tr>
<th>i</th>
<th>j</th>
<th>arr[i][j]</th>
<th>arr[j][i]</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>0</td>
<td>5</td>
<td>5</td>
</tr>
<tr>
<td>0</td>
<td>1</td>
<td>192</td>
<td>192</td>
</tr>
<tr>
<td>0</td>
<td>2</td>
<td>33</td>
<td>33</td>
</tr>
<tr>
<td>1</td>
<td>0</td>
<td>192</td>
<td>192</td>
</tr>
<tr>
<td>1</td>
<td>1</td>
<td>72</td>
<td>72</td>
</tr>
<tr>
<td>1</td>
<td>2</td>
<td>95</td>
<td>95</td>
</tr>
<tr>
<td>2</td>
<td>0</td>
<td>33</td>
<td>33</td>
</tr>
<tr>
<td>2</td>
<td>1</td>
<td>95</td>
<td>95</td>
</tr>
<tr>
<td>2</td>
<td>2</td>
<td>999</td>
<td>999</td>
</tr>
</tbody>
      </table>
<p>조건을 만족하므로 1을 return 합니다.</p></li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>arr</code>에서 <code>arr[0][1]</code> = 498 ≠ 63 = <code>arr[1][0]</code>이므로 조건을 만족하지 않습니다. 따라서 0을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges