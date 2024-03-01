# [level 0] 배열의 길이에 따라 다른 연산하기 - 181854 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181854) 

### 성능 요약

메모리: 4.2 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 02일 04:28:23

### 문제 설명

<p>정수 배열 <code>arr</code>과 정수 <code>n</code>이 매개변수로 주어집니다. <code>arr</code>의 길이가 홀수라면 <code>arr</code>의 모든 짝수 인덱스 위치에 <code>n</code>을 더한 배열을, <code>arr</code>의 길이가 짝수라면 <code>arr</code>의 모든 홀수 인덱스 위치에 <code>n</code>을 더한 배열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 1,000</li>
<li>1 ≤ <code>arr</code>의 원소 ≤ 1,000</li>
<li>1 ≤ <code>n</code> ≤ 1,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[49, 12, 100, 276, 33]</td>
<td>27</td>
<td>[76, 12, 127, 276, 60]</td>
</tr>
<tr>
<td>[444, 555, 666, 777]</td>
<td>100</td>
<td>[444, 655, 666, 877]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번의 <code>arr</code>의 길이는 5로 홀수입니다. 따라서 <code>arr</code>의 짝수 인덱스 0, 2, 4에 주어진 <code>n</code> 값인 27을 더하면 [76, 12, 127, 276, 60]이 됩니다. 따라서 [76, 12, 127, 276, 60]를 return 합니다.</li>
</ul>

<p>입출력 예 #1</p>

<ul>
<li>예제 2번의 <code>arr</code>의 길이는 4로 짝수입니다. 따라서 <code>arr</code>의 홀수 인덱스 1, 3에 주어진 <code>n</code> 값인 100을 더하면 [444, 655, 666, 877]이 됩니다. 따라서 [444, 655, 666, 877]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges