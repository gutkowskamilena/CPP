#include "DoublyLinkedList.hpp"
#include<iostream>
DoublyLinkedList::DoublyLinkedList()
	: _head(nullptr)
	, _tail(nullptr)
{

}
DoublyLinkedList::~DoublyLinkedList()
{
	Node* tmp = _head;
	while (_head != nullptr)
	{
		tmp = _head->next;
		delete _head;
		_head = tmp;
	}

	std::cout << "nullptr";
}
unsigned int DoublyLinkedList::size() const
{
	unsigned int size = 0;
	Node* tmp = _head;
	while (tmp != nullptr)
	{
		std::cout << tmp->data << "->";
		tmp = tmp->next;
		++size;
	}
	return size;
}
void DoublyLinkedList::insertFront(int value)
{
	//utworzenie nowego wezla, ustawiamy prev na nullptr, poniewa� pierwszy element listy nie ma poprzednika
	Node* newNode = new Node();
	newNode->data = value;
	newNode->prev = nullptr;

	//kopiujemy wskaznik na pierwszy element (ten ktory wskazuje _head), robimy to najpierw zeby nie stracic uchywtu do listy
	newNode->next = _head;

	//ustawiamy wskaznik poczatku listy na nasz nowo utworzony wezel
	_head = newNode;
}

void DoublyLinkedList::insertAfter(int value, const unsigned int position)
{
	unsigned int index = 0;
	Node* tmp = _head;
	while (tmp != nullptr && index!= position)
	{
		std::cout << tmp->data << "->";
		tmp = tmp->next;
		++index;
	}
}

void DoublyLinkedList::print() const
{
	Node* tmp = _head;
	
	while (tmp !=  nullptr)
	{
		std::cout << tmp->data << "->";
		tmp = tmp->next;
	}
	std::cout << "nullptr";
}