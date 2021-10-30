#include <iostream>

using namespace std;
int binarySearch(int, int, int,int);

int binarySearch(int arr[],int searchval,int start,int limit){
    cout<<"\n+++++++start :"<<start<<"|| end"<<limit;
    int mid= start+(limit-start)/2;
    cout<<"\n mid value"<<mid;
    if (arr[mid]==searchval) {
        return 1;
    }
    else if (mid == limit){
        return 0;
    }
    else if (arr[mid]>searchval){
        return binarySearch(arr, searchval, start, mid);
    }
    else if(arr[mid]<searchval){
        return binarySearch(arr, searchval, mid+1, limit);
    }
    return 0;
}

int main(){
    int arr[]{2,5,7,45,56,67,78,90,98,101}, searchval, limit, start{0}, flag = -1;
    cout<<"\n enter the value to be searched via bianry search algorith: ";
    cin>>searchval;
    start = 0;
    limit = sizeof(arr)/sizeof(arr[0]);
    flag = binarySearch(arr,searchval,start,limit);
    if (flag == 0) {
        cout<<"the value is not found"<<endl;
    }
    else if (flag == -1){
        cout<<"no change in flag";
    }
    else if(flag == 1){
        cout<<"the element is found";
    }
    return 0;
}