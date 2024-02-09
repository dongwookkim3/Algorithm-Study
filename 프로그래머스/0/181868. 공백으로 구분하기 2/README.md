# [level 0] 공백으로 구분하기 2 - 181868 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181868) 

### 성능 요약

메모리: 4.2 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 22:11:15

### 문제 설명

<p>단어가 공백 한 개 이상으로 구분되어 있는 문자열 <code>my_string</code>이 매개변수로 주어질 때, <code>my_string</code>에 나온 단어를 앞에서부터 순서대로 담은 문자열 배열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>my_string</code>은 영소문자와 공백으로만 이루어져 있습니다.</li>
<li>1 ≤ <code>my_string</code>의 길이 ≤ 1,000</li>
<li><code>my_string</code>의 맨 앞과 맨 뒤에도 공백이 있을 수 있습니다.</li>
<li><code>my_string</code>에는 단어가 하나 이상 존재합니다.</li>
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
<td>"&nbsp;i&nbsp;&nbsp;&nbsp;&nbsp;love&nbsp;&nbsp;you"</td>
<td>["i", "love", "you"]</td>
</tr>
<tr>
<td>"&nbsp;&nbsp;&nbsp;&nbsp;programmers&nbsp;&nbsp;"</td>
<td>["programmers"]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>my_string</code>은 "&nbsp;i&nbsp;&nbsp;&nbsp;&nbsp;love&nbsp;&nbsp;you"로 공백을 기준으로 단어를 나누면 "i", "love", "you" 3개의 단어가 있습니다. 따라서 ["i", "love", "you"]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>my_string</code>은 "&nbsp;&nbsp;&nbsp;&nbsp;programmers&nbsp;&nbsp;"로 단어는 "programmers" 하나만 있습니다. 따라서 ["programmers"]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges