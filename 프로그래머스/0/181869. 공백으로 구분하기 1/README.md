# [level 0] 공백으로 구분하기 1 - 181869 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181869) 

### 성능 요약

메모리: 4.18 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 19:42:57

### 문제 설명

<p>단어가 공백 한 개로 구분되어 있는 문자열 <code>my_string</code>이 매개변수로 주어질 때, <code>my_string</code>에 나온 단어를 앞에서부터 순서대로 담은 문자열 배열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>my_string</code>은 영소문자와 공백으로만 이루어져 있습니다.</li>
<li>1 ≤ <code>my_string</code>의 길이 ≤ 1,000</li>
<li><code>my_string</code>의 맨 앞과 맨 뒤에 글자는 공백이 아닙니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>my_string</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"i love you"</td>
<td>["i", "love", "you"]</td>
</tr>
<tr>
<td>"programmers"</td>
<td>["programmers"]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>my_string</code>은 "i love you"로 공백 한 칸으로 나누어진 단어들은 앞에서부터 순서대로 "i", "love", "you" 이므로 ["i", "love", "you"]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>my_string</code>은 "programmers"로 단어가 하나만 있습니다. 따라서 ["programmers"]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges