// #include <iostream>

// using namespace std;

// int binarySearch(int arr[], int size, int key)
// {

//     int start = 0;
//     int end = size - 1;

//     int mid = (start + end) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//             /* code */
//         }
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//             /* code */
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = (start+end)/2;
//     }
//     return -1;
// }

// int main()
// {
//     int even[6] = {2, 4, 5, 7, 18, 23};
//     int odd[5] = {1, 4, 6, 14, 18};
//     int evenIndex = binarySearch(even, 6, 23);
//     cout << "Index of 23 is " << evenIndex << endl;
//     return 0;
// }


//You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
//Now, your task is to find the first and last occurrence of ‘K’ in ARR.

