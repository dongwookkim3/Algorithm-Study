# [level 0] 접두사인지 확인하기 - 181906 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181906) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 13:59:20

### 문제 설명

<p>어떤 문자열에 대해서 접두사는 특정 인덱스까지의 문자열을 의미합니다. 예를 들어, "banana"의 모든 접두사는 "b", "ba", "ban", "bana", "banan", "banana"입니다.<br>
문자열 <code>my_string</code>과 <code>is_prefix</code>가 주어질 때, <code>is_prefix</code>가 <code>my_string</code>의 접두사라면 1을, 아니면 0을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>my_string</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>is_prefix</code>의 길이 ≤ 100</li>
<li><code>my_string</code>과 <code>is_prefix</code>는 영소문자로만 이루어져 있습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>my_string</th>
<th>is_prefix</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"banana"</td>
<td>"ban"</td>
<td>1</td>
</tr>
<tr>
<td>"banana"</td>
<td>"nan"</td>
<td>0</td>
</tr>
<tr>
<td>"banana"</td>
<td>"abcd"</td>
<td>0</td>
</tr>
<tr>
<td>"banana"</td>
<td>"bananan"</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번에서 <code>is_prefix</code>가 <code>my_string</code>의 접두사이기 때문에 1을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번에서 <code>is_prefix</code>가 <code>my_string</code>의 접두사가 아니기 때문에 0을 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>예제 3번에서 <code>is_prefix</code>가 <code>my_string</code>의 접두사가 아니기 때문에 0을 return 합니다.</li>
</ul>

<p>입출력 예 #4</p>

<ul>
<li>예제 4번에서 <code>is_prefix</code>가 <code>my_string</code>의 접두사가 아니기 때문에 0을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges