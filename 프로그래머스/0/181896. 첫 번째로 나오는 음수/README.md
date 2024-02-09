# [level 0] 첫 번째로 나오는 음수 - 181896 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181896) 

### 성능 요약

메모리: 3.68 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 21:54:23

### 문제 설명

<p>정수 리스트 <code>num_list</code>가 주어질 때, 첫 번째로 나오는 음수의 인덱스를 return하도록 solution 함수를 완성해주세요. 음수가 없다면 -1을 return합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>5 ≤ <code>num_list</code>의 길이 ≤ 100</li>
<li>-10 ≤ <code>num_list</code>의 원소 ≤ 100</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>num_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[12, 4, 15, 46, 38, -2, 15]</td>
<td>5</td>
</tr>
<tr>
<td>[13, 22, 53, 24, 15, 6]</td>
<td>-1</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>5번 인덱스에서 음수가 처음 등장하므로 5를 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>음수가 없으므로 -1을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges