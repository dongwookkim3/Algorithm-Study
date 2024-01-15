# [level Lv.0] 주사위의 개수 - 120845 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120845) 

### 성능 요약

메모리: 3.68 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 1일 23:25:55

### 문제 설명

<p>머쓱이는 직육면체 모양의 상자를 하나 가지고 있는데 이 상자에 정육면체 모양의 주사위를 최대한 많이 채우고 싶습니다. 상자의 가로, 세로, 높이가 저장되어있는 배열 <code>box</code>와 주사위 모서리의 길이 정수 <code>n</code>이 매개변수로 주어졌을 때, 상자에 들어갈 수 있는 주사위의 최대 개수를 return 하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>box</code>의 길이는 3입니다.</li>
<li><code>box[0]</code> = 상자의 가로 길이</li>
<li><code>box[1]</code> = 상자의 세로 길이</li>
<li><code>box[2]</code> = 상자의 높이 길이</li>
<li>1 ≤ <code>box</code>의 원소 ≤ 100</li>
<li>1 ≤ <code>n</code> ≤ 50</li>
<li><code>n</code> ≤ <code>box</code>의 원소</li>
<li>주사위는 상자와 평행하게 넣습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>box</th>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 1, 1]</td>
<td>1</td>
<td>1</td>
</tr>
<tr>
<td>[10, 8, 6]</td>
<td>3</td>
<td>12</td>
</tr>
</tbody>
      </table>
<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>상자의 크기가 가로 1, 세로 1, 높이 1이므로 모서리의 길이가 1인 주사위는 1개 들어갈 수 있습니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>상자의 크기가 가로 10, 세로 8, 높이 6이므로 모서리의 길이가 3인 주사위는 12개 들어갈 수 있습니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges