# [Silver V] Cow Pals - 6052 

[문제 링크](https://www.acmicpc.net/problem/6052) 

### 성능 요약

메모리: 2680 KB, 시간: 4 ms

### 분류

브루트포스 알고리즘, 수학, 정수론, 소수 판정, 에라토스테네스의 체

### 제출 일자

2024년 2월 12일 10:10:14

### 문제 설명

<p>Bessie and all the other cows have an RFID serial number tag in their ear so FJ can mechanically tally them. Many cows have a 'cowpal' whose serial number is equal to the sum of the divisors (that are not the number itself) of their own serial number. Some cows don't have a cowpal because no cow's serial number matches their divisor sum.</p>

<p>Some cows have a superpal. Cows are superpals when their serial numbers make each of them a pal of the other. Cows that are superpals of themselves are shunned; do not consider them!</p>

<p>Given a serial number S (6 <= S <= 18,000), find the first cow with serial number at least S who has a super pal.</p>

<p>By way of example, consider serial number 220 whose divisors are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110. Their sum is 284. Similarly, the divisors of 284 are 1, 2, 4, 71, and 142. Their sum is 220.</p>

### 입력 

 <ul>
	<li>Line 1: A single integer: S</li>
</ul>

<p> </p>

### 출력 

 <ul>
	<li>Line 1: A single line with two space-separated integers that are the serial number of the first superpal whose serial number is no smaller than S and the serial number of her pal.</li>
</ul>

<p> </p>

