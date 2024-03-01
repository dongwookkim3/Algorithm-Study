# [level 0] 5명씩 - 181886 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181886) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 02일 04:35:06

### 문제 설명

<p>최대 5명씩 탑승가능한 놀이기구를 타기 위해 줄을 서있는 사람들의 이름이 담긴 문자열 리스트 <code>names</code>가 주어질 때, 앞에서 부터 5명씩 묶은 그룹의 가장 앞에 서있는 사람들의 이름을 담은 리스트를 return하도록 solution 함수를 완성해주세요. 마지막 그룹이 5명이 되지 않더라도 가장 앞에 있는 사람의 이름을 포함합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>5 ≤ <code>names</code>의 길이 ≤ 30</li>
<li>1 ≤ <code>names</code>의 원소의 길이 ≤ 10</li>
<li><code>names</code>의 원소는 영어 알파벳 소문자로만 이루어져 있습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>names</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"]</td>
<td>["nami", "vex"]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>앞에서부터 5명씩 두 그룹으로 묶을 수 있습니다. ["nami", "ahri", "jayce", "garen", "ivern"], ["vex", "jinx"] 이 두 그룹에서 가장 앞에 서있는 사람들의 이름을 담은 리스트인 ["nami", "vex"]를 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges