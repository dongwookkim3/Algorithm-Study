# [Bronze IV] Good Coin Denomination - 26350 

[문제 링크](https://www.acmicpc.net/problem/26350) 

### 성능 요약

메모리: 2020 KB, 시간: 4 ms

### 분류

구현

### 제출 일자

2024년 2월 22일 16:50:01

### 문제 설명

<p>Different countries use different coin denominations. For example, the USA uses 1, 5, 10, and 25. A desirable property of coin denominations is to have each coin at least twice the amount of its previous coin in sorted order. For example, the USA denominations have this property, but the coin denominations {1, 5, 6} do not (6 is not at least twice 5).</p>

<p>Given the coin denominations, you are to determine if the set has the above property.</p>

### 입력 

 <p>The first input line contains a positive integer, n, indicating the number of denomination sets to check. The sets are on the following n input lines, one set per line. Each set starts with an integer d (1 ≤ d ≤ 10), which is a count of various coin amounts in the set; this is followed by d distinct positive integers (each less than 1,000) giving each coin amount (assume the coin amounts are given in increasing order).</p>

### 출력 

 <p>At the beginning of each test case, output “Denominations: v” where v is the input values. Then, on the next output line, print a message indicating whether or not the set has the above property. Leave a blank line after the output for each test case. Follow the format illustrated in Sample Output.</p>

