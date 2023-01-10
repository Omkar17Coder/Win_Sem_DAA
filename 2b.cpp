#include<iostream>
using namespace std;
#include<vector>
#include<ctime>

int main(){
    int n;
    cin>>n;
    int a;
    int k;
    vector<int>store;
    for(int i=0;i<n;i++){
        cin>>a;
        store.push_back(a);
    }
   
cin>>k; // Value to be searched 
// Insertion Sort
    for(int i=1;i<n;i++){
        int key=store[i];
        int counter=i-1;
        while(counter>=0 && store[counter]>key){
            store[counter+1]=store[counter];
            counter--;
        }
        store[counter+1]=key;
    }
clock_t tStart = clock();
// Approach -1
Linear Search.
bool flag=true;
for(int i=0;i<n;i++
){

if(store[i]==k){
flag=false;
cout<<”Location:”<<i<<endl;
break;
}

}
if(flag){
cout<<”Not found”<<endl;
}
}
double time1=(double)(clock()-tStart)/CLOCKS_PER_SEC;

clocks_t gs=clock();

// approach-2 Binary Search
bool flag1=true;
int s=0;
int e=n-1;
int mid;

while(s<=e){
mid=s+(e-s)/2;
if(store[mid]==k){
cout<<”Loaction:”<<mid<<endl;
flag=false;
break;
}
else if(store[mid]>k){
e=mid-1;
}
else{
s=mid+1;
}
}
if(flag){
cout<<”Not found”;

}
double time2=(double)(clocks()-gs)/CLOCKS_PER_SEC;
cout<<"Time for Linear Search:"<<time1<<endl;
cout<<"Time for Binary Search:"<<time2<<endl;

}









