#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    deque<int> dq;
    int n, i;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "push_front")  {cin >> i; dq.push_front(i);}
        if (s == "push_back")   {cin >> i; dq.push_back(i);}

        if (s == "pop_front" && !dq.size()) {cout << -1 << "\n";}
        else if (s == "pop_front")   {cout << dq.front() << "\n"; dq.pop_front();}
        if (s == "pop_back" && !dq.size())  {cout << -1 << "\n";}
        else if (s == "pop_back")    {cout << dq.back() << "\n"; dq.pop_back();}

        if (s == "size")    {cout << dq.size() << "\n";}
        if (s == "empty")   {cout << dq.empty() << "\n";}

        if (s == "front" && !dq.size()) {cout << -1 << "\n";}
        else if (s == "front")   {cout << dq.front() << "\n";}
        if (s == "back" && !dq.size())  {cout << -1 << "\n";}
        else if (s == "back")    {cout << dq.back() << "\n";}
    }
    return 0;
}