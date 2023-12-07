# [Silver I] 트리 순회 - 1991 

[문제 링크](https://www.acmicpc.net/problem/1991) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

재귀, 트리

### 제출 일자

2023년 12월 7일 16:43:19

### 문제 설명

<p>이진 트리를 입력받아 전위 순회(preorder traversal), 중위 순회(inorder traversal), 후위 순회(postorder traversal)한 결과를 출력하는 프로그램을 작성하시오.</p>

<p style="text-align: center;"><img alt="" src="https://www.acmicpc.net/JudgeOnline/upload/201007/trtr.png" style="height:220px; width:265px"></p>

<p>예를 들어 위와 같은 이진 트리가 입력되면,</p>

<ul>
	<li>전위 순회한 결과 : ABDCEFG // (루트) (왼쪽 자식) (오른쪽 자식)</li>
	<li>중위 순회한 결과 : DBAECFG // (왼쪽 자식) (루트) (오른쪽 자식)</li>
	<li>후위 순회한 결과 : DBEGFCA // (왼쪽 자식) (오른쪽 자식) (루트)</li>
</ul>

<p>가 된다.</p>

### 입력 

 <p>첫째 줄에는 이진 트리의 노드의 개수 N(1 ≤ N ≤ 26)이 주어진다. 둘째 줄부터 N개의 줄에 걸쳐 각 노드와 그의 왼쪽 자식 노드, 오른쪽 자식 노드가 주어진다. 노드의 이름은 A부터 차례대로 알파벳 대문자로 매겨지며, 항상 A가 루트 노드가 된다. 자식 노드가 없는 경우에는 .으로 표현한다.</p>

### 출력 

 <p>첫째 줄에 전위 순회, 둘째 줄에 중위 순회, 셋째 줄에 후위 순회한 결과를 출력한다. 각 줄에 N개의 알파벳을 공백 없이 출력하면 된다.</p>

