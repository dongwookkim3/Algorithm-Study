# [Bronze III] 심준의 병역판정검사 - 25285 

[문제 링크](https://www.acmicpc.net/problem/25285) 

### 성능 요약

메모리: 2020 KB, 시간: 8 ms

### 분류

많은 조건 분기, 구현

### 제출 일자

2024년 3월 20일 00:14:31

### 문제 설명

<p>병역판정검사는 병역의무자들의 상태를 검사해 징병 여부와 징병 시 어느 방향으로 복무를 시키는 게 좋을지 판정하는 검사로, 남성들은 만 19세가 되는 해에 모두 병역판정검사를 받는다. 신체 등급이 1급부터 3급인 사람은 현역 입영 대상, 4급은 보충역, 5급은 전시근로역, 6급은 병역면제 처분을 받는다.</p>

<p>올해 20살이 된 준이와 친구들은 병역판정검사를 받아야 한다. 준이와 친구들은 매우 건강하기 때문에 다른 질병의 유무와 관계 없이 신장 및 체중으로만 신체 등급이 결정된다. 준이와 친구들의 신장과 체중이 주어지면 아래 표를 참고해 신체 등급을 알려주자.</p>

<table border="1" cellpadding="1" cellspacing="1" class="table table-bordered" style="width: 1500px; margin-left: auto; margin-right: auto;">
	<caption>
	<p style="text-align: center;">단위: BMI(체중kg/신장m<sup>2</sup>)</p>
	</caption>
	<thead>
		<tr>
			<th scope="row" style="text-align: center;">↓신장(cm), 등급 →</th>
			<th scope="col" style="text-align: center;">1급</th>
			<th scope="col" style="text-align: center;">2급</th>
			<th scope="col" style="text-align: center;">3급</th>
			<th scope="col" style="text-align: center;">4급</th>
			<th scope="col" style="text-align: center;">5급</th>
			<th scope="col" style="text-align: center;">6급</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<th scope="row" style="text-align: center;">140.1 미만</th>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td>
			<p style="text-align: center;">체중과<br>
			관계없이<br>
			6급</p>
			</td>
		</tr>
		<tr>
			<th scope="row" style="text-align: center;">140.1 이상 146 미만</th>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;">체중과<br>
			관계없이<br>
			5급</td>
			<td style="text-align: center;"> </td>
		</tr>
		<tr>
			<th scope="row" style="text-align: center;">146 이상 159 미만</th>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;">체중과<br>
			관계없이<br>
			4급</td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
		</tr>
		<tr>
			<th scope="row" style="text-align: center;">159 이상 161 미만</th>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;">16.0 이상 35.0 미만</td>
			<td style="text-align: center;">16.0 미만<br>
			또는<br>
			35.0 이상</td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
		</tr>
		<tr>
			<th scope="row" style="text-align: center;">161 이상 204 미만</th>
			<td style="text-align: center;">20.0 이상 25.0 미만</td>
			<td style="text-align: center;">18.5 이상 20.0 미만<br>
			또는<br>
			25.0 이상 30.0 미만</td>
			<td style="text-align: center;">16.0 이상 18.5 미만<br>
			또는<br>
			30.0 이상 35.0 미만</td>
			<td style="text-align: center;">16.0 미만<br>
			또는<br>
			35.0 이상</td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
		</tr>
		<tr>
			<th scope="row" style="text-align: center;">204 이상</th>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;">체중과<br>
			관계없이<br>
			4급</td>
			<td style="text-align: center;"> </td>
			<td style="text-align: center;"> </td>
		</tr>
	</tbody>
</table>

### 입력 

 <p>첫째 줄에 병역판정검사를 받는 사람의 수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D447 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>T</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$T$</span></mjx-container> 가 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D447 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>T</mi><mo>≤</mo><mn>200</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \leq T \leq 200$</span></mjx-container>)</p>

<p>둘째 줄부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D447 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>T</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$T$</span></mjx-container>개의 줄에 키와 몸무게가 각각 cm, kg 단위로 주어진다.</p>

<p>입력으로 주어지는 수는 모두 200 이하의 양의 정수이다.</p>

### 출력 

 <p>각 사람의 신체 등급을 한 줄에 하나씩 순서대로 출력한다.</p>

