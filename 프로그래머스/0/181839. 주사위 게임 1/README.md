# [level 0] 주사위 게임 1 - 181839 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181839) 

### 성능 요약

메모리: 4.15 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 22일 23:59:25

### 문제 설명

<p>1부터 6까지 숫자가 적힌 주사위가 두 개 있습니다. 두 주사위를 굴렸을 때 나온 숫자를 각각 <code>a</code>, <code>b</code>라고 했을 때 얻는 점수는 다음과 같습니다.</p>

<ul>
<li><code>a</code>와 <code>b</code>가 모두 홀수라면 <code>a</code><sup>2</sup> + <code>b</code><sup>2</sup> 점을 얻습니다.</li>
<li><code>a</code>와 <code>b</code> 중 하나만 홀수라면 2 × (<code>a</code> + <code>b</code>) 점을 얻습니다.</li>
<li><code>a</code>와 <code>b</code> 모두 홀수가 아니라면 |<code>a</code> - <code>b</code>| 점을 얻습니다.</li>
</ul>

<p>두 정수 <code>a</code>와 <code>b</code>가 매개변수로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>a</code>와 <code>b</code>는 1 이상 6 이하의 정수입니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>a</th>
<th>b</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>5</td>
<td>34</td>
</tr>
<tr>
<td>6</td>
<td>1</td>
<td>14</td>
</tr>
<tr>
<td>2</td>
<td>4</td>
<td>2</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번에서 두 주사위 숫자가 모두 홀수이므로 3<sup>2</sup> + 5<sup>2</sup> = 9 + 25 = 34점을 얻습니다. 따라서 34를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번에서 두 주사위 숫자 중 하나만 홀수이므로 2 × (6 + 1) = 2 × 7 = 14점을 얻습니다. 따라서 14를 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>예제 3번에서 두 주사위 숫자가 모두 홀수가 아니므로 |2 - 4| = |-2| = 2점을 얻습니다. 따라서 2를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges