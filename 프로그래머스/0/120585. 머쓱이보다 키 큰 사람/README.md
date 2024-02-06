# [level 0] 머쓱이보다 키 큰 사람 - 120585 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120585) 

### 성능 요약

메모리: 3.7 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 3일 6:3:11

### 문제 설명

<p>머쓱이는 학교에서 키 순으로 줄을 설 때 몇 번째로 서야 하는지 궁금해졌습니다. 머쓱이네 반 친구들의 키가 담긴 정수 배열 <code>array</code>와 머쓱이의 키 <code>height</code>가 매개변수로 주어질 때, 머쓱이보다 키 큰 사람 수를 return 하도록 solution 함수를 완성해보세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>array</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>height</code> ≤ 200</li>
<li>1 ≤ <code>array</code>의 원소 ≤ 200</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>array</th>
<th>height</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[149, 180, 192, 170]</td>
<td>167</td>
<td>3</td>
</tr>
<tr>
<td>[180, 120, 140]</td>
<td>190</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>149, 180, 192, 170 중 머쓱이보다 키가 큰 사람은 180, 192, 170으로 세 명입니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>180, 120, 140 중 190보다 큰 수는 없으므로 0명입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges