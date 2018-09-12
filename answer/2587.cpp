#include <cstdio>
#include <algorithm>

using namespace std;

int t=5,ave=0;
int arr[5];

int main(){
    while(t--){
        scanf("%d",&arr[t]);
        ave += arr[t];
    }
    sort(arr,arr+5);
    printf("%d\n%d",ave/5,arr[2]);
}