# [Bronze IV] Hard choice - 15059 

[문제 링크](https://www.acmicpc.net/problem/15059) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 2월 2일 01:26:14

### 문제 설명

<p>In long flights, airlines offer hot meals. Usually the flight attendants push carts containing the meals down along the aisles of the plane. When a cart reaches your row, you are asked right away: “Chicken, beef, or pasta?” You know your choices, but you have only a few seconds to choose and you don’t know how your choice will look like because your neighbor hasn’t opened his wrap yet. . .</p>

<p>The flight attendant in this flight decided to change the procedure. First she will ask all passengers what choice of meal they would prefer, and then she will check if the number of meals available in this flight for each choice are enough.</p>

<p>As an example, consider that the available number of meals for chicken, beef and pasta are respectively (80, 20, 40), while the number of passenger’s choices for chicken, beef and pasta are respectively (45, 23, 48). In this case, eleven people will surely not receive their selection for a meal, since three passengers who wanted beef and eight passengers who wanted pasta cannot be pleased.</p>

<p>Given the quantity of meals available for each choice and the number of meals requested for each choice, could you please help the flight attendant to determine how many passengers will surely not receive their selection for a meal?</p>

### 입력 

 <p>The first line contains three integers C<sub>a</sub>, B<sub>a</sub> and P<sub>a</sub> (0 ≤ C<sub>a</sub>, B<sub>a</sub>, P<sub>a</sub> ≤ 100), representing respectively the number of meals available for chicken, beef and pasta. The second line contains three integers C<sub>r</sub>, B<sub>r</sub> and P<sub>r</sub> (0 ≤ C<sub>r</sub>, B<sub>r</sub>, P<sub>r</sub> ≤ 100), indicating respectively the number of meals requested for chicken, beef and pasta.</p>

### 출력 

 <p>Output a single line with an integer representing the number of passengers that will surely not receive their selection for a meal.</p>

