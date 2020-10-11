#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a;scanf("%d",&a);
    int at=0;
    for(int i=0;i<a;i++){
        int s;scanf("%d",&s);
        t[s]++;
        while(t[at]){
            at++;
        }
        printf("%d\n",at);
    }
 
}
