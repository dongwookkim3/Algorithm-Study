# [level 1] 없는 숫자 더하기 - 86051 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/86051) 

### 성능 요약

메모리: 4.2 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 월간 코드 챌린지 시즌3

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 3일 7:15:8

### 문제 설명

<p>0부터 9까지의 숫자 중 일부가 들어있는 정수 배열 <code>numbers</code>가 매개변수로 주어집니다. <code>numbers</code>에서 찾을 수 없는 0부터 9까지의 숫자를 모두 찾아 더한 수를 return 하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>numbers</code>의 길이 ≤ 9

<ul>
<li>0 ≤ <code>numbers</code>의 모든 원소 ≤ 9</li>
<li><code>numbers</code>의 모든 원소는 서로 다릅니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>numbers</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1,2,3,4,6,7,8,0]</td>
<td>14</td>
</tr>
<tr>
<td>[5,8,4,0,6,7,9]</td>
<td>6</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p><strong>입출력 예 #1</strong></p>

<ul>
<li>5, 9가 <code>numbers</code>에 없으므로, 5 + 9 = 14를 return 해야 합니다.</li>
</ul>

<p><strong>입출력 예 #2</strong></p>

<ul>
<li>1, 2, 3이 <code>numbers</code>에 없으므로, 1 + 2 + 3 = 6을 return 해야 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges