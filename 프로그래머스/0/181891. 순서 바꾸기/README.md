# [level 0] 순서 바꾸기 - 181891 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181891) 

### 성능 요약

메모리: 4.15 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 22:3:6

### 문제 설명

<p>정수 리스트 <code>num_list</code>와 정수 <code>n</code>이 주어질 때, <code>num_list</code>를 <code>n</code> 번째 원소 이후의 원소들과 <code>n</code> 번째까지의 원소들로 나눠 <code>n</code> 번째 원소 이후의 원소들을 <code>n</code> 번째까지의 원소들 앞에 붙인 리스트를 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>2 ≤ <code>num_list</code>의 길이 ≤ 30</li>
<li>1 ≤ <code>num_list</code>의 원소 ≤ 9</li>
<li>1 ≤ <code>n</code> ≤ <code>num_list</code>의 길이</li>
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
<td>[2, 1, 6]</td>
<td>1</td>
<td>[1, 6, 2]</td>
</tr>
<tr>
<td>[5, 2, 1, 7, 5]</td>
<td>3</td>
<td>[7, 5, 5, 2, 1]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>[2, 1, 6]에서 첫 번째 이후의 원소는 [1, 6]이고 첫 번째까지의 원소는 [2]입니다. 두 리스트를 이어 붙이면 [1, 6, 2]가 됩니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>[5, 2, 1, 7, 5]에서 세 번째 이후의 원소는 [7, 5]이고 세 번째까지의 원소는 [5, 2, 1]입니다. 두 리스트를 이어 붙이면 [7, 5, 5, 2, 1]가 됩니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges