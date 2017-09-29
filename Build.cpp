#include <iostream>
using namespace std;

#define N 8


int segmentTree[4*N];

int Arr[8];

void build(int s,int e,int node_num)
{
    if(s==e)
    {   cout <<node_num<<" "<<s<<" "<<e<<" "<<Arr[s]<<endl;
        segmentTree[node_num]=Arr[s];
        return;
        
    }
    int m=(s+e)/2;
    
    build(s,m,node_num*2);
    build(m+1,e,node_num*2+1);
    segmentTree[node_num]=segmentTree[node_num*2]+segmentTree[node_num*2+1];
    return;
}


int main()
{
 
    Arr[0]=0;
    Arr[1]=1;
    Arr[2]=2;
    Arr[3]=3;
    Arr[4]=4;
    Arr[5]=5;
    Arr[6]=6;
    Arr[7]=7;
    
    
    build(0, 7, 1);
  
    
    for(int i=1;i<=15;i++)cout <<segmentTree[i]<<" ";
    
    
    
}
