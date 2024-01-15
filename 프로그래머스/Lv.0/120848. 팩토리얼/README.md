# [level Lv.0] 팩토리얼 - 120848 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120848) 

### 성능 요약

메모리: 4.18 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 1일 23:30:28

### 문제 설명

<p><code>i</code>팩토리얼 (i!)은 1부터 i까지 정수의 곱을 의미합니다. 예를들어 5! = 5 * 4 * 3 * 2 * 1 = 120 입니다. 정수 n이 주어질 때 다음 조건을 만족하는 가장 큰 정수 i를 return 하도록 solution 함수를 완성해주세요.</p>

<ul>
<li>i! ≤ n</li>
</ul>

<hr>

<h5>제한사항</h5>

<ul>
<li>0 &lt; <code>n</code> ≤ 3,628,800</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3628800</td>
<td>10</td>
</tr>
<tr>
<td>7</td>
<td>3</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>10! = 3,628,800입니다. <code>n</code>이 3628800이므로 최대 팩토리얼인 10을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>3! = 6, 4! = 24입니다. <code>n</code>이 7이므로, 7 이하의 최대 팩토리얼인 3을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges