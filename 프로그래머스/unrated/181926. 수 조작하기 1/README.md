# [unrated] 수 조작하기 1 - 181926 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181926) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.15 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

Empty

### 문제 설명

<p>정수 <code>n</code>과 문자열 <code>control</code>이 주어집니다. <code>control</code>은 "w", "a", "s", "d"의 4개의 문자로 이루어져 있으며, <code>control</code>의 앞에서부터 순서대로 문자에 따라 <code>n</code>의 값을 바꿉니다.</p>

<ul>
<li>"w" : <code>n</code>이 1 커집니다.</li>
<li>"s" : <code>n</code>이 1 작아집니다.</li>
<li>"d" : <code>n</code>이 10 커집니다.</li>
<li>"a" : <code>n</code>이 10 작아집니다.</li>
</ul>

<p>위 규칙에 따라 <code>n</code>을 바꿨을 때 가장 마지막에 나오는 <code>n</code>의 값을 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>-100,000 ≤ <code>n</code> ≤ 100,000</li>
<li>1 ≤ <code>control</code>의 길이 ≤ 100,000

<ul>
<li><code>control</code>은 알파벳 소문자 "w", "a", "s", "d"로 이루어진 문자열입니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>control</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>"wsdawsdassw"</td>
<td>-1</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>수 <code>n</code>은 <code>control</code>에 따라 다음과 같은 순서로 변하게 됩니다.</li>
<li>0 → 1 → 0 → 10 → 0 → 1 → 0 → 10 → 0 → -1 → -2 → -1</li>
<li>따라서 -1을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges