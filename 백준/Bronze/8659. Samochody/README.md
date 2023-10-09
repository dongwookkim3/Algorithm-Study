# [Bronze I] Samochody - 8659 

[문제 링크](https://www.acmicpc.net/problem/8659) 

### 성능 요약

메모리: 2876 KB, 시간: 196 ms

### 분류

구현, 누적 합

### 제출 일자

2023년 10월 9일 20:00:21

### 문제 설명

<p>Przemek obserwuje ruch samochodów na drodze. Droga jest dwukierunkowa i łączy wschodnią część miasta z zachodnią. Ponieważ Przemek stoi na wzgórzu, to widzi dokładane położenie wszystkich samochodów.</p>

<p>Zastanawia się teraz, ile par samochodów minie się między sobą. Dwa samochody miną się, jeśli jadą w przeciwnych kierunkach, gdy pierwszy z nich (patrząc od lewej) jedzie na wschód, a drugi na zachód. Zakładamy, że samochody nie zawracają, nie wyprzedzają oraz wszystkie jadą prosto przed siebie.</p>

### 입력 

 <p>W pierwszym wierszu wejścia znajduje się jedna liczba całkowita <em>n</em> (1 ≤ <em>n</em> ≤ 10<sup>6</sup>), oznaczająca liczbę wszystkich samochodów, które widzi Przemek.</p>

<p>W drugim wierszu wejścia znajduje się <em>n</em> liczb całkowitych <em>s</em><sub>1</sub>, <em>s</em><sub>2</sub>, ..., <em>s<sub>n</sub></em> (0 ≤ <em>s<sub>i</sub></em> ≤ 1), oznaczających kolejne samochody, podawane w kolejności od najbardziej położonych na zachód (samochód <em>s<sub>i</sub></em> jest położony bardziej na zachód niż samochód <em>s<sub>i</sub></em><sub>+1</sub>). Liczba <em>s<sub>i</sub></em>, oznacza kierunek jazdy <em>i</em>-tego samochodu: 0 - samochód jedzie na wschód, 1 - samochód jedzie na zachód.</p>

### 출력 

 <p>Pierwszy i jedyny wiersz wyjścia powinien zawierać jedną liczbę całkowitą, równą liczbie par samochodów, które będą się mijały.</p>

