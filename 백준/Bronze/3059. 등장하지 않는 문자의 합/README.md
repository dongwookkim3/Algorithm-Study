# [Bronze III] 등장하지 않는 문자의 합 - 3059 

[문제 링크](https://www.acmicpc.net/problem/3059) 

### 성능 요약

메모리: 2024 KB, 시간: 8 ms

### 분류

구현, 문자열

### 제출 일자

2024년 1월 18일 23:45:29

### 문제 설명

<p>
	알파벳 대문자로 구성되어있는 문자열 S가 주어졌을 때, S에 등장하지 않는 알파벳 대문자의 아스키 코드 값의 합을 구하는 프로그램을 작성하시오.</p>

<p>
	문자열 S가 “ABCDEFGHIJKLMNOPQRSTUVW” 일 때, S에 등장하지 않는 알파벳 대문자는 X, Y, Z이다. X의 아스키 코드 값은 88, Y는 89, Z는 90이므로 이 아스키 코드 값의 합은 267이다.</p>

<p>
	알파벳 대문자의 아스키 코드 값은 다음과 같다.</p>

<p>
	</p><table class="table table-bordered">
		<tbody>
			<tr>
				<td style="text-align:center;">
					<strong>A</strong></td>
				<td style="text-align:center;">
					<strong>B</strong></td>
				<td style="text-align:center;">
					<strong>C</strong></td>
				<td style="text-align:center;">
					<strong>D</strong></td>
				<td style="text-align:center;">
					<strong>E</strong></td>
				<td style="text-align:center;">
					<strong>F</strong></td>
				<td style="text-align:center;">
					<strong>G</strong></td>
				<td style="text-align:center;">
					<strong>H</strong></td>
				<td style="text-align:center;">
					<strong>I</strong></td>
				<td style="text-align:center;">
					<strong>J</strong></td>
				<td style="text-align:center;">
					<strong>K</strong></td>
				<td style="text-align:center;">
					<strong>L</strong></td>
				<td style="text-align:center;">
					<strong>M</strong></td>
				<td style="text-align:center;">
					<strong>N</strong></td>
				<td style="text-align:center;">
					<strong>O</strong></td>
				<td style="text-align:center;">
					<strong>P</strong></td>
				<td style="text-align:center;">
					<strong>Q</strong></td>
				<td style="text-align:center;">
					<strong>R</strong></td>
				<td style="text-align:center;">
					<strong>S</strong></td>
				<td style="text-align:center;">
					<strong>T</strong></td>
				<td style="text-align:center;">
					<strong>U</strong></td>
				<td style="text-align:center;">
					<strong>V</strong></td>
				<td style="text-align:center;">
					<strong>W</strong></td>
				<td style="text-align:center;">
					<strong>X</strong></td>
				<td style="text-align:center;">
					<strong>Y</strong></td>
				<td style="text-align:center;">
					<strong>Z</strong></td>
			</tr>
			<tr>
				<td style="text-align:center;">
					65</td>
				<td style="text-align:center;">
					66</td>
				<td style="text-align:center;">
					67</td>
				<td style="text-align:center;">
					68</td>
				<td style="text-align:center;">
69</td>
				<td style="text-align:center;">
					70</td>
				<td style="text-align:center;">
					71</td>
				<td style="text-align:center;">
					72</td>
				<td style="text-align:center;">
					73</td>
				<td style="text-align:center;">
					74</td>
				<td style="text-align:center;">
					75</td>
				<td style="text-align:center;">
					76</td>
				<td style="text-align:center;">
					77</td>
				<td style="text-align:center;">
					78</td>
				<td style="text-align:center;">
					79</td>
				<td style="text-align:center;">
					80</td>
				<td style="text-align:center;">
					81</td>
				<td style="text-align:center;">
					82</td>
				<td style="text-align:center;">
					83</td>
				<td style="text-align:center;">
					84</td>
				<td style="text-align:center;">
					85</td>
				<td style="text-align:center;">
					86</td>
				<td style="text-align:center;">
					87</td>
				<td style="text-align:center;">
					88</td>
				<td style="text-align:center;">
					89</td>
				<td style="text-align:center;">
					90</td>
			</tr>
		</tbody>
	</table>
	
<p></p>

### 입력 

 <p>
	입력은 T개의 테스트 데이터로 구성된다. 입력의 첫 번째 줄에는 입력 데이터의 수를 나타내는 정수 T가 주어진다. 각 테스트 데이터는 한 줄로 구성되어 있고, 문자열 S가 주어진다. S는 알파벳 대문자로만 구성되어 있고, 최대 1000글자이다.</p>

### 출력 

 <p>
	각 테스트 데이터에 대해, 입력으로 주어진 문자열 S에 등장하지 않는 알파벳 대문자의 아스키 코드 값의 합을 한 줄에 하나씩 출력한다.</p>

