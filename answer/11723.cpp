#include <cstdio>
#include <iostream>
#include <bitset>


using namespace std;

int n, m;


int main() {

    int n;
    scanf("%d", &n);
    bitset<21> set;
    while(n--) {
        char query[10];
        int num;
        scanf("%s", &query);
        if(query[0] == 'a' && query[1] == 'd') {
            scanf("%d", &num);
            set.set(num, 1);
        }else if(query[0] == 'c') {
            scanf("%d", &num);
            if(set.test(num))
            	printf("1\n");
            else 
            	printf("0\n");
        }else if(query[0] == 'r') {
            scanf("%d", &num);
            set.set(num, 0);
        }else if(query[0] == 't') {
            scanf("%d", &num);
            set.flip(num);
        }else if(query[0] == 'a' && query[1] == 'l') {
            set.reset();
            set.flip();
        }else {
            set.reset();
        }
    }
}