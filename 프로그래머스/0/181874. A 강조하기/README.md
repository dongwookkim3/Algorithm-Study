# [level 0] A 강조하기 - 181874 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181874) 

### 성능 요약

메모리: 4.19 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 22:15:14

### 문제 설명

<p>문자열 <code>myString</code>이 주어집니다. <code>myString</code>에서 알파벳 "a"가 등장하면 전부 "A"로 변환하고, "A"가 아닌 모든 대문자 알파벳은 소문자 알파벳으로 변환하여 return 하는 solution 함수를 완성하세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>myString</code>의 길이 ≤ 20

<ul>
<li><code>myString</code>은 알파벳으로 이루어진 문자열입니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>myString</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"abstract algebra"</td>
<td>"AbstrAct AlgebrA"</td>
</tr>
<tr>
<td>"PrOgRaMmErS"</td>
<td>"progrAmmers"</td>
</tr>
</tbody>
      </table>
<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>0번, 5번, 9번, 15번 인덱스의 "a"는 소문자이므로 전부 대문자로 고쳐줍니다.</li>
<li>다른 문자들은 전부 "a"가 아닌 소문자이므로 바꾸지 않습니다.</li>
<li>따라서 "AbstrAct AlgebrA"를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>0번, 2번, 4번, 6번, 8번, 10번 인덱스의 문자들은 "A"가 아닌 대문자이므로 전부 소문자로 고쳐줍니다.</li>
<li>5번 인덱스의 "a"는 소문자이므로 대문자로 고쳐줍니다.</li>
<li>다른 문자들은 전부 "a"가 아닌 소문자이므로 바꾸지 않습니다.</li>
<li>따라서 "progrAmmers"를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges