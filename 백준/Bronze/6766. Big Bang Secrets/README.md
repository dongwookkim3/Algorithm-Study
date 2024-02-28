# [Bronze II] Big Bang Secrets - 6766 

[문제 링크](https://www.acmicpc.net/problem/6766) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 29일 08:52:12

### 문제 설명

<p>Sheldon and Leonard are physicists who are fixated on the BIG BANG theory. In order to exchange secret insights they have devised a code that encodes UPPERCASE words by shifting their letters forward.</p>

<p>Shifting a letter by S positions means to go forward S letters in the alphabet. For example, shifting B by S = 3 positions gives E. However, sometimes this makes us go past Z, the last letter of the alphabet. Whenever this happens we wrap around, treating A as the letter that follows Z. For example, shifting Z by S = 2 positions gives B.</p>

<p>Sheldon and Leonard’s code depends on a parameter K and also varies depending on the position of each letter in the word. For the letter at position P, they use the shift value of S = 3P + K.</p>

<p>For example, here is how ZOOM is encoded when K = 3. The first letter Z has a shift value of S = 3 × 1 + 3 = 6; it wraps around and becomes the letter F. The second letter, O, has S = 3 × 2 + 3 = 9 and becomes X. The last two letters become A and B. So Sheldon sends Leonard the secret message: FXAB</p>

<p>Write a program for Leonard that will decode messages sent by Sheldon.</p>

### 입력 

 <p>The input will be two lines. The first line will contain the positive integer K (K < 10), which is used to compute the shift value. The second line of input will be the word, which will be a sequence of uppercase characters of length at most 20.</p>

### 출력 

 <p>The output will be the decoded word of uppercase letters.</p>

