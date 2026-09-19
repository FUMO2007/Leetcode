#include<iostream>
using namespace std;
//以下标1为起点
const int N = 1e5 + 10;
int a[N];
int n=1;

void print()
{
    for (int i = 1; i < n ;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void push_back(int x)
{
    a[n++] = x;
}

void push_front(int x)
{
    for(int i = n ; i >= 0 ;i--)
    {
        a[i + 1] = a[i];
    }

    a[1] = x;
    n++;
}

void insert(int p, int x)
{
    for(int i =n ; i >= p ;i--)
    {
        a[i + 1] = a[i];
    }
    a[p] = x;
    n++;
}
int main() 
{
    push_back(1);
    print();
    push_back(2);
    print();
    push_back(3);
    print();
    push_back(4);
    print();
    push_back(5);
    print();
    push_front(0);
    print();
    insert(3, 100);
    print();
}