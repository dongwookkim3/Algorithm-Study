# [Silver III] 피보나치는 지겨웡~ - 17175 

[문제 링크](https://www.acmicpc.net/problem/17175) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

다이나믹 프로그래밍

### 제출 일자

2024년 1월 25일 16:22:45

### 문제 설명

<p>혁진이는 알고리즘 문제를 만들라는 독촉을 받아 스트레스다. 하지만 피보나치 문제는 너무 많이 봐서 지겹기 그지없다. 그러나 문제를 만들 시간이 없는 혁진이는 피보나치 문제를 응용해서 문제를 만들려 한다.</p>


<pre>int fibonacci(int n) { // 호출
  if (n < 2) {
    return n;
  }  
  return fibonacci(n-2) + fibonacci(n-1);
}</pre>


<p>위와 같이 코딩하였을 때 <em><code>fibonacci(n)</code></em>를 입력했을 때에 <em><code>fibonacci</code> </em>함수가 호출되는 횟수를 계산해보자.</p>

### 입력 

 <p><em>fibonacci </em>함수에 인자로 입력할 <em>n</em>이 주어진다. (0 ≤ <em>n</em> ≤ 50)</p>

### 출력 

 <p><em>fibonacci </em>함수가 호출된 횟수를 출력한다.</p>

<p>출력값이 매우 커질 수 있으므로 정답을 1,000,000,007 로 나눈 나머지를 출력한다.</p>

