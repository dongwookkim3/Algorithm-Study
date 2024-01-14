# [level Lv.0] 2차원으로 만들기 - 120842 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120842) 

### 성능 요약

메모리: 4.16 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 15:41:50

### 문제 설명

<p>정수 배열 <code>num_list</code>와 정수&nbsp;<code>n</code>이 매개변수로 주어집니다. <code>num_list</code>를 다음 설명과 같이 2차원 배열로 바꿔 return하도록 solution 함수를 완성해주세요.</p>

<p><code>num_list</code>가 [1, 2, 3, 4, 5, 6, 7, 8] 로 길이가 8이고 <code>n</code>이 2이므로 <code>num_list</code>를 2 * 4 배열로 다음과 같이 변경합니다. 2차원으로 바꿀 때에는 num_list의 원소들을 앞에서부터 n개씩 나눠 2차원 배열로 변경합니다.</p>
<table class="table">
        <thead><tr>
<th>num_list</th>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 3, 4, 5, 6, 7, 8]</td>
<td>2</td>
<td>[[1, 2], [3, 4], [5, 6], [7, 8]]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>제한사항</h5>

<ul>
<li><code>num_list</code>의 길이는&nbsp;<code>n</code>의 배 수개입니다.</li>
<li>0 ≤ <code>num_list</code>의 길이 ≤ 150</li>
<li>2 ≤ <code>n</code> &lt; <code>num_list</code>의 길이</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>num_list</th>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 3, 4, 5, 6, 7, 8]</td>
<td>2</td>
<td>[[1, 2], [3, 4], [5, 6], [7, 8]]</td>
</tr>
<tr>
<td>[100, 95, 2, 4, 5, 6, 18, 33, 948]</td>
<td>3</td>
<td>[[100, 95, 2], [4, 5, 6], [18, 33, 948]]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>num_list</code>가 [1, 2, 3, 4, 5, 6, 7, 8] 로 길이가 8이고 <code>n</code>이 2이므로 2 * 4 배열로 변경한 [[1, 2], [3, 4], [5, 6], [7, 8]] 을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>num_list</code>가 [100, 95, 2, 4, 5, 6, 18, 33, 948] 로 길이가 9이고 <code>n</code>이 3이므로 3 * 3 배열로 변경한 [[100, 95, 2], [4, 5, 6], [18, 33, 948]] 을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges