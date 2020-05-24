#include <iostream>
#include <fstream>
using namespace std;

class Node
{
public:
	Node()
	{
		data = 0;
		link = NULL;
	}
	Node(int initData, Node* initLink)
	{
		data = initData;
		link = initLink;	
	}
	int getData()
	{
		return data;
	}
	Node* getLink()
	{
		return link;
	}
	void setLink (Node* initLink)
	{
		link = initLink;
	}
private:
	int data;
	Node* link;
};

void head_insert (Node*& head, int num)
{
	head = new Node (num, head);
}

bool empty(Node* head)
{
	return (head == NULL);
}

void remove (Node*& head, int target)
{
    Node* before = head;
    Node* discard = head;
    while (discard != NULL)
    {
        if (discard -> getData() != target)
        {
            before = discard;
            discard = discard -> getLink();
        }
        else if (discard == head)
        {
            head = head -> getLink();
            discard = head;
            delete before;
            before = head;
        }
        else
        {
            before -> setLink(discard -> getLink());
            delete discard;
            discard = before -> getLink();
        }
    }
}

int biggest (Node* head)
{
	int biggest = 0;
	for (Node* iter = head; iter != NULL; iter = iter -> getLink())
	{
		if (iter -> getData() > biggest)
			biggest = iter -> getData();
	}
	return biggest;
}

bool contain (Node* head, int num)
{
	for (Node* iter = head; iter != NULL; iter = iter -> getLink())
	{
		if (iter -> getData() == num)
			return true;
	}
	return false;
}