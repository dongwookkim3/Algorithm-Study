# [level Lv.0] 원소들의 곱과 합 - 181929 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181929) 

### 성능 요약

메모리: 4.18 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 20:35:19

### 문제 설명

<p>정수가 담긴 리스트 <code>num_list</code>가 주어질 때, 모든 원소들의 곱이 모든 원소들의 합의 제곱보다 작으면 1을 크면 0을 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>2 ≤ <code>num_list</code>의 길이 ≤ 10</li>
<li>1 ≤ <code>num_list</code>의 원소 ≤ 9</li>
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
<td>[3, 4, 5, 2, 1]</td>
<td>1</td>
</tr>
<tr>
<td>[5, 7, 8, 3]</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>모든 원소의 곱은 120, 합의 제곱은 225이므로 1을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>모든 원소의 곱은 840, 합의 제곱은 529이므로 0을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges