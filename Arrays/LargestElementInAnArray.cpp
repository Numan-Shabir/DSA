// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     int largestElement(vector<int> &arr)
//     {
//         int largest = arr[0];
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if (arr[i] > largest)
//             {
//                 largest = arr[i];
//             }
//         }
//         return largest;
//     }
// };

// int main()
// {
//     Solution sol;
//     vector<int> arr = {10, 25, 5, 90, 42};
//     int result = sol.largestElement(arr);
//     cout << "Largest Element: " << result << endl;
//     return 0;
// }

// User Input
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int largestElement(vector<int> &arr)
    {
        int largest = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }
        return largest;
    }
};

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution sol;
    int result = sol.largestElement(arr);

    cout << "Largest Element: " << result << endl;

    return 0;
}
