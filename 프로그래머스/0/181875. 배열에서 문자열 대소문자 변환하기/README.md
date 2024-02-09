# [level 0] 배열에서 문자열 대소문자 변환하기 - 181875 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181875) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 14:5:58

### 문제 설명

<p>문자열 배열 <code>strArr</code>가 주어집니다. 모든 원소가 알파벳으로만 이루어져 있을 때, 배열에서 홀수번째 인덱스의 문자열은 모든 문자를 대문자로, 짝수번째 인덱스의 문자열은 모든 문자를 소문자로 바꿔서 반환하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>strArr</code> ≤ 20

<ul>
<li>1 ≤ <code>strArr</code>의 원소의 길이 ≤ 20</li>
<li><code>strArr</code>의 원소는 알파벳으로 이루어진 문자열 입니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>strArr</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["AAA","BBB","CCC","DDD"]</td>
<td>["aaa","BBB","ccc","DDD"]</td>
</tr>
<tr>
<td>["aBc","AbC"]</td>
<td>["abc","ABC"]</td>
</tr>
</tbody>
      </table>
<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>strArr[0]</code>과 <code>strArr[2]</code>는 짝수번째 인덱스의 문자열이므로 모두 소문자로 바꿔서 "aaa"와 "ccc"가 됩니다.</li>
<li><code>strArr[1]</code>과 <code>strArr[3]</code>는 홀수번째 인덱스의 문자열인데 원래 대문자이므로 그대로 둡니다.</li>
<li>따라서 ["aaa","BBB","ccc","DDD"]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>strArr[0]</code>은 짝수번째 인덱스의 문자열이므로 소문자로 바꿔서 "abc"가 됩니다.</li>
<li><code>strArr[1]</code>은 홀수번째 인덱스의 문자열이므로 대문자로 바꿔서 "ABC"가 됩니다.</li>
<li>따라서 ["abc","ABC"]를 return 합니다.</li>
</ul>

<p>※ 2023년 05월 15일 제한사항이 수정되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges