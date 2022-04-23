#include <iostream>
#include "Stackll.h"
using namespace std;

int main()
{
    Stack<char> s;
    s.push('n');
    s.push('a');
    s.push('h');
    s.push('s');
    s.push('r');
    s.push('a');
    s.push('D');

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}




// template<typename T>
// class Stack;


// template<typename T>
// class Node{
// public:
// 	T data;
// 	Node<T> *next;

// 	Node(T d){
// 		data = d;
// 	}
// };

// template<typename T>
// class Stack{
// 	Node<T> * head;
// public:

// 	Stack(){
// 		head = NULL;
// 	}

// 	void push(T data){
// 		Node<T> * n = new Node<T>(data);
// 		n->next = head;
// 		head = n;
// 	}
// 	bool empty(){
// 		return head==NULL;
// 	}

// 	T top(){
// 		return head->data;	
// 	}

// 	void pop(){
// 		if(head!=NULL){
// 			Node<T> * temp = head;
// 			head = head->next;
// 			delete temp;
// 		}

// 	}
// };


