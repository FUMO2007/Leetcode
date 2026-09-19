#include <iostream>
using namespace std;
int *a;
int capacity;
int n;

int main()
{a = new int[4];
capacity = 4;

int * t = new int [capacity * 2];
memcpy(t , a , sizeof(int)*capacity);
a = t;
capacity *= 2;}


