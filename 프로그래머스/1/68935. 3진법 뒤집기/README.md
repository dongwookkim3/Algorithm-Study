# [level 1] 3진법 뒤집기 - 68935 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/68935) 

### 성능 요약

메모리: 4.2 MB, 시간: 0.03 ms

### 구분

코딩테스트 연습 > 월간 코드 챌린지 시즌1

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 02월 22일 21:42:14

### 문제 설명

<p>자연수 n이 매개변수로 주어집니다. n을 3진법 상에서 앞뒤로 뒤집은 후, 이를 다시 10진법으로 표현한 수를 return 하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>n은 1 이상 100,000,000 이하인 자연수입니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>45</td>
<td>7</td>
</tr>
<tr>
<td>125</td>
<td>229</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>답을 도출하는 과정은 다음과 같습니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>n (10진법)</th>
<th>n (3진법)</th>
<th>앞뒤 반전(3진법)</th>
<th>10진법으로 표현</th>
</tr>
</thead>
        <tbody><tr>
<td>45</td>
<td>1200</td>
<td>0021</td>
<td>7</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서 7을 return 해야 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>답을 도출하는 과정은 다음과 같습니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>n (10진법)</th>
<th>n (3진법)</th>
<th>앞뒤 반전(3진법)</th>
<th>10진법으로 표현</th>
</tr>
</thead>
        <tbody><tr>
<td>125</td>
<td>11122</td>
<td>22111</td>
<td>229</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서 229를 return 해야 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges