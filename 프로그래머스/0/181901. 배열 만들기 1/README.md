# [level 0] 배열 만들기 1 - 181901 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181901) 

### 성능 요약

메모리: 4.19 MB, 시간: 0.04 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 14:0:19

### 문제 설명

<p>정수 <code>n</code>과 <code>k</code>가 주어졌을 때, 1 이상 <code>n</code>이하의 정수 중에서 <code>k</code>의 배수를 오름차순으로 저장한 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>n</code> ≤ 1,000,000</li>
<li>1 ≤ <code>k</code> ≤ min(1,000, n)</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>k</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>10</td>
<td>3</td>
<td>[3, 6, 9]</td>
</tr>
<tr>
<td>15</td>
<td>5</td>
<td>[5, 10, 15]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>1 이상 10 이하의 3의 배수는 3, 6, 9 이므로 [3, 6, 9]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>1 이상 15 이하의 5의 배수는 5, 10, 15 이므로 [5, 10, 15]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges