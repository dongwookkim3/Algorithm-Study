# [Bronze IV] Corona Virus Testing - 25828 

[문제 링크](https://www.acmicpc.net/problem/25828) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

사칙연산, 수학

### 문제 설명

<p>Testing for Corona can be done individually, e.g., 100 people require 100 test kits. Alternatively, the test can be done in groups (pools), e.g., 100 people can be divided into five group of 20 people each and then using only one test kid per group. If one or more groups test positive, then individual tests are needed for each person in those group. So, for our example, five groups will need 5 test kits and let’s say two groups test positive, so we would need additional 40 (2*20) test kits for a total of 45 (5+40) test kits.</p>

<p>Given the data for the two possible testing approaches, determine which approach will use fewer test kits.</p>

### 입력 

 <p>There is only one input line; it provides three integers: g (2 ≤ g ≤ 50), indicating the number of groups, p (2 ≤ p ≤ 50), indicating the number of people in each group, and t (0 ≤ t ≤ g), indicating how many groups tested positive (i.e., people in these groups need to be tested individually).</p>

### 출력 

 <p>Print 1 (one) if testing everyone individually will use fewer kits, 2 (two) if testing in groups will use fewer kits, and 0 (zero) if the two approaches use the same number of kits.</p>

