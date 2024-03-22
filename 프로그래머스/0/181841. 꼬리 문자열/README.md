# [level 0] 꼬리 문자열 - 181841 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181841) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 23일 00:03:44

### 문제 설명

<p>문자열들이 담긴 리스트가 주어졌을 때, 모든 문자열들을 순서대로 합친 문자열을 꼬리 문자열이라고 합니다. 꼬리 문자열을 만들 때 특정 문자열을 포함한 문자열은 제외시키려고 합니다. 예를 들어 문자열 리스트 ["abc", "def", "ghi"]가 있고 문자열 "ef"를 포함한 문자열은 제외하고 꼬리 문자열을 만들면 "abcghi"가 됩니다.</p>

<p>문자열 리스트 <code>str_list</code>와 제외하려는 문자열 <code>ex</code>가 주어질 때, <code>str_list</code>에서 <code>ex</code>를 포함한 문자열을 제외하고 만든 꼬리 문자열을 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>2 ≤ <code>str_list</code>의 길이 ≤ 10</li>
<li>1 ≤ <code>str_list</code>의 원소의 길이 ≤ 10</li>
<li>1 ≤ <code>ex</code>의 길이 ≤ 5</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>str_list</th>
<th>ex</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["abc", "def", "ghi"]</td>
<td>"ef"</td>
<td>"abcghi"</td>
</tr>
<tr>
<td>["abc", "bbc", "cbc"]</td>
<td>"c"</td>
<td>""</td>
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
<li>리스트 안의 모든 문자열이 "c"를 포함하므로 빈 문자열을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges