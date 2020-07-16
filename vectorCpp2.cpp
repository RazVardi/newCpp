#include <iostream>
#include <vector>
using namespace std;
#define limit -99
int count_numbers(const vector<int>& vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{ 0 };

    while ((int)vec.size() > count && vec.at(count) != -99)
        count++;
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}

void print(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";  // no bound check, but safe here
    }
    cout << endl;
}

int main()
{
    const vector<int> &vec{11,22,33,44,55,66,77,88,99,-99};
    cout << "size = " << vec.size() << endl;
    cout << "capacity = " << vec.capacity() << endl;
    print(vec);
    return 0;
}