# [level 0] 세균 증식 - 120910 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120910) 

### 성능 요약

메모리: 4.13 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 3일 6:15:9

### 문제 설명

<p>어떤 세균은 1시간에 두배만큼 증식한다고 합니다. 처음 세균의 마리수 <code>n</code>과 경과한 시간 <code>t</code>가 매개변수로 주어질 때 <code>t</code>시간 후 세균의 수를 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>n</code> ≤ 10</li>
<li>1 ≤ <code>t</code> ≤ 15</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>t</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>2</td>
<td>10</td>
<td>2048</td>
</tr>
<tr>
<td>7</td>
<td>15</td>
<td>229,376</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>처음엔 2마리, 1시간 후엔 4마리, 2시간 후엔 8마리, ..., 10시간 후엔 2048마리가 됩니다. 따라서 2048을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>처음엔 7마리, 1시간 후엔 14마리, 2시간 후엔 28마리, ..., 15시간 후엔 229376마리가 됩니다. 따라서 229,376을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges