#include <iostream>
#include <deque>

using namespace std;

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
}

int main()
{
    deque <int> dque;
    dque.push_back(23);
    dque.push_front(22);
    dque.push_back(30);
    dque.push_back(20);
    cout << "The deque is : ";
    showdq(dque);
    cout << "\ndque size is : " << dque.size();
    cout << "\nthe dque max size is :" << dque.max_size();
    cout << "\ndque.at(3) : " << dque.at(3);
    cout << "\ndque.front() : " << dque.front();
    cout << "\ndque.back() : " << dque.back();
    cout << "\ndque.pop_back(): ";
    dque.pop_back();
    showdq(dque);

    cout << "\ndque.pop_front() :";
    dque.pop_front();
    showdq(dque);

    return 0;
}
