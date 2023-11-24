/*
MIT License

Copyright (c) 2023 Inha-Open-Source-Team-BBBig

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Created by 장태양 on 11/23/23.
 */

#include "AVLTree.h"
#include <iostream>

using namespace std;

int AVLTree::rank(int key) {

	/*
	TODO: 이미 구현한 find 함수를 활용해보려했으나, depth를 통해 조건을 구분한 후에
	rank 값을 구할 때에 다시 find 함수와 비슷한 코드를 다시 작성해야할 것 같아서
	코드를 복사해 변경해보았는데, 다른 좋은 방법이 있을 지 도움이 필요합니다.
	if ((find(key) == 0) && (root != key)) { // root == key일 경우도 depth가 0임
		cout << "0" << endl; // key 값이 없으면 depth, rank를 무시하고 0만 출력
		return 0;
	}
	*/

	int depth = 0;
	int rank = 0;
	NodePointer current_node = root;

	while (current_node != nullptr) {
		if (current_node->key == key) {
			cout << "Depth: " << depth << " ";
			rank = size(current_node->left) + 1;
			return rank;
		}
		else if (current_node->key > key) {
			depth += 1;
			current_node = current_node->left;
		}
		else { //current_node.key < key
			depth += 1;
			current_node = current_node->right;
		}
	}
	
	cout << "0" << endl; // key 값이 트리 내에 없어서 재귀문을 벗어난 경우
	return rank;
}

