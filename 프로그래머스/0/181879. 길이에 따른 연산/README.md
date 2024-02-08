# [level 0] 길이에 따른 연산 - 181879 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181879) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 4일 20:28:7

### 문제 설명

<p>정수가 담긴 리스트 <code>num_list</code>가 주어질 때, 리스트의 길이가 11 이상이면 리스트에 있는 모든 원소의 합을 10 이하이면 모든 원소의 곱을 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>2 ≤ <code>num_list</code>의 길이 ≤ 20</li>
<li>1 ≤ <code>num_list</code>의 원소 ≤ 9</li>
<li><code>num_list</code>의 원소를 모두 곱했을 때&nbsp;2,147,483,647를 넘는 입력은 주어지지 않습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>num_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[3, 4, 5, 2, 5, 4, 6, 7, 3, 7, 2, 2, 1]</td>
<td>51</td>
</tr>
<tr>
<td>[2, 3, 4, 5]</td>
<td>120</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>리스트의 길이가 13이므로 모든 원소의 합인 51을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>리스트의 길이가 4이므로 모든 원소의 곱인 120을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges