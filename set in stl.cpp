#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
    set <int, greater <int> > set1;
    set1.insert(20);
    set1.insert(30);
    set1.insert(40);
    set1.insert(50);
    set1.insert(60);
    set1.insert(70);
    set <int, greater <int> > :: iterator itr;
    cout << "\nThe set 1 is : ";
    for (itr = set1.begin(); itr != set1.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;
    set <int, greater <int> > set2(set1.begin(), set1.end());
    cout << "\nThe set2 is: ";
    for (itr = set2.begin(); itr != set2.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;
    cout << "\nset2 after removal of elements greater than 40 : ";
    set2.erase(set2.begin(), set2.find(40));
    for (itr = set2.begin(); itr != set2.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    int num;
    num = set2.erase (30);
    cout << "\nset2.erase(30) : ";
    cout << num << " removed \t" ;
    for (itr = set2.begin(); itr != set2.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;
    cout << "set1.lower_bound(40) : "
         << *set1.lower_bound(40) << endl;
    cout << "set11.upper_bound(40) : "
         << *set1.upper_bound(40) << endl;

    return 0;

}
