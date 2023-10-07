# [Bronze IV] 뉴턴과 사과 - 13118 

[문제 링크](https://www.acmicpc.net/problem/13118) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 문제 설명

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/13118/img1.png" style="height:275px; width:397px"></p>

<p style="text-align: center;">사과가 떨어지기를 기다리는 사람들.</p>

<p>그림과 같이 네 명의 사람이 사과가 떨어지기를 기다리고 있다. 모든 사람은 <em>x</em>축 위의 한 점에 가만히 서 있으며, 여러 사람이 같은 점에 서 있는 경우는 없다. <em>i</em>번 (1 ≤ <em>i</em> ≤ 4) 사람은 점 (<em>p<sub>i</sub></em>, 0) 위에 있다고 하자. 거대한 좌표평면에 비해 사람은 작은 존재이므로, 편의상 각 사람의 크기는 무시하자.</p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/13118/figure_1.png" style="height:32px; width:309px"></p>

<p style="text-align: center;"><em>x</em>축 위에서 기다리는 사람들.</p>

<p>사과는 좌표평면 위의 한 점 (<em>x</em>, <em>y</em>)를 중심으로 하는 반지름이 <em>r</em>인 원이며, 현재 공중에 가만히 떠 있으므로 모든 점이 <em>x</em>축의 위쪽(즉 <em>y</em> > 0인 영역)에 있다.</p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/13118/figure_2.png" style="height:238px; width:143px"></p>

<p style="text-align: center;"><em>x</em>축 위에 떠 있는 사과.</p>

<p>사과에는 −<em>y</em>축 방향의 중력만이 작용한다. 중력의 크기는 일정하므로, 사과는 지표면(<em>x</em>축)을 향해 등가속도 운동을 하다가, <em>x</em>축과 접하게 되는 순간 멈추게 된다고 한다.</p>

<p style="text-align: center;"><img alt="" src="https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/problem/13118/figure_3.png" style="height:302px; width:138px"></p>

<p style="text-align: center;"><em>x</em>축을 향해 떨어지는 사과.</p>

<p>사람들은 사과가 떨어지기를 기다리면서도, 자신과는 충돌하지 않기를 원하기에, 과연 누가 사과와 충돌하게 될 지를 알고 싶다고 한다. 사람들의 위치와 사과의 위치 및 반지름이 주어졌을 때, 사과와 충돌하는 사람이 있는지, 있다면 누구인지를 구하는 프로그램을 작성하라.</p>

### 입력 

 <p>첫 번째 줄에 사람들의 위치를 나타내는 네 정수 <em>p<sub>1</sub></em>, <em>p<sub>2</sub></em>, <em>p<sub>3</sub></em>, <em>p<sub>4</sub></em> (−10<sup>9</sup> ≤ <em>p<sub>1</sub></em> < <em>p<sub>2</sub></em> < <em>p<sub>3</sub></em> < <em>p<sub>4</sub></em> ≤ 10<sup>9</sup>)가 공백을 사이로 두고 주어진다. <em>i</em>번 (1 ≤ <em>i</em> ≤ 4) 사람은 (<em>p<sub>i</sub></em>, 0) 위에 서 있다.</p>

<p>두 번째 줄에 사과의 정보를 나타내는 세 정수 <em>x</em>, <em>y</em>, <em>r</em> (−10<sup>9</sup> ≤ <em>x</em> ≤ 10<sup>9</sup>, 0 < <em>y</em> ≤ 10<sup>9</sup>, 1 ≤ <em>r</em> ≤ 10<sup>9</sup>)이 공백을 사이로 두고 주어진다. 이 정수들은 사과의 중심이 점 (<em>x</em>, <em>y</em>)에 있고, 사과의 반지름이 <em>r</em>임을 나타낸다. 사과가 <em>x</em>축 위에 떠 있다는 것이 보장된다</p>

### 출력 

 <p>첫 번째 줄에 사과와 충돌하는 사람의 번호를 출력한다. 단, 사과와 충돌하는 사람이 없다면 0을 대신 출력한다.</p>

