# [level 0] n개 간격의 원소들 - 181888 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181888) 

### 성능 요약

메모리: 4.16 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 22일 23:15:15

### 문제 설명

<p>정수 리스트 <code>num_list</code>와 정수 <code>n</code>이 주어질 때, <code>num_list</code>의 첫 번째 원소부터 마지막 원소까지 <code>n</code>개 간격으로 저장되어있는 원소들을 차례로 담은 리스트를 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>5 ≤ <code>num_list</code>의 길이 ≤ 20</li>
<li>1 ≤ <code>num_list</code>의 원소 ≤ 9</li>
<li>1 ≤ <code>n</code> ≤ 4</li>
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
<td>[4, 2, 6, 1, 7, 6]</td>
<td>2</td>
<td>[4, 6, 7]</td>
</tr>
<tr>
<td>[4, 2, 6, 1, 7, 6]</td>
<td>4</td>
<td>[4, 7]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>[4, 2, 6, 1, 7, 6]에서 2개 간격으로 저장되어 있는 원소들은 [4, 6, 7]입니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>[4, 2, 6, 1, 7, 6]에서 4개 간격으로 저장되어 있는 원소들은 [4, 7]입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges