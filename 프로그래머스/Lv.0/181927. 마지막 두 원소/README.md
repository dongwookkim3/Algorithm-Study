# [level Lv.0] 마지막 두 원소 - 181927 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181927) 

### 성능 요약

메모리: 4.11 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 20:52:27

### 문제 설명

<p>정수 리스트 <code>num_list</code>가 주어질 때, 마지막 원소가 그전 원소보다 크면 마지막 원소에서 그전 원소를 뺀 값을 마지막 원소가 그전 원소보다 크지 않다면 마지막 원소를 두 배한 값을 추가하여 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>2 ≤ <code>num_list</code>의 길이 ≤ 10</li>
<li>1 ≤ <code>num_list</code>의 원소 ≤ 9</li>
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
<td>[2, 1, 6]</td>
<td>[2, 1, 6, 5]</td>
</tr>
<tr>
<td>[5, 2, 1, 7, 5]</td>
<td>[5, 2, 1, 7, 5, 10]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>마지막 원소인 6이 그전 원소인 1보다 크기 때문에 6 - 1인 5를 추가해 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>마지막 원소인 5가 그전 원소인 7보다 크지 않기 때문에 5의 두 배인 10을 추가해 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges