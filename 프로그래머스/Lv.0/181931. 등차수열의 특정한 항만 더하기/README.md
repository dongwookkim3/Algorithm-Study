# [level Lv.0] 등차수열의 특정한 항만 더하기 - 181931 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181931) 

### 성능 요약

메모리: 4.22 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 20:42:36

### 문제 설명

<p>두 정수 <code>a</code>, <code>d</code>와 길이가 n인 boolean 배열 <code>included</code>가 주어집니다. 첫째항이 <code>a</code>, 공차가 <code>d</code>인 등차수열에서 <code>included[i]</code>가 i + 1항을 의미할 때, 이 등차수열의 1항부터 n항까지 <code>included</code>가 true인 항들만 더한 값을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>a</code> ≤ 100</li>
<li>1 ≤ <code>d</code> ≤ 100</li>
<li>1 ≤ <code>included</code>의 길이 ≤ 100</li>
<li><code>included</code>에는 true가 적어도 하나 존재합니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>a</th>
<th>d</th>
<th>included</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>4</td>
<td>[true, false, false, true, true]</td>
<td>37</td>
</tr>
<tr>
<td>7</td>
<td>1</td>
<td>[false, false, false, true, false, false, false]</td>
<td>10</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번은 <code>a</code>와 <code>d</code>가 각각 3, 4이고 <code>included</code>의 길이가 5입니다. 이를 표로 나타내면 다음과 같습니다.</p>
<table class="table">
        <thead><tr>
<th></th>
<th>1항</th>
<th>2항</th>
<th>3항</th>
<th>4항</th>
<th>5항</th>
</tr>
</thead>
        <tbody><tr>
<td>등차수열</td>
<td>3</td>
<td>7</td>
<td>11</td>
<td>15</td>
<td>19</td>
</tr>
<tr>
<td>included</td>
<td>true</td>
<td>false</td>
<td>false</td>
<td>true</td>
<td>true</td>
</tr>
</tbody>
      </table>
<p>따라서 true에 해당하는 1항, 4항, 5항을 더한 3 + 15 + 19 = 37을 return 합니다.</p></li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><p>예제 2번은 <code>a</code>와 <code>d</code>가 각각 7, 1이고 <code>included</code>의 길이가 7입니다. 이를 표로 나타내면 다음과 같습니다.</p>
<table class="table">
        <thead><tr>
<th></th>
<th>1항</th>
<th>2항</th>
<th>3항</th>
<th>4항</th>
<th>5항</th>
<th>6항</th>
<th>7항</th>
</tr>
</thead>
        <tbody><tr>
<td>등차수열</td>
<td>7</td>
<td>8</td>
<td>9</td>
<td>10</td>
<td>11</td>
<td>12</td>
<td>13</td>
</tr>
<tr>
<td>included</td>
<td>false</td>
<td>false</td>
<td>false</td>
<td>true</td>
<td>false</td>
<td>false</td>
<td>false</td>
</tr>
</tbody>
      </table>
<p>따라서 4항만 true이므로 10을 return 합니다.</p></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges