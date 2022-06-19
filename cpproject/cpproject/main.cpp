#include <iostream>
using namespace std;
int c[100009];
bool cmp(const int&a,const int&b){
    return a>b;
}
int main(){
    int n,L;
    cin>>n>>L;
    for(int i=1;i<=n;i++) cin>>c[i];
    sort(c+1,c+1+n,cmp);
    int h=0;
    for(int i=1;i<=n;i++){
        if(c[i]>=i) h=i;
    }
    int ans=h;
    if(c[h+1]==h){
        if(L>=h+1)
        else if() ans++;
    }
    return 0;
}
