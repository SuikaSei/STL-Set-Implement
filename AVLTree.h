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

Created by 손예원, 박준영, 장태양, 주시현 on 11/16/23.
 */

#ifndef STL_SET_IMPLEMENT_AVLTREE_H
#define STL_SET_IMPLEMENT_AVLTREE_H

struct Node {
    int key, height;
    node *left, right;
};

typedef Node *NodePointer;

class AVLTree {
private:
    NodePointer root;

public:

    int minimum();

    int maximum();

    bool empty();

    int size();

    int find(int finding_num);

    int insert();

    int rank();

    int erase()
};

#endif //STL_SET_IMPLEMENT_AVLTREE_H
