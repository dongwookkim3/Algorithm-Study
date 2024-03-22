# [level 0] 배열의 원소 삭제하기 - 181844 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181844) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 23일 00:06:56

### 문제 설명

<p>정수 배열 <code>arr</code>과 <code>delete_list</code>가 있습니다. <code>arr</code>의 원소 중 <code>delete_list</code>의 원소를 모두 삭제하고 남은 원소들은 기존의 <code>arr</code>에 있던 순서를 유지한 배열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>arr</code>의 원소 ≤ 1,000</li>
<li><code>arr</code>의 원소는 모두 서로 다릅니다.</li>
<li>1 ≤ <code>delete_list</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>delete_list</code>의 원소 ≤ 1,000</li>
<li><code>delete_list</code>의 원소는 모두 서로 다릅니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>delete_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[293, 1000, 395, 678, 94]</td>
<td>[94, 777, 104, 1000, 1, 12]</td>
<td>[293, 395, 678]</td>
</tr>
<tr>
<td>[110, 66, 439, 785, 1]</td>
<td>[377, 823, 119, 43]</td>
<td>[110, 66, 439, 785, 1]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>arr</code>의 원소 중 1000과 94가 <code>delete_list</code>에 있으므로 이 두 원소를 삭제한 [293, 395, 678]을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번의 <code>arr</code>의 원소 중 <code>delete_list</code>에 있는 원소는 없습니다. 따라서 <code>arr</code> 그대로인 [110, 66, 439, 785, 1]을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges