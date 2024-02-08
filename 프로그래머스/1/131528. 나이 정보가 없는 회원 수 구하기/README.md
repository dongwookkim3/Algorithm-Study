# [level 1] 나이 정보가 없는 회원 수 구하기 - 131528 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131528) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > IS NULL

### 채점결과

Empty

### 제출 일자

2024년 2월 5일 0:47:56

### 문제 설명

<p>다음은 어느 의류 쇼핑몰에 가입한 회원 정보를 담은 <code>USER_INFO</code> 테이블입니다. <code>USER_INFO</code> 테이블은 아래와 같은 구조로 되어있으며, <code>USER_ID</code>, <code>GENDER</code>, <code>AGE</code>, <code>JOINED</code>는 각각 회원 ID, 성별, 나이, 가입일을 나타냅니다.</p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>USER_ID</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
<tr>
<td>GENDER</td>
<td>TINYINT(1)</td>
<td>TRUE</td>
</tr>
<tr>
<td>AGE</td>
<td>INTEGER</td>
<td>TRUE</td>
</tr>
<tr>
<td>JOINED</td>
<td>DATE</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p><code>GENDER</code> 컬럼은 비어있거나 0 또는 1의 값을 가지며 0인 경우 남자를, 1인 경우는 여자를 나타냅니다.</p>

<hr>

<h5>문제</h5>

<p><code>USER_INFO</code> 테이블에서 나이 정보가 없는 회원이 몇 명인지 출력하는 SQL문을 작성해주세요. 이때 컬럼명은 USERS로 지정해주세요.</p>

<hr>

<h5>예시</h5>

<p>예를 들어 <code>USER_INFO</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>USER_ID</th>
<th>GENDER</th>
<th>AGE</th>
<th>JOINED</th>
</tr>
</thead>
        <tbody><tr>
<td>1</td>
<td>1</td>
<td>26</td>
<td>2021-06-01</td>
</tr>
<tr>
<td>2</td>
<td>NULL</td>
<td>NULL</td>
<td>2021-07-25</td>
</tr>
<tr>
<td>3</td>
<td>1</td>
<td>NULL</td>
<td>2021-07-30</td>
</tr>
<tr>
<td>4</td>
<td>0</td>
<td>31</td>
<td>2021-08-03</td>
</tr>
</tbody>
      </table>
<p>나이 정보가 없는 회원은 2명 이므로, 다음과 같은 결과가 나와야 합니다.</p>
<table class="table">
        <thead><tr>
<th>USERS</th>
</tr>
</thead>
        <tbody><tr>
<td>2</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges