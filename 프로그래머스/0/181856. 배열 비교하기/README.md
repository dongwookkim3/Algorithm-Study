# [level 0] 배열 비교하기 - 181856 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181856) 

### 성능 요약

메모리: 3.67 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 5일 21:53:2

### 문제 설명

<p>이 문제에서 두 정수 배열의 대소관계를 다음과 같이 정의합니다.</p>

<ul>
<li>두 배열의 길이가 다르다면, 배열의 길이가 긴 쪽이 더 큽니다.</li>
<li>배열의 길이가 같다면 각 배열에 있는 모든 원소의 합을 비교하여 다르다면 더 큰 쪽이 크고, 같다면 같습니다.</li>
</ul>

<p>두 정수 배열 <code>arr1</code>과 <code>arr2</code>가 주어질 때, 위에서 정의한 배열의 대소관계에 대하여 <code>arr2</code>가 크다면 -1, <code>arr1</code>이 크다면 1, 두 배열이 같다면 0을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr1</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>arr2</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>arr1</code>의 원소 ≤ 100</li>
<li>1 ≤ <code>arr2</code>의 원소 ≤ 100</li>
<li>문제에서 정의한 배열의 대소관계가 일반적인 프로그래밍 언어에서 정의된 배열의 대소관계와 다를 수 있는 점에 유의해주세요.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr1</th>
<th>arr2</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[49, 13]</td>
<td>[70, 11, 2]</td>
<td>-1</td>
</tr>
<tr>
<td>[100, 17, 84, 1]</td>
<td>[55, 12, 65, 36]</td>
<td>1</td>
</tr>
<tr>
<td>[1, 2, 3, 4, 5]</td>
<td>[3, 3, 3, 3, 3]</td>
<td>0</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번에서는 <code>arr1</code>의 길이는 2이고 <code>arr2</code>의 길이는 3으로 <code>arr2</code>의 길이가 더 깁니다. 따라서 <code>arr2</code>가 <code>arr1</code>보다 크므로 -1을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번에서는 <code>arr1</code>의 길이과 <code>arr2</code>의 길이가 4로 같습니다. <code>arr1</code>의 모든 원소의 합은 100 + 17 + 84 + 1 = 202이고 <code>arr2</code>의 모든 원소의 합은 55 + 12 + 65 + 36 = 168으로 <code>arr1</code>의 모든 원소의 합이 더 큽니다. 따라서 <code>arr1</code>이 <code>arr2</code>보다 크므로 1을 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>예제 3번에서는 <code>arr1</code>의 길이와 <code>arr2</code>의 길이가 5로 같고 각 배열의 모든 원소의 합 또한 15로 같습니다. 따라서 <code>arr1</code>과 <code>arr2</code>가 같으므로 0을 return 합니다.</li>
</ul>

<hr>

<p>※ 공지 - 2023년 4월 21일 테스트케이스가 추가되었습니다. 기존에 제출한 코드가 통과하지 못할 수도 있습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges