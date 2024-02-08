# [level 0] n보다 커질 때까지 더하기 - 181884 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181884) 

### 성능 요약

메모리: 4.07 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 2월 4일 20:21:50

### 문제 설명

<p>정수 배열 <code>numbers</code>와 정수 <code>n</code>이 매개변수로 주어집니다. <code>numbers</code>의 원소를 앞에서부터 하나씩 더하다가 그 합이 <code>n</code>보다 커지는 순간 이때까지 더했던 원소들의 합을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>numbers</code>의 길이 ≤ 100</li>
<li>1 ≤ <code>numbers</code>의 원소 ≤ 100</li>
<li>0 ≤ n &lt; <code>numbers</code>의 모든 원소의 합</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>numbers</th>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[34, 5, 71, 29, 100, 34]</td>
<td>123</td>
<td>139</td>
</tr>
<tr>
<td>[58, 44, 27, 10, 100]</td>
<td>139</td>
<td>239</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번의 <code>numbers</code>를 문제 설명대로 더해가는 과정을 나타내면 다음의 표와 같습니다.</p>
<table class="table">
        <thead><tr>
<th>i</th>
<th>numbers[i]</th>
<th>sum</th>
</tr>
</thead>
        <tbody><tr>
<td></td>
<td></td>
<td>0</td>
</tr>
<tr>
<td>0</td>
<td>34</td>
<td>34</td>
</tr>
<tr>
<td>1</td>
<td>5</td>
<td>39</td>
</tr>
<tr>
<td>2</td>
<td>71</td>
<td>110</td>
</tr>
<tr>
<td>3</td>
<td>29</td>
<td>139</td>
</tr>
</tbody>
      </table>
<p>29를 더한 뒤에 sum 값은 139이고 <code>n</code> 값인 123보다 크므로 139를 return 합니다.</p></li>
<li><p>예제 2번의 <code>numbers</code>의 마지막 원소 전까지의 원소를 sum에 더하면 139입니다. 139는 <code>n</code> 값인 139보다 크지 않고 마지막 원소인 100을 더하면 139보다 커지므로 239를 return 합니다.</p></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges