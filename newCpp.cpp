#include <vector>
#include <iostream>
using namespace std;
#define limit 4
int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result{ 0 }, cnt, cnt2;
    for (cnt = 0; cnt <= (int)vec.size(); cnt++)
    {

        for (cnt2 = cnt + 1; cnt2 < (int)vec.size(); cnt2++)
        {
            result += vec.at(cnt) * vec.at(cnt2);
        }
    }
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main()
{
    vector<int>vec;
    for (int i = 1; i < limit; i++)
    {
        vec.push_back(i);
    }
    cout<<calculate_pairs(vec)<<endl;

    return 0;
}