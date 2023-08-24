# [unrated] 조건에 부합하는 중고거래 댓글 조회하기 - 164673 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/164673) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SELECT

### 채점결과

Empty

### 문제 설명

<p>다음은 중고거래 게시판 정보를 담은 <code>USED_GOODS_BOARD</code> 테이블과 중고거래 게시판 첨부파일 정보를 담은 <code>USED_GOODS_REPLY</code> 테이블입니다. <code>USED_GOODS_BOARD</code> 테이블은 다음과 같으며 <code>BOARD_ID</code>, <code>WRITER_ID</code>, <code>TITLE</code>, <code>CONTENTS</code>, <code>PRICE</code>, <code>CREATED_DATE</code>, <code>STATUS</code>, <code>VIEWS</code>은 게시글 ID, 작성자 ID, 게시글 제목, 게시글 내용, 가격, 작성일, 거래상태, 조회수를 의미합니다.</p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>BOARD_ID</td>
<td>VARCHAR(5)</td>
<td>FALSE</td>
</tr>
<tr>
<td>WRITER_ID</td>
<td>VARCHAR(50)</td>
<td>FALSE</td>
</tr>
<tr>
<td>TITLE</td>
<td>VARCHAR(100)</td>
<td>FALSE</td>
</tr>
<tr>
<td>CONTENTS</td>
<td>VARCHAR(1000)</td>
<td>FALSE</td>
</tr>
<tr>
<td>PRICE</td>
<td>NUMBER</td>
<td>FALSE</td>
</tr>
<tr>
<td>CREATED_DATE</td>
<td>DATE</td>
<td>FALSE</td>
</tr>
<tr>
<td>STATUS</td>
<td>VARCHAR(10)</td>
<td>FALSE</td>
</tr>
<tr>
<td>VIEWS</td>
<td>NUMBER</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p><code>USED_GOODS_REPLY</code> 테이블은 다음과 같으며 <code>REPLY_ID</code>, <code>BOARD_ID</code>, <code>WRITER_ID</code>, <code>CONTENTS</code>, <code>CREATED_DATE</code>는 각각 댓글 ID, 게시글 ID, 작성자 ID, 댓글 내용, 작성일을 의미합니다.</p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>REPLY_ID</td>
<td>VARCHAR(10)</td>
<td>FALSE</td>
</tr>
<tr>
<td>BOARD_ID</td>
<td>VARCHAR(5)</td>
<td>FALSE</td>
</tr>
<tr>
<td>WRITER_ID</td>
<td>VARCHAR(50)</td>
<td>FALSE</td>
</tr>
<tr>
<td>CONTENTS</td>
<td>VARCHAR(1000)</td>
<td>TRUE</td>
</tr>
<tr>
<td>CREATED_DATE</td>
<td>DATE</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<hr>

<h5>문제</h5>

<p><code>USED_GOODS_BOARD</code>와 <code>USED_GOODS_REPLY</code> 테이블에서 2022년 10월에 작성된 게시글 제목, 게시글  ID, 댓글 ID, 댓글 작성자 ID, 댓글 내용, 댓글 작성일을 조회하는 SQL문을 작성해주세요. 결과는 댓글 작성일을 기준으로 오름차순 정렬해주시고, 댓글 작성일이 같다면 게시글  제목을 기준으로 오름차순 정렬해주세요.</p>

<hr>

<h5>예시</h5>

<p><code>USED_GOODS_BOARD</code> 테이블이 다음과 같고</p>
<table class="table">
        <thead><tr>
<th>BOARD_ID</th>
<th>WRITER_ID</th>
<th>TITLE</th>
<th>CONTENTS</th>
<th>PRICE</th>
<th>CREATED_DATE</th>
<th>STATUS</th>
<th>VIEWS</th>
</tr>
</thead>
        <tbody><tr>
<td>B0001</td>
<td>kwag98</td>
<td>반려견 배변패드 팝니다</td>
<td>정말 저렴히 판매합니다. 전부 미개봉 새상품입니다.</td>
<td>12000</td>
<td>2022-10-01</td>
<td>DONE</td>
<td>250</td>
</tr>
<tr>
<td>B0002</td>
<td>lee871201</td>
<td>국내산 볶음참깨</td>
<td>직접 농사지은 참깨입니다.</td>
<td>3000</td>
<td>2022-10-02</td>
<td>DONE</td>
<td>121</td>
</tr>
<tr>
<td>B0003</td>
<td>goung12</td>
<td>배드민턴 라켓</td>
<td>사놓고 방치만 해서 팝니다.</td>
<td>9000</td>
<td>2022-10-02</td>
<td>SALE</td>
<td>212</td>
</tr>
<tr>
<td>B0004</td>
<td>keel1990</td>
<td>디올 귀걸이</td>
<td>신세계강남점에서 구입. 정품 아닐시 백퍼센트 환불</td>
<td>130000</td>
<td>2022-10-02</td>
<td>SALE</td>
<td>199</td>
</tr>
<tr>
<td>B0005</td>
<td>haphli01</td>
<td>스팸클래식 팔아요</td>
<td>유통기한 2025년까지에요</td>
<td>10000</td>
<td>2022-10-02</td>
<td>SALE</td>
<td>121</td>
</tr>
</tbody>
      </table>
<p><code>USED_GOODS_REPLY</code> 테이블이 다음과 같을 때</p>
<table class="table">
        <thead><tr>
<th>REPLY_ID</th>
<th>BOARD_ID</th>
<th>WRITER_ID</th>
<th>CONTENTS</th>
<th>CREATED_DATE</th>
</tr>
</thead>
        <tbody><tr>
<td>R000000001</td>
<td>B0001</td>
<td>s2s2123</td>
<td>구매하겠습니다. 쪽지 드립니다.</td>
<td>2022-10-02</td>
</tr>
<tr>
<td>R000000002</td>
<td>B0002</td>
<td>hoho1112</td>
<td>쪽지 주세요.</td>
<td>2022-10-03</td>
</tr>
<tr>
<td>R000000003</td>
<td>B0006</td>
<td>hwahwa2</td>
<td>삽니다. 연락주세요.</td>
<td>2022-10-03</td>
</tr>
<tr>
<td>R000000004</td>
<td>B0007</td>
<td>hong02</td>
<td>예약중</td>
<td>2022-10-06</td>
</tr>
<tr>
<td>R000000005</td>
<td>B0009</td>
<td>hanju23</td>
<td>구매완료</td>
<td>2022-10-07</td>
</tr>
</tbody>
      </table>
<p>SQL을 실행하면 다음과 같이 출력되어야 합니다.</p>
<table class="table">
        <thead><tr>
<th>TITLE</th>
<th>BOARD_ID</th>
<th>REPLY_ID</th>
<th>WRITER_ID</th>
<th>CONTENTS</th>
<th>CREATED_DATE</th>
</tr>
</thead>
        <tbody><tr>
<td>반려견 배변패드 팝니다</td>
<td>B0001</td>
<td>R000000001</td>
<td>s2s2123</td>
<td>구매하겠습니다. 쪽지 드립니다.</td>
<td>2022-10-02</td>
</tr>
<tr>
<td>국내산 볶음참깨</td>
<td>B0002</td>
<td>R000000002</td>
<td>hoho1112</td>
<td>쪽지 주세요.</td>
<td>2022-10-03</td>
</tr>
</tbody>
      </table>
<hr>

<h5>주의사항</h5>

<p><code>CREATED_DATE</code>의 포맷이 예시의 포맷과 일치해야 정답처리 됩니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://programmers.co.kr/learn/challenges