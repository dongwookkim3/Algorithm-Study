# [Bronze III] 상금 헌터 - 15953 

[문제 링크](https://www.acmicpc.net/problem/15953) 

### 성능 요약

메모리: 2020 KB, 시간: 44 ms

### 분류

사칙연산, 많은 조건 분기, 구현, 수학

### 제출 일자

2024년 2월 1일 22:05:08

### 문제 설명

<p>2017년에 이어, 2018년에도 카카오 코드 페스티벌이 개최된다!</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/0113dbfe-8ca8-42b8-9a2c-94e136006b75/-/preview/"></p>

<p>카카오 코드 페스티벌에서 빠질 수 없는 것은 바로 상금이다. 2017년에 개최된 제1회 코드 페스티벌에서는, 본선 진출자 100명 중 21명에게 아래와 같은 기준으로 상금을 부여하였다.</p>

<div class="table-responsive">
<table class="table table-bordered">
	<thead>
		<tr>
			<th>순위</th>
			<th>상금</th>
			<th>인원</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>1등</td>
			<td>500만원</td>
			<td>1명</td>
		</tr>
		<tr>
			<td>2등</td>
			<td>300만원</td>
			<td>2명</td>
		</tr>
		<tr>
			<td>3등</td>
			<td>200만원</td>
			<td>3명</td>
		</tr>
		<tr>
			<td>4등</td>
			<td>50만원</td>
			<td>4명</td>
		</tr>
		<tr>
			<td>5등</td>
			<td>30만원</td>
			<td>5명</td>
		</tr>
		<tr>
			<td>6등</td>
			<td>10만원</td>
			<td>6명</td>
		</tr>
	</tbody>
</table>
</div>

<p>2018년에 개최될 제2회 코드 페스티벌에서는 상금의 규모가 확대되어, 본선 진출자 64명 중 31명에게 아래와 같은 기준으로 상금을 부여할 예정이다.</p>

<div class="table-responsive">
<table class="table table-bordered">
	<thead>
		<tr>
			<th>순위</th>
			<th>상금</th>
			<th>인원</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>1등</td>
			<td>512만원</td>
			<td>1명</td>
		</tr>
		<tr>
			<td>2등</td>
			<td>256만원</td>
			<td>2명</td>
		</tr>
		<tr>
			<td>3등</td>
			<td>128만원</td>
			<td>4명</td>
		</tr>
		<tr>
			<td>4등</td>
			<td>64만원</td>
			<td>8명</td>
		</tr>
		<tr>
			<td>5등</td>
			<td>32만원</td>
			<td>16명</td>
		</tr>
	</tbody>
</table>
</div>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/2ff64533-7387-4294-8dce-03ba3d35b7d4/-/preview/"></p>

<p>제이지는 자신이 코드 페스티벌에 출전하여 받을 수 있을 상금이 얼마인지 궁금해졌다. 그는 자신이 두 번의 코드 페스티벌 본선 대회에서 얻을 수 있을 총 상금이 얼마인지 알아보기 위해, 상상력을 발휘하여 아래와 같은 가정을 하였다.</p>

<ul>
	<li>
	<p>제1회 코드 페스티벌 본선에 진출하여 <em>a</em>등(1 ≤ <em>a</em> ≤ 100)등을 하였다. 단, 진출하지 못했다면 <em>a</em> = 0으로 둔다.</p>
	</li>
	<li>
	<p>제2회 코드 페스티벌 본선에 진출하여 <em>b</em>등(1 ≤ <em>b</em> ≤ 64)등을 할 것이다. 단, 진출하지 못했다면 <em>b</em> = 0으로 둔다.</p>
	</li>
</ul>

<p>제이지는 이러한 가정에 따라, 자신이 받을 수 있는 총 상금이 얼마인지를 알고 싶어한다.</p>

### 입력 

 <p>첫 번째 줄에 제이지가 상상력을 발휘하여 가정한 횟수 <em>T</em>(1 ≤ T ≤ 1,000)가 주어진다.</p>

<p>다음 <em>T</em>개 줄에는 한 줄에 하나씩 제이지가 해본 가정에 대한 정보가 주어진다. 각 줄에는 두 개의 음이 아닌 정수 <em>a</em>(0 ≤ <em>a</em> ≤ 100)와 <em>b</em>(0 ≤ <em>b</em> ≤ 64)가 공백 하나를 사이로 두고 주어진다.</p>

### 출력 

 <p>각 가정이 성립할 때 제이지가 받을 상금을 원 단위의 정수로 한 줄에 하나씩 출력한다. 입력이 들어오는 순서대로 출력해야 한다.</p>

