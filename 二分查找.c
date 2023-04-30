#include<stdio.h>
int main()
{
    //二分查找一个有序数组中的一个数
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 6;//要找的数
    int sz = sizeof(arr);//计算元素个数
    int left = 0;//左下标
    int right = sz - 1;//右下标
    while(left <= right)
    {
        int mid = (left + right) / 2;//中间元素下标
        if(arr[mid] > k)
        {
            right = mid - 1;
        } 
        else if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            printf("找到了，下标是%d",mid);
            break;
        }
    }
    if(left > right)
    printf("找不到这个数");

    return 0;
}