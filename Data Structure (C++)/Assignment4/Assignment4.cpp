/*  Noah Cao
**  Assignment4.cpp
**  Assignment 4, CMPT-225
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/
#include "node.h"

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;
    bool List2 = false;
    int x;
    ifstream inFile;
    inFile.open("sample1.txt");
    while (inFile>>x)
    {
        if(x == 0)
            List2 = true;
        else if (List2 == true)
            head_insert (head2, x);
        else
            head_insert (head1, x);
    }
    
    cout << "Noah Cao\n";
   
    bool found = false;
    while (!empty(head1) && (found == false))
    {
        int max1 = biggest(head1);
        if (contain(head2, max1))
            remove(head1, max1);
        else
        {
            cout << max1 << endl;
            found = true;
        }
    }
    if (found == false)
        cout << "NONE\n";

    return 0;
}

