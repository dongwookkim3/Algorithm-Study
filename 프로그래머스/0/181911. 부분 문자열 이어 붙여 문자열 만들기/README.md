# [level 0] 부분 문자열 이어 붙여 문자열 만들기 - 181911 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181911) 

### 성능 요약

메모리: 4.22 MB, 시간: 0.05 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 23일 00:11:04

### 문제 설명

<p>길이가 같은 문자열 배열 <code>my_strings</code>와 이차원 정수 배열 <code>parts</code>가 매개변수로 주어집니다. <code>parts[i]</code>는 [s, e] 형태로, <code>my_string[i]</code>의 인덱스 s부터 인덱스 e까지의 부분 문자열을 의미합니다. 각 <code>my_strings</code>의 원소의 <code>parts</code>에 해당하는 부분 문자열을 순서대로 이어 붙인 문자열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>my_strings</code>의 길이 = <code>parts</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>my_strings</code>의 원소의 길이 ≤ 100</li>
<li><code>parts[i]</code>를 [s, e]라 할 때, 다음을 만족합니다.

<ul>
<li>0 ≤ s ≤ e &lt; <code>my_strings[i]</code>의 길이</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>my_strings</th>
<th>parts</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["progressive", "hamburger", "hammer", "ahocorasick"]</td>
<td>[[0, 4], [1, 2], [3, 5], [7, 7]]</td>
<td>"programmers"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번의 입력을 보기 좋게 표로 나타내면 다음과 같습니다.</p>
<table class="table">
        <thead><tr>
<th>i</th>
<th>my_strings[i]</th>
<th>parts[i]</th>
<th>부분 문자열</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>"progressive"</td>
<td>[0, 4]</td>
<td>"progr"</td>
</tr>
<tr>
<td>1</td>
<td>"hamburger"</td>
<td>[1, 2]</td>
<td>"am"</td>
</tr>
<tr>
<td>2</td>
<td>"hammer"</td>
<td>[3, 5]</td>
<td>"mer"</td>
</tr>
<tr>
<td>3</td>
<td>"ahocorasick"</td>
<td>[7, 7]</td>
<td>"s"</td>
</tr>
</tbody>
      </table>
<p>각 부분 문자열을 순서대로 이어 붙인 문자열은 "programmers"입니다. 따라서 "programmers"를 return 합니다.</p></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges