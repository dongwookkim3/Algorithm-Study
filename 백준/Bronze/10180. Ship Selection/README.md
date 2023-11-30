# [Bronze III] Ship Selection - 10180 

[문제 링크](https://www.acmicpc.net/problem/10180) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 수학

### 제출 일자

2023년 12월 1일 00:15:42

### 문제 설명

<p>When Starfleet headquarters gets a request for an exploration expedition, they need to determine which ship from those currently docked in the docking bay to send. They decide to send whichever ship is currently able to make the expedition based on how much fuel is currently stored on the ship as well as how long it will take the ship to arrive at the expected destination. Due to the age and current maintenance of the ships, each ship travels at a different top speed and has a different fuel consumption rate. Each ship reaches its top speed instantaneously.</p>

### 입력 

 <p>Input begins with a line with one integer T (1 ≤ T ≤ 50) denoting the number of test cases. Each test case begins with a line with two space-separated integers N and D, where N (1 ≤ N ≤ 100) denotes the number of ships in the docking bay and D (1 ≤ D ≤ 10<sup>6</sup>) denotes the distance in light-years to the expedition site. Next follow N lines with three space-separated integers v<sub>i</sub>, f<sub>i</sub>, and c<sub>i</sub>, where v<sub>i</sub> (1 ≤ v<sub>i</sub> ≤ 1000) denotes the top speed of ship i in light-years per hour, f<sub>i</sub> (1 ≤ f<sub>i</sub> ≤ 1000) denotes the fuel on ship i in kilos of deuterium, and c<sub>i</sub> (1 ≤ c<sub>i</sub> ≤ 1000) denotes the fuel consumption of ship i in kilos of deuterium per hour.</p>

### 출력 

 <p>For each test case, print a single integer on its own line denoting the number of ships capable of reaching the expedition site. Be careful with integer division!</p>

