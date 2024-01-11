# [level Lv.0] 중앙값 구하기 - 120811 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120811) 

### 성능 요약

메모리: 4.12 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 4일 22:34:17

### 문제 설명

<p>중앙값은 어떤 주어진 값들을 크기의 순서대로 정렬했을 때 가장 중앙에 위치하는 값을 의미합니다. 예를 들어 1, 2, 7, 10, 11의 중앙값은 7입니다. 정수 배열 <code>array</code>가 매개변수로 주어질 때, 중앙값을 return 하도록 solution 함수를 완성해보세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>array</code>의 길이는 홀수입니다.</li>
<li>0 &lt; <code>array</code>의 길이 &lt; 100</li>
<li>-1,000 &lt; <code>array</code>의 원소 &lt; 1,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>array</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 7, 10, 11]</td>
<td>7</td>
</tr>
<tr>
<td>[9, -1, 0]</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>본문과 동일합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>9, -1, 0을 오름차순 정렬하면 -1, 0, 9이고 가장 중앙에 위치하는 값은 0입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges