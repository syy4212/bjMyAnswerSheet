#include <iostream>

using namespace std;

int t,max_long,total_long,step;

int main() {
    cin >> t;
    
    while (t--) {
        int start,end,distance;
        max_long=1,total_long=1,step=1;
        
        cin >> start >> end;
        distance = end - start;
        
        while (total_long < distance) {
            total_long = total_long + max_long + max_long+1;
            step += 2;
            max_long++;
        }
        if (total_long == distance || (total_long - max_long) < distance) {
            cout << step << endl;
        }
        else {
            cout << step-1 << endl;
        }
    }
    
    return 0;
    
}