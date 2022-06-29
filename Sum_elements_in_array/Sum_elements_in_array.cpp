#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    const size_t s = 10;
    int arr[s] = {};
    int level,start_range,end_range,temp = 0;
    cout << "enter start range -> ";
    cin >> start_range;
    cout << "Enter end of range -> ";
    cin >> end_range;
    cout << "Enter level -> ";
    cin >> level;
    for (int i = 0; i < s; i++) {
        arr[i] = start_range + rand() % (end_range-start_range);
        if (arr[i] < level) {
            temp += arr[i];
        }
        cout << arr[i] << " ";
    }
    cout << endl;
    cout <<"Sum = "<< temp;

    return 0;
}