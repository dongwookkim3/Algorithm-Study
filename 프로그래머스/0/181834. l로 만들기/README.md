# [level 0] l로 만들기 - 181834 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181834) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.41 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 23일 00:28:11

### 문제 설명

<p>알파벳 소문자로 이루어진 문자열 <code>myString</code>이 주어집니다. 알파벳 순서에서 "l"보다 앞서는 모든 문자를 "l"로 바꾼 문자열을 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>myString</code> ≤ 100,000

<ul>
<li><code>myString</code>은 알파벳 소문자로 이루어진 문자열입니다.</li>
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
<td>"abcdevwxyz"</td>
<td>"lllllvwxyz"</td>
</tr>
<tr>
<td>"jjnnllkkmm"</td>
<td>"llnnllllmm"</td>
</tr>
</tbody>
      </table>
<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>0 ~ 4번 인덱스의 문자 "a","b","c","d","e"는 각각 "l"보다 앞서는 문자입니다. 따라서 "l"로 고쳐줍니다.</li>
<li>그 외의 문자는 모두 "l"보다 앞서지 않는 문자입니다. 따라서 바꾸지 않습니다.</li>
<li>따라서 "lllllvwxyz"을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>0번, 1번, 6번, 7번 인덱스의 문자 "j","j","k","k"는 각각 "l"보다 앞서는 문자입니다. 따라서 "l"로 고쳐줍니다.</li>
<li>그 외의 문자는 모두 "l"보다 앞서지 않는 문자입니다. 따라서 바꾸지 않습니다.</li>
<li>따라서 "llnnllllmm"을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges