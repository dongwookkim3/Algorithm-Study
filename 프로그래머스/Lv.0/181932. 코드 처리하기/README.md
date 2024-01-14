# [level Lv.0] 코드 처리하기 - 181932 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181932) 

### 성능 요약

메모리: 4.18 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 20:47:29

### 문제 설명

<p>문자열 <code>code</code>가 주어집니다.<br>
<code>code</code>를 앞에서부터 읽으면서 만약 문자가 "1"이면 <code>mode</code>를 바꿉니다. <code>mode</code>에 따라 <code>code</code>를 읽어가면서 문자열 <code>ret</code>을 만들어냅니다.</p>

<p><code>mode</code>는 0과 1이 있으며, <code>idx</code>를 0 부터 <code>code의 길이 - 1</code> 까지 1씩 키워나가면서 <code>code[idx]</code>의 값에 따라 다음과 같이 행동합니다.</p>

<ul>
<li><code>mode</code>가 0일 때 

<ul>
<li><code>code[idx]</code>가 "1"이 아니면 <code>idx</code>가 짝수일 때만 <code>ret</code>의 맨 뒤에 <code>code[idx]</code>를 추가합니다.</li>
<li><code>code[idx]</code>가 "1"이면 <code>mode</code>를 0에서 1로 바꿉니다.</li>
</ul></li>
<li><code>mode</code>가 1일 때

<ul>
<li><code>code[idx]</code>가 "1"이 아니면 <code>idx</code>가 홀수일 때만 <code>ret</code>의 맨 뒤에 <code>code[idx]</code>를 추가합니다.</li>
<li><code>code[idx]</code>가 "1"이면 <code>mode</code>를 1에서 0으로 바꿉니다.</li>
</ul></li>
</ul>

<p>문자열 <code>code</code>를 통해 만들어진 문자열 <code>ret</code>를 return 하는 solution 함수를 완성해 주세요.</p>

<p>단, 시작할 때 <code>mode</code>는 0이며, return 하려는 <code>ret</code>가 만약 빈 문자열이라면 대신 "EMPTY"를 return 합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>code</code>의 길이 ≤ 100,000

<ul>
<li><code>code</code>는 알파벳 소문자 또는 "1"로 이루어진 문자열입니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>code</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"abc1abc1abc"</td>
<td>"acbac"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>code</code>의 각 인덱스 <code>i</code>에 따라 다음과 같이 <code>mode</code>와 <code>ret</code>가 변합니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>i</th>
<th>code[i]</th>
<th>mode</th>
<th>ret</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>"a"</td>
<td>0</td>
<td>"a"</td>
</tr>
<tr>
<td>1</td>
<td>"b"</td>
<td>0</td>
<td>"a"</td>
</tr>
<tr>
<td>2</td>
<td>"c"</td>
<td>0</td>
<td>"ac"</td>
</tr>
<tr>
<td>3</td>
<td>"1"</td>
<td>1</td>
<td>"ac"</td>
</tr>
<tr>
<td>4</td>
<td>"a"</td>
<td>1</td>
<td>"ac"</td>
</tr>
<tr>
<td>5</td>
<td>"b"</td>
<td>1</td>
<td>"acb"</td>
</tr>
<tr>
<td>6</td>
<td>"c"</td>
<td>1</td>
<td>"acb"</td>
</tr>
<tr>
<td>7</td>
<td>"1"</td>
<td>0</td>
<td>"acb"</td>
</tr>
<tr>
<td>8</td>
<td>"a"</td>
<td>0</td>
<td>"acba"</td>
</tr>
<tr>
<td>9</td>
<td>"b"</td>
<td>0</td>
<td>"acba"</td>
</tr>
<tr>
<td>10</td>
<td>"c"</td>
<td>0</td>
<td>"acbac"</td>
</tr>
</tbody>
      </table>
<p>따라서 "acbac"를 return 합니다.</p>

<p>※ 2023년 05월 18일 지문이 수정되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges