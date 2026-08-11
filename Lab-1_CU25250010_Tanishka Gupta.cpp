#include <iostream>
using namespace std;
int main(){
    int arr[] = {12,23,31,11,32}, Key = 31;
    int length = sizeof(arr)/sizeof(arr[0]), i=0;
    int high = length - 1, low = 0, mid;
    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] == Key){
            cout<<"Found at index "<<mid;
            break;
        }
        else if(arr[mid] < Key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}


#include <iostream>
using namespace std;
int main(){
    int arr[5] = {12,23,31,11,32}, Key = 31;
    int length = sizeof(arr)/4 , i=0;
    for( i =0 ; i<length ; i++){
        if(arr[i] == Key){
            cout<<"Found at index "<<i;
        }
        
    }

}
