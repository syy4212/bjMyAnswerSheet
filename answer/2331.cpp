#include <cstdio>
#include <cmath>

int a,p,cnt=1;
int *arr;


int main(){
    scanf("%d%d",&a,&p);
    arr = new int[300000];
    while(arr[a]==0){
        arr[a] = cnt;
        int tmp = 0;
        while(a != 0){
            tmp += pow((double)(a%10), (double)p);
            a = a/10;
        }
        a = tmp;
        cnt++;
    }
    printf("%d\n",arr[a]-1);
    delete[] arr;
}