# [Bronze IV] The Merchant of Venice - 13496 

[문제 링크](https://www.acmicpc.net/problem/13496) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 2월 20일 23:35:35

### 문제 설명

<p>“The Merchant of Venice” has perhaps one of the most interesting “villains” in Shylock, a Jewish moneylender who has been hurt many times and in different ways by Christians in general, and Antonio, the titular merchant, in particular. When Antonio’s friend Bassanio urgently needs to borrow 3000 ducats to woo the lady he loves, Antonio’s money is tied up in his trading fleet; instead, he signs a loan contract with Shylock promising him a pound of his own flesh in case the 3000 ducats are not repaid by the due date. When his fleet is lost in a storm, the plot thickens and the story turns more ominous.</p>

<p>We will ignore here the risk analysis that Antonio should probably have carried out, asking how likely each of his ships would return, and what the probability was that he would not be able to repay the money by the due date. Instead, we will focus on the question of how much money Antonio could repay Shylock by a given date, depending on where his ships are located at the start of the contract.</p>

<p>Specifically, you will be given the number of days until the due date and the speed at which ships travel. You will also be given, for each ship, its distance from Venice and the value of its load in ducats. You are to output the number of ducats Antonio can repay by the due date.</p>

### 입력 

 <p>The first line contains a number K ≥ 1, which is the number of input data sets in the file. This is followed by K data sets of the following form:</p>

<p>The first line of a data set contains three integers n, s, d; 0 ≤ n ≤ 200 is the number of ships Antonio owns, 1 ≤ s ≤ 100 is the speed of the ships in miles per day, and 1 ≤ d ≤ 365 the number of days until the contract’s due date.</p>

<p>This is followed by n lines, each containing two integers d<sub>i</sub>, v<sub>i</sub>. 0 ≤ d<sub>i</sub> ≤ 10000 is the distance of ship i from Venice, in miles, and 0 ≤ v<sub>i</sub> ≤ 100000 is the value of ship i’s load.</p>

### 출력 

 <p>For each data set, first output “Data Set x:” on a line by itself, where x is its number. Then, output the total number of ducats that Antonio could repay Shylock after d days. If a ship exactly arrives after d days, we assume that Antonio can use its cargo already to repay Shylock.</p>

<p>Each data set should be followed by a blank line.</p>

