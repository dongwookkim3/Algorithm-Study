# [Bronze II] 저항 - 1076 

[문제 링크](https://www.acmicpc.net/problem/1076) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

구현

### 문제 설명

<p>전자 제품에는 저항이 들어간다. 저항은 색 3개를 이용해서 그 저항이 몇 옴인지 나타낸다. 처음 색 2개는 저항의 값이고, 마지막 색은 곱해야 하는 값이다. 저항의 값은 다음 표를 이용해서 구한다.</p>

<table class="table table-bordered table-center-30">
	<thead>
		<tr>
			<th style="width:10%">색</th>
			<th style="width:10%">값</th>
			<th style="width:10%">곱</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>black</td>
			<td>0</td>
			<td>1</td>
		</tr>
		<tr>
			<td>brown</td>
			<td>1</td>
			<td>10</td>
		</tr>
		<tr>
			<td>red</td>
			<td>2</td>
			<td>100</td>
		</tr>
		<tr>
			<td>orange</td>
			<td>3</td>
			<td>1,000</td>
		</tr>
		<tr>
			<td>yellow</td>
			<td>4</td>
			<td>10,000</td>
		</tr>
		<tr>
			<td>green</td>
			<td>5</td>
			<td>100,000</td>
		</tr>
		<tr>
			<td>blue</td>
			<td>6</td>
			<td>1,000,000</td>
		</tr>
		<tr>
			<td>violet</td>
			<td>7</td>
			<td>10,000,000</td>
		</tr>
		<tr>
			<td>grey</td>
			<td>8</td>
			<td>100,000,000</td>
		</tr>
		<tr>
			<td>white</td>
			<td>9</td>
			<td>1,000,000,000</td>
		</tr>
	</tbody>
</table>

<p>예를 들어, 저항의 색이 yellow, violet, red였다면 저항의 값은 4,700이 된다.</p>

### 입력 

 <p>첫째 줄에 첫 번째 색, 둘째 줄에 두 번째 색, 셋째 줄에 세 번째 색이 주어진다. 위의 표에 있는 색만 입력으로 주어진다.</p>

### 출력 

 <p>입력으로 주어진 저항의 저항값을 계산하여 첫째 줄에 출력한다.</p>

