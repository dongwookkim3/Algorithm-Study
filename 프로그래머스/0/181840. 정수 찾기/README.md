# [level 0] 정수 찾기 - 181840 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181840) 

### 성능 요약

메모리: 3.68 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 3일 6:37:25

### 문제 설명

<p>정수 리스트 <code>num_list</code>와 찾으려는 정수 <code>n</code>이 주어질 때, <code>num_list</code>안에 <code>n</code>이 있으면 1을 없으면 0을 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>3 ≤ <code>num_list</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>num_list</code>의 원소 ≤ 100</li>
<li>1 ≤ <code>n</code> ≤ 100</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>num_list</th>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 3, 4, 5]</td>
<td>3</td>
<td>1</td>
</tr>
<tr>
<td>[15, 98, 23, 2, 15]</td>
<td>20</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>[1, 2, 3, 4, 5] 안에 3이 있으므로 1을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>[15, 98, 23, 2, 15] 안에 20이 없으므로 0을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges