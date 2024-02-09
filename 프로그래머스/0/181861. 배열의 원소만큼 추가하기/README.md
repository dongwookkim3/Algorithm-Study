# [level 0] 배열의 원소만큼 추가하기 - 181861 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181861) 

### 성능 요약

메모리: 4.16 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 22:22:46

### 문제 설명

<p>아무 원소도 들어있지 않은 빈 배열 X가 있습니다. 양의 정수 배열 <code>arr</code>가 매개변수로 주어질 때, <code>arr</code>의 앞에서부터 차례대로 원소를 보면서 원소가 a라면 X의 맨 뒤에 a를 a번 추가하는 일을 반복한 뒤의 배열 X를 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>arr</code>의 원소 ≤ 100</li>
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
<td>[5, 1, 4]</td>
<td>[5, 5, 5, 5, 5, 1, 4, 4, 4, 4]</td>
</tr>
<tr>
<td>[6, 6]</td>
<td>[6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6]</td>
</tr>
<tr>
<td>[1]</td>
<td>[1]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번에 대해서 a와 X를 나타내보면 다음 표와 같습니다.</p>
<table class="table">
        <thead><tr>
<th>a</th>
<th>X</th>
</tr>
</thead>
        <tbody><tr>
<td></td>
<td>[]</td>
</tr>
<tr>
<td>5</td>
<td>[5, 5, 5, 5, 5]</td>
</tr>
<tr>
<td>1</td>
<td>[5, 5, 5, 5, 5, 1]</td>
</tr>
<tr>
<td>4</td>
<td>[5, 5, 5, 5, 5, 1, 4, 4, 4, 4]</td>
</tr>
</tbody>
      </table>
<p>따라서 [5, 5, 5, 5, 5, 1, 4, 4, 4, 4]를 return 합니다.</p></li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><p>예제 2번에 대해서 a와 X를 나타내보면 다음 표와 같습니다. </p>
<table class="table">
        <thead><tr>
<th>a</th>
<th>X</th>
</tr>
</thead>
        <tbody><tr>
<td></td>
<td>[]</td>
</tr>
<tr>
<td>6</td>
<td>[6, 6, 6, 6, 6, 6]</td>
</tr>
<tr>
<td>6</td>
<td>[6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6]</td>
</tr>
</tbody>
      </table>
<p>따라서 [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6]를 return 합니다.</p></li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li><p>예제 2번에 대해서 a와 X를 나타내보면 다음 표와 같습니다. </p>
<table class="table">
        <thead><tr>
<th>a</th>
<th>X</th>
</tr>
</thead>
        <tbody><tr>
<td></td>
<td>[]</td>
</tr>
<tr>
<td>1</td>
<td>[1]</td>
</tr>
</tbody>
      </table>
<p>따라서 [1]을 return 합니다.</p></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges