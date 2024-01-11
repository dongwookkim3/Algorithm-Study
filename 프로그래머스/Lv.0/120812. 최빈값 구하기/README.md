# [level Lv.0] 최빈값 구하기 - 120812 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120812) 

### 성능 요약

메모리: 3.72 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 4일 22:45:43

### 문제 설명

<p>최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다. 정수 배열 <code>array</code>가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요. 최빈값이 여러 개면 -1을 return 합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>0 &lt; <code>array</code>의 길이 &lt; 100</li>
<li>0&nbsp;≤&nbsp;<code>array</code>의 원소 &lt; 1000</li>
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
<td>[1, 2, 3, 3, 3, 4]</td>
<td>3</td>
</tr>
<tr>
<td>[1, 1, 2, 2]</td>
<td>-1</td>
</tr>
<tr>
<td>[1]</td>
<td>1</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>[1, 2, 3, 3, 3, 4]에서 1은 1개 2는 1개 3은 3개 4는 1개로 최빈값은 3입니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>[1, 1, 2, 2]에서 1은 2개 2는 2개로 최빈값이 1, 2입니다. 최빈값이 여러 개이므로 -1을 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>[1]에는 1만 있으므로 최빈값은 1입니다.</li>
</ul>

<hr>

<p>※ 공지 - 2022년 10월 17일 제한 사항 및 테스트케이스가 수정되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges