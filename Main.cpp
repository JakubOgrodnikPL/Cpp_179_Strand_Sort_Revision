#include <bits/stdc++.h>
using namespace std;

void strandSort(list<int> &ip, list<int> &op)
{
    if (ip.empty())
        return;
    list<int> sublist;
    sublist.push_back(ip.front());
    ip.pop_front();
}
