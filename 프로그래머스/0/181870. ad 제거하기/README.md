# [level 0] ad 제거하기 - 181870 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181870) 

### 성능 요약

메모리: 3.73 MB, 시간: 0.37 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 23일 00:30:08

### 문제 설명

<p>문자열 배열 <code>strArr</code>가 주어집니다. 배열 내의 문자열 중 "ad"라는 부분 문자열을 포함하고 있는 모든 문자열을 제거하고 남은 문자열을 순서를 유지하여 배열로 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>strArr</code>의 길이 ≤ 1,000

<ul>
<li>1 ≤ <code>strArr</code>의 원소의 길이 ≤ 20</li>
<li><code>strArr</code>의 원소는 알파벳 소문자로 이루어진 문자열입니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>strArr</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["and","notad","abcd"]</td>
<td>["and","abcd"]</td>
</tr>
<tr>
<td>["there","are","no","a","ds"]</td>
<td>["there","are","no","a","ds"]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>1번 인덱스의 문자열인 "notad"는 부분 문자열로 "ad"를 가집니다. 따라서 해당 문자열을 제거하고 나머지는 순서를 유지하여 ["and","abcd"]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"ad"가 부분 문자열로 들어간 문자열이 존재하지 않습니다. 따라서 원래 배열을 그대로 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges