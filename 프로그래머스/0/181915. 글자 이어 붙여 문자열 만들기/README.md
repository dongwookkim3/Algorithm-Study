# [level 0] 글자 이어 붙여 문자열 만들기 - 181915 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181915) 

### 성능 요약

메모리: 3.67 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 21:36:47

### 문제 설명

<p>문자열 <code>my_string</code>과 정수 배열 <code>index_list</code>가 매개변수로 주어집니다. <code>my_string</code>의 <code>index_list</code>의 원소들에 해당하는 인덱스의 글자들을 순서대로 이어 붙인 문자열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>my_string</code>의 길이 ≤ 1,000</li>
<li><code>my_string</code>의 원소는 영소문자로 이루어져 있습니다.</li>
<li>1 ≤ <code>index_list</code>의 길이 ≤ 1,000</li>
<li>0 ≤ <code>index_list</code>의 원소 &lt; <code>my_string</code>의 길이</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>my_string</th>
<th>index_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"cvsgiorszzzmrpaqpe"</td>
<td>[16, 6, 5, 3, 12, 14, 11, 11, 17, 12, 7]</td>
<td>"programmers"</td>
</tr>
<tr>
<td>"zpiaz"</td>
<td>[1, 2, 0, 0, 3]</td>
<td>"pizza"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>my_string</code>에서 인덱스 3, 5, 6, 11, 12, 14, 16, 17에 해당하는 글자는 각각 g, o, r, m, r, a, p, e이므로 <code>my_string</code>에서 <code>index_list</code>에 들어있는 원소에 해당하는 인덱스의 글자들은 각각 순서대로 p, r, o, g, r, a, m, m, e, r, s입니다. 따라서 "programmers"를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>my_string</code>에서 인덱스 0, 1, 2, 3에 해당하는 글자는 각각 z, p, i, a이므로 <code>my_string</code>에서 <code>index_list</code>에 들어있는 원소에 해당하는 인덱스의 글자들은 각각 순서대로 p, i, z, z, a입니다. 따라서 "pizza"를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges