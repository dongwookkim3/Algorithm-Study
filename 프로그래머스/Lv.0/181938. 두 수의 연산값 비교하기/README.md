# [level Lv.0] 두 수의 연산값 비교하기 - 181938 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181938) 

### 성능 요약

메모리: 4.12 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 6일 15:50:18

### 문제 설명

<p>연산 ⊕는 두 정수에 대한 연산으로 두 정수를 붙여서 쓴 값을 반환합니다. 예를 들면 다음과 같습니다.</p>

<ul>
<li>12 ⊕ 3 = 123</li>
<li>3 ⊕ 12 = 312</li>
</ul>

<p>양의 정수 <code>a</code>와 <code>b</code>가 주어졌을 때, <code>a</code> ⊕ <code>b</code>와 <code>2 * a * b</code> 중 더 큰 값을 return하는 solution 함수를 완성해 주세요.</p>

<p>단, <code>a</code> ⊕ <code>b</code>와 <code>2 * a * b</code>가 같으면  <code>a</code> ⊕ <code>b</code>를 return 합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>a</code>, <code>b</code> &lt; 10,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>a</th>
<th>b</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>2</td>
<td>91</td>
<td>364</td>
</tr>
<tr>
<td>91</td>
<td>2</td>
<td>912</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>a</code> ⊕ <code>b</code> = 291 이고, <code>2 * a * b</code> = 364 입니다. 둘 중 더 큰 값은 364 이므로 364를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>a</code> ⊕ <code>b</code> = 912 이고, <code>2 * a * b</code> = 364 입니다. 둘 중 더 큰 값은 912 이므로 912를 return 합니다.</li>
</ul>

<hr>

<p>※ 2023년 04월 27일 입출력 예 설명이 수정되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges