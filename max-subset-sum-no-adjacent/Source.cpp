#include <vector>
#include <iostream>

using namespace std;

int maxSubsetSumNoAdjacent(vector<int> array);

int main()
{

    vector<int> vector{ 75, 105, 120, 75, 90, 135 };
    cout << maxSubsetSumNoAdjacent(vector) << " ";
    return 0;
}
int maxSubsetSumNoAdjacent(vector<int> array) {
    // Write your code here.
    if (array.size() == 0)
    {
        return 0;
    }
    else if (array.size() == 1)
    {
        return array[0];
    }

    int second = array[0];
    int first = max(array[0], array[1]);
    for (int i = 2; i < array.size(); i++)
    {
        int current = max(first, second + array[i]);
        second = first;
        first = current;
    }

    return first;
}
