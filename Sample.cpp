#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> A,int k){
    int n=(int)A.size();

    int lg=log2(n-1)+1;

    int pos=0;

    for(int i=lg;i>=0;i--){
        if(A[pos]==k)
            return pos;

        int newpos =  pos|(1<<i);

        if((newpos <= n) && (A[newpos]<=k)){
            pos=newpos;
        }
    }
    return ((A[pos]==k)?pos:-1);
}

int main(){
    vector<int> vec={-2,10,100,250,32315};
    int result=binarySearch(vec,10);
    (result==-1)?
        cout<<"Elements not found"<<endl:
        cout<<"Elements found at position "<<result<<endl;
    return 0;
}