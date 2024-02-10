# [Bronze III] 베시와 데이지 - 16431 

[문제 링크](https://www.acmicpc.net/problem/16431) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 수학

### 제출 일자

2024년 2월 10일 18:28:20

### 문제 설명

<p>농부 존은 소 베시와 소 데이지를 키우고 있습니다.</p>

<p>두 소는 자유롭게 1,000 × 1,000 2차원 격자 목초지를 누비며 놀고 있습니다. 농부 존이 종을 치면 베시와 데이지가 농부 존이 있는 곳으로 달려갑니다. </p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/9ede513c-e62e-464d-9ac9-e1d1408cf770/-/preview/"></p>

<p style="text-align: center;">베시가 B에 있을 때 1초 후에 움직일 수 있는 칸과 데이지가 D에 있을 때 1초 후에 움직일 수 있는 칸을 나타낸 그림<br>
 </p>

<p>베시는 1초 후에 꼭짓점을 공유하는 8개의 칸 중 하나로 이동할 수 있고 데이지는 1초 후에 변을 공유하는 4개의 칸 중 하나로 이동할 수 있습니다. 칸들은 충분히 넓어서 칸 하나에도 베시와 데이지 그리고 존이 같이 서 있을 수 있습니다. </p>

<p>베시와 데이지 두 소 모두 최단 경로로 존에게 갈 때 어떤 소가 더 빨리 도착할까요?</p>

### 입력 

 <p>첫 번째 줄에 베시의 좌표 <em>B<sub>r</sub></em>, <em>B<sub>c</sub></em> (1 ≤ <em>B<sub>r</sub></em>, <em>B<sub>c</sub></em> ≤ 1,000) 이 주어집니다.</p>

<p>두 번째 줄에 데이지의 좌표 <em>D<sub>r</sub></em>, <em>D<sub>c</sub></em> (1 ≤ <em>D<sub>r</sub></em>, <em>D<sub>c</sub></em> ≤ 1,000) 이 주어집니다.</p>

<p>세 번째 줄에 존의 좌표 <em>J<sub>r</sub></em>, <em>J<sub>c</sub></em> (1 ≤ <em>J<sub>r</sub></em>, <em>J<sub>c</sub></em> ≤ 1,000) 이 주어집니다.</p>

<p>처음에 존이 있는 칸에는 베시와 데이지가 없음이 보장됩니다.</p>

### 출력 

 <p>첫 번째 줄에 베시가 더 빨리 도착하면 '<code>bessie</code>', 데이지가 더 빨리 도착하면 '<code>daisy</code>', 동시에 도착하면 '<code>tie</code>' 를 출력합니다.</p>

