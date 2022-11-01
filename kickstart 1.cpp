#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int T;
    cin>>T;
    int cs=1;
    
    while(T--){
    
    int M,N,P;
    cin>>M>>N>>P;
    int count=0;

    int A[M][N];

    for(int i=0;i<M;i++){
    for(int k=0;k<N;k++){
        cin>>A[i][k];}
    }

    for(int j=0; j<M;j++){
    for(int k=0; k<N;k++){
        
        if(A[P-1][k]<A[j][k])
        {
            count=count+ (A[j][k]-A[P-1][k]);
            A[P-1][k] = A[P-1][k] + (A[j][k]-A[P-1][k]);
        }
         
    }
    }
    
    cout<<"Case #"<<cs<<": "<<count<<endl;
    cs=cs+1;    
    }
return 0;
}
