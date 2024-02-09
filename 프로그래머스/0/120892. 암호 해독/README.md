# [level 0] 암호 해독 - 120892 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120892) 

### 성능 요약

메모리: 3.66 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 19:7:19

### 문제 설명

<p>군 전략가 머쓱이는 전쟁 중 적군이 다음과 같은 암호 체계를 사용한다는 것을 알아냈습니다.</p>

<ul>
<li>암호화된 문자열 <code>cipher</code>를 주고받습니다.</li>
<li>그 문자열에서 <code>code</code>의 배수 번째 글자만 진짜 암호입니다.</li>
</ul>

<p>문자열 <code>cipher</code>와 정수 <code>code</code>가 매개변수로 주어질 때 해독된 암호 문자열을 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>cipher</code>의 길이 ≤ 1,000</li>
<li>1 ≤ <code>code</code> ≤ <code>cipher</code>의 길이</li>
<li><code>cipher</code>는 소문자와 공백으로만 구성되어 있습니다.</li>
<li>공백도 하나의 문자로 취급합니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>cipher</th>
<th>code</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"dfjardstddetckdaccccdegk"</td>
<td>4</td>
<td>"attack"</td>
</tr>
<tr>
<td>"pfqallllabwaoclk"</td>
<td>2</td>
<td>"fallback"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>"dfjardstddetckdaccccdegk" 의 4번째, 8번째, 12번째, 16번째, 20번째, 24번째 글자를 합친 "attack"을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"pfqallllabwaoclk" 의 2번째, 4번째, 6번째, 8번째, 10번째, 12번째, 14번째, 16번째 글자를 합친 "fallback"을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges