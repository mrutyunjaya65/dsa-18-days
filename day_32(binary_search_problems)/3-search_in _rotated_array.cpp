// leetcode-33
// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/1140994378/


// class Solution {
// public:
//     int search(vector<int>& arr, int target) {
//         int start=0, end=arr.size()-1, mid;
//         while(start<=end)
//         {
//             mid=start+(end-start)/2;

//             //i find my element
//             if(arr[mid]==target)
//             return mid;

//             // left side sorted
//             else if(arr[mid]>=arr[0])
//             {
//                 if(arr[start]<=target && arr[mid]>target)
//                 {
//                     end=mid-1;  //shift to left side
//                 }
//                 else
//                 start=mid+1;    //shift to right side
//             }

//             //right side sorted
//             else
//             {
//                 if(arr[mid]<target && arr[end]>=target)
//                 start=mid+1;  //right side shift
//                 else
//                 end=mid-1;
//             }
//         }
//         return -1;
//     }
// };