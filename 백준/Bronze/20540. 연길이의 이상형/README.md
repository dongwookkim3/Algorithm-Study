# [Bronze III] 연길이의 이상형 - 20540 

[문제 링크](https://www.acmicpc.net/problem/20540) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 15일 04:21:49

### 문제 설명

<p>졸업을 앞둔 연길이는 크리스마스가 다가올수록 외로움을 느낀다.</p>

<p>그런 연길이를 위해 동우는 소개팅을 시켜주지는 않고 연길이의 이상향을 찾는 것을 도와주고자 한다.</p>

<p>MBTI 신봉자인 연길이는 자신과 정반대인 사람에게 매력을 느낀다. 즉, MBTI의 네가지 지표가 모두 자신과 반대인 사람이 연길이의 이상형이다.</p>

<p>MBTI는 다음과 같은 네 가지 척도로 성격을 표시한다. 각각의 척도는 두 가지 극이 되는 성격으로 이루어져 있다.</p>

<table class="table table-bordered" style="width:600px;">
	<tbody>
		<tr>
			<td colspan="2" rowspan="1" style="text-align: center;"><strong>지표</strong></td>
			<td colspan="2" rowspan="1" style="text-align: center;"><strong>설명</strong></td>
		</tr>
		<tr>
			<td>외향(<strong>E</strong>xtroversion)</td>
			<td>내향(<strong>I</strong>ntroversion)</td>
			<td colspan="2" rowspan="1">선호하는 세계:세상과 타인 / 내면 세계</td>
		</tr>
		<tr>
			<td>감각(<strong>S</strong>ensation)</td>
			<td>직관(i<strong>N</strong>tuition)</td>
			<td colspan="2" rowspan="1">인식형태: 실제적인 인식/ 실제 너머로 인식</td>
		</tr>
		<tr>
			<td>사고(<strong>T</strong>hinking)</td>
			<td>감정(<strong>F</strong>eeling)</td>
			<td colspan="2" rowspan="1">판단기준: 사실과 진실 위주 / 관계와 사람 위주</td>
		</tr>
		<tr>
			<td>판단(<strong>J</strong>udging)</td>
			<td>인식(<strong>P</strong>erceiving)</td>
			<td colspan="2" rowspan="1">생활양식: 계획적인 생활 / 즉흥적인 생활</td>
		</tr>
	</tbody>
</table>

<p>네 가지 척도마다 두 가지 경우가 존재하므로, 총 16가지의 유형이 만들어진다. 유형은 각 경우를 나타내는 알파벳 한 글자씩을 따서 네 글자로 표시한다. 다음은 MBTI의 유형들이다.</p>

<table border="1" cellpadding="1" cellspacing="1" class="table table-bordered" style="width: 500px;">
	<tbody>
		<tr>
			<td style="text-align: center;"><strong>구분</strong></td>
			<td style="text-align: center;"><strong>감각/사고</strong></td>
			<td style="text-align: center;"><strong>감각/감정</strong></td>
			<td style="text-align: center;"><strong>직관/감정</strong></td>
			<td style="text-align: center;"><strong>직관/사고</strong></td>
		</tr>
		<tr>
			<td style="text-align: center;"><strong>내향/판단</strong></td>
			<td style="text-align: center;">ISTJ</td>
			<td style="text-align: center;">ISFJ</td>
			<td style="text-align: center;">INFJ</td>
			<td style="text-align: center;">INTJ</td>
		</tr>
		<tr>
			<td style="text-align: center;"><strong>내향/인식</strong></td>
			<td style="text-align: center;">ISTP</td>
			<td style="text-align: center;">ISFP</td>
			<td style="text-align: center;">INFP</td>
			<td style="text-align: center;">INTP</td>
		</tr>
		<tr>
			<td style="text-align: center;"><strong>외향/인식</strong></td>
			<td style="text-align: center;">ESTP</td>
			<td style="text-align: center;">ESFP</td>
			<td style="text-align: center;">ENFP</td>
			<td style="text-align: center;">ENTP</td>
		</tr>
		<tr>
			<td style="text-align: center;"><strong>외향/판단</strong></td>
			<td style="text-align: center;">ESTJ</td>
			<td style="text-align: center;">ESFJ</td>
			<td style="text-align: center;">ENFJ</td>
			<td style="text-align: center;">ENTJ</td>
		</tr>
	</tbody>
</table>

<p>연길이가 자신의 이상향을 무사히 찾을 수 있도록 도와주자!</p>

### 입력 

 <p>연길이의 MBTI 4글자가 대문자로 주어진다.</p>

### 출력 

 <p>연길이의 이상형에 해당하는 MBTI 4글자를  대문자로 출력한다.</p>

