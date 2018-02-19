#include <iostream>
#include "SingleLinkedList.h"

void main(){

	SingleLinkedList* list = new SingleLinkedList;
	list->InsertAtTheFront(20);
	list->InsertAtTheFront(30);
	list->InsertAtTheFront(9);
	list->InsertAtTheEnd(15);
	list->Display();

	system("pause");
	return;


};