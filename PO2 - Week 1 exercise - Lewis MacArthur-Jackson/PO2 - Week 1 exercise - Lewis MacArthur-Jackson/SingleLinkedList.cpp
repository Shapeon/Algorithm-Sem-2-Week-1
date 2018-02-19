#include "SingleLinkedList.h"
#include <iostream>

SingleLinkedList::SingleLinkedList() {

};

SingleLinkedList::~SingleLinkedList() {

};

void SingleLinkedList::InsertAtTheFront(int value){

	CNode* tempnode = root;
	CNode* newnode = new CNode;
	newnode->SetData(value);
	newnode->SetNextNode(tempnode);
	root = newnode;

	delete tempnode;
}

void SingleLinkedList::InsertInTheMiddle(int value, int position) {
};

void SingleLinkedList::InsertAtTheEnd(int value) {

	CNode* tempnode = root;

	while (tempnode->GetNextNode() != nullptr)
	{
		tempnode = tempnode->GetNextNode();
	}
	CNode* newnode = new CNode;
	newnode->SetData(value);

	newnode->SetNextNode(nullptr);
	tempnode->SetNextNode(newnode);
	delete tempnode;

};

void SingleLinkedList::Delete(int value) {
};

bool SingleLinkedList::Search(int value) {
	return true;
};

void SingleLinkedList::Display() {
	CNode* tempnode = root;

	while(tempnode != nullptr)
	{
		std::cout << tempnode->GetData() << std::endl;
		tempnode = tempnode->GetNextNode();
	}
	delete tempnode;
};

