# [level 1] 약수의 개수와 덧셈 - 77884 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/77884) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.03 ms

### 구분

코딩테스트 연습 > 월간 코드 챌린지 시즌2

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 4일 20:52:52

### 문제 설명

<p>두 정수 <code>left</code>와 <code>right</code>가 매개변수로 주어집니다. <code>left</code>부터 <code>right</code>까지의 모든 수들 중에서, 약수의 개수가 짝수인 수는 더하고, 약수의 개수가 홀수인 수는 뺀 수를 return 하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>left</code> ≤ <code>right</code> ≤ 1,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>left</th>
<th>right</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>13</td>
<td>17</td>
<td>43</td>
</tr>
<tr>
<td>24</td>
<td>27</td>
<td>52</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p><strong>입출력 예 #1</strong></p>

<ul>
<li>다음 표는 13부터 17까지의 수들의 약수를 모두 나타낸 것입니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>수</th>
<th>약수</th>
<th>약수의 개수</th>
</tr>
</thead>
        <tbody><tr>
<td>13</td>
<td>1, 13</td>
<td>2</td>
</tr>
<tr>
<td>14</td>
<td>1, 2, 7, 14</td>
<td>4</td>
</tr>
<tr>
<td>15</td>
<td>1, 3, 5, 15</td>
<td>4</td>
</tr>
<tr>
<td>16</td>
<td>1, 2, 4, 8, 16</td>
<td>5</td>
</tr>
<tr>
<td>17</td>
<td>1, 17</td>
<td>2</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서, 13 + 14 + 15 - 16 + 17 = 43을 return 해야 합니다.</li>
</ul>

<p><strong>입출력 예 #2</strong></p>

<ul>
<li>다음 표는 24부터 27까지의 수들의 약수를 모두 나타낸 것입니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>수</th>
<th>약수</th>
<th>약수의 개수</th>
</tr>
</thead>
        <tbody><tr>
<td>24</td>
<td>1, 2, 3, 4, 6, 8, 12, 24</td>
<td>8</td>
</tr>
<tr>
<td>25</td>
<td>1, 5, 25</td>
<td>3</td>
</tr>
<tr>
<td>26</td>
<td>1, 2, 13, 26</td>
<td>4</td>
</tr>
<tr>
<td>27</td>
<td>1, 3, 9, 27</td>
<td>4</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서, 24 - 25 + 26 + 27 = 52를 return 해야 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges