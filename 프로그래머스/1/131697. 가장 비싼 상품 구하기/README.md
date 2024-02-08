# [level 1] 가장 비싼 상품 구하기 - 131697 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131697) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SUM， MAX， MIN

### 채점결과

Empty

### 제출 일자

2024년 2월 5일 0:51:9

### 문제 설명

<p>다음은 어느 의류 쇼핑몰에서 판매 중인 상품들의 정보를 담은 <code>PRODUCT</code> 테이블입니다. <code>PRODUCT</code> 테이블은 아래와 같은 구조로 되어있으며, <code>PRODUCT_ID</code>, <code>PRODUCT_CODE</code>, <code>PRICE</code>는 각각 상품 ID, 상품코드, 판매가를 나타냅니다.</p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>PRODUCT_ID</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
<tr>
<td>PRODUCT_CODE</td>
<td>VARCHAR(8)</td>
<td>FALSE</td>
</tr>
<tr>
<td>PRICE</td>
<td>INTEGER</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p>상품 별로 중복되지 않는 8자리 상품코드 값을 가지며, 앞 2자리는 카테고리 코드를 의미합니다.</p>

<hr>

<h5>문제</h5>

<p><code>PRODUCT</code> 테이블에서 판매 중인 상품 중 가장 높은 판매가를 출력하는 SQL문을 작성해주세요. 이때 컬럼명은 MAX_PRICE로 지정해주세요.</p>

<hr>

<h5>예시</h5>

<p>예를 들어 <code>PRODUCT</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>PRODUCT_ID</th>
<th>PRODUCT_CODE</th>
<th>PRICE</th>
</tr>
</thead>
        <tbody><tr>
<td>1</td>
<td>A1000001</td>
<td>10000</td>
</tr>
<tr>
<td>2</td>
<td>A2000005</td>
<td>9000</td>
</tr>
<tr>
<td>3</td>
<td>C1000006</td>
<td>22000</td>
</tr>
</tbody>
      </table>
<p>가장 높은 판매가는 22,000 원 이므로, 다음과 같은 결과가 나와야 합니다.</p>
<table class="table">
        <thead><tr>
<th>MAX_PRICE</th>
</tr>
</thead>
        <tbody><tr>
<td>22000</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges