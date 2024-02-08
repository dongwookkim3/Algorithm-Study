# [level 0] 조건에 맞게 수열 변환하기 3 - 181835 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181835) 

### 성능 요약

메모리: 27.2 MB, 시간: 32.34 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 4일 20:22:56

### 문제 설명

<p>정수 배열 <code>arr</code>와 자연수 <code>k</code>가 주어집니다. </p>

<p>만약 <code>k</code>가 홀수라면 <code>arr</code>의 모든 원소에 <code>k</code>를 곱하고, <code>k</code>가 짝수라면 <code>arr</code>의 모든 원소에 <code>k</code>를 더합니다.</p>

<p>이러한 변환을 마친 후의 <code>arr</code>를 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 1,000,000

<ul>
<li>1 ≤ <code>arr</code>의 원소의 값 ≤ 100</li>
</ul></li>
<li>1 ≤ <code>k</code> ≤ 100</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>k</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 3, 100, 99, 98]</td>
<td>3</td>
<td>[3, 6, 9, 300, 297, 294]</td>
</tr>
<tr>
<td>[1, 2, 3, 100, 99, 98]</td>
<td>2</td>
<td>[3, 4, 5, 102, 101, 100]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>주어진 <code>k</code>인 3은 홀수이므로, 전체 배열에 3을 곱합니다. 따라서 [3, 6, 9, 300, 297, 294]을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>주어진 <code>k</code>인 2는 짝수이므로, 전체 배열에 2를 더합니다. 따라서 [3, 4, 5, 102, 101, 100]을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges