#include <bits/stdc++.h>
using namespace std;
void addElement(priority_queue<int> &A, int x);
void remove_Element(priority_queue<int> &A);
int getSize(priority_queue<int> &A);
int getElement_at_top(priority_queue<int> &A);
void print(priority_queue<int> &A);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        priority_queue<int> A;
        while (q--)
        {
            int c;
            cin >> c;
            switch (c)
            {
            case 1:
            {
                int x;
                cin >> x;
                addElement(A, x);
                print(A);
                break;
            }
            case 2:
            {
                remove_Element(A);
                break;
            }
            case 3:
            {
                cout << getElement_at_top(A) << endl;
                break;
            }
            case 4:
            {
                cout << getSize(A) << endl;
                break;
            }
            case 5:
            {
                print(A);
                break;
            }
            default:
                return 0;
            }
        }
    }
    return 0;
}

void addElement(priority_queue<int> &A, int x)
{
    A.push(x);
}

void remove_Element(priority_queue<int> &A)
{
    if (!A.empty())
    {
        cout << A.top() << endl;
        A.pop();
    }
    else
        cout << -1 << endl;
}

int getElement_at_top(priority_queue<int> &A)
{
    if (!A.empty())
        return A.top();
    return -1;
}

the priority queue * /
    int getSize(priority_queue<int> &A)
{
    if (!A.empty())
        return A.size();
    return -1;
}

void print_the_pq(priority_queue<int> A)
{
    while (!A.empty())
    {
        cout << A.top() << " ";
        A.pop();
    }
}
void print(priority_queue<int> &A)
{
    if (A.empty())
        cout << -1 << endl;
    else
    {
        print_the_pq(A);
        cout << endl;
    }
}
