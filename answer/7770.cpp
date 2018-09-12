#include <cstdio>

using namespace std;

int n,min_step_used,i;

int main(){
    scanf("%d",&n);
    min_step_used = i = 0;
    do{
        i++;
        min_step_used += 2*i*(i-1)+1;
    }while(n>=min_step_used);
    printf("%d",i-1);
}