#include <iostream>
#include <vector>
using namespace std;

void cinn(vector<int>& a)
{ 
    for (int i = 0; i < a.size(); i++)  { a[i] = i; } 
}

void found(vector<int> a, int v) 
{ 
    for (int i = 0; i < a.size(); i++) 
    { 
        if (a[i] == v) { cout << "Your number " << v << " found in position " << i + 1 << endl;} 
    }
}


int main() {
    vector<int> a(100);
    int x;
    cout << "Enter the number: ";
    cin >> x;

    cinn(a);
    found(a, x);

    return 0;
}
