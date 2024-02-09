# [level 0] 할 일 목록 - 181885 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181885) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.04 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 22:19:10

### 문제 설명

<p>오늘 해야 할 일이 담긴 문자열 배열 <code>todo_list</code>와 각각의 일을 지금 마쳤는지를 나타내는 boolean 배열 <code>finished</code>가 매개변수로 주어질 때, <code>todo_list</code>에서 아직 마치지 못한 일들을 순서대로 담은 문자열 배열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>todo_list</code>의 길이 1 ≤ 100</li>
<li>2 ≤ <code>todo_list</code>의 원소의 길이 ≤ 20

<ul>
<li><code>todo_list</code>의 원소는 영소문자로만 이루어져 있습니다.</li>
<li><code>todo_list</code>의 원소는 모두 서로 다릅니다.</li>
</ul></li>
<li><code>finished[i]</code>는 true 또는 false이고 true는 <code>todo_list[i]</code>를 마쳤음을, false는 아직 마치지 못했음을 나타냅니다.</li>
<li>아직 마치지 못한 일이 적어도 하나 있습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>todo_list</th>
<th>finished</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["problemsolving", "practiceguitar", "swim", "studygraph"]</td>
<td>[true, false, true, false]</td>
<td>["practiceguitar", "studygraph"]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>todo_list</code> 중에서 "problemsolving"과 "swim"은 마쳤고, "practiceguitar"와 "studygraph"는 아직 마치지 못했으므로 <code>todo_list</code>에서 나온 순서대로 담은 문자열 배열 ["practiceguitar", "studygraph"]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges