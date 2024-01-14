# [level Lv.0] 배열 회전시키기 - 120844 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120844) 

### 성능 요약

메모리: 3.67 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 15:50:41

### 문제 설명

<p>정수가 담긴 배열 <code>numbers</code>와 문자열&nbsp;<code>direction</code>가 매개변수로 주어집니다. 배열 <code>numbers</code>의 원소를 <code>direction</code>방향으로 한 칸씩 회전시킨 배열을 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>3 ≤ <code>numbers</code>의 길이 ≤ 20</li>
<li><code>direction</code>은 "left" 와 "right" 둘 중 하나입니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>numbers</th>
<th>direction</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 3]</td>
<td>"right"</td>
<td>[3, 1, 2]</td>
</tr>
<tr>
<td>[4, 455, 6, 4, -1, 45, 6]</td>
<td>"left"</td>
<td>[455, 6, 4, -1, 45, 6, 4]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>numbers</code> 가 [1, 2, 3]이고 <code>direction</code>이 "right" 이므로 오른쪽으로 한 칸씩 회전시킨 [3, 1, 2]를 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>numbers</code> 가 [4, 455, 6, 4, -1, 45, 6]이고 <code>direction</code>이 "left" 이므로 왼쪽으로 한 칸씩 회전시킨 [455, 6, 4, -1, 45, 6, 4]를 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges