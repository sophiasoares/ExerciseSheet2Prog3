#include <iostream>
#include "list.h"
using namespace std;

void printList(List lst) {
	for (; lst != 0; lst = lst->next) {
		cout << lst->info << " ";
	}
	cout << endl;
}

void insertLast(List& lst, int info) {
	if (lst == 0) {
		ListElem* newElem = new ListElem;
		newElem->info = info;
		newElem->next = lst;
		lst = newElem;
	} else {
		ListElem *tmp = lst;
		for (; tmp->next != 0; tmp = tmp->next);
		ListElem* newElem = new ListElem;
		newElem->info = info;
		newElem->next = 0;
		tmp->next = newElem;
	}
}

void reverseList(List& lst) {
	ListElem* tmp;
	List reversedList = emptyList;

	for (int i = 0; i < 10; i++) {
		tmp = lst;
		for (; tmp->next->next != 0; tmp = tmp->next);
		if (reversedList == 0) {
			reversedList = tmp->next;
		} else {
			ListElem* aux = reversedList;
			for (; aux->next != 0; aux = aux->next);
			aux->next = tmp;
			tmp->next = 0;
		}
	}
	lst = reversedList;
}
