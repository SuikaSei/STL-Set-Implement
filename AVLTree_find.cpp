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

Created by 장태양on 11/19/23.
 */

#include "AVLTree.h"
#include <stdio.h>

NOdePointer AVLTree::find(int key) {
	int depth = 0;
	NodePointer current_node = root;

	while (current_node != nullptr) {
		if (current_node->key == key) {
			printf("%d\n, depth");
			return current_node;
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

	printf("0\n");
	return nullptr; //current_node == nullptr;
}
	
