#include<iostream>
using namespace std;

#include<vector>
#include<ctime>


int main(){
    int n;
    cin>>n;
     vector<int>nums;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
   

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
        	
    }
clock_t tStart = clock();
    
    for(int i=1;i<n;i++){
        
        int key=nums[i];
        int counter=i-1;
        while(counter>=0){
            if(key>=0){
                
                if(nums[counter]>0){
                    if(nums[counter]>key){
                        nums[counter+1]=nums[counter];
                        counter--;
                    }
                    else{
                        break;
                    }
                }
                else{
                    break;
                }
            }
            
          
             else{
                 
                 if(nums[counter]>=0){
                     nums[counter+1]=nums[counter];
                     counter--;
                 }
                 else{
                     if(abs(nums[counter])>abs(key)){
                       nums[counter+1]=nums[counter];
                         counter--;
                     }
                     else{
                         break;
                     }
                 }
             }
        }
        nums[counter+1]=key;
    }
    cout<<endl;
double time1=(double)(clock() - tStart)/(double)CLOCKS_PER_SEC;
    
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
        
    }
cout<<"Time taken is "<<time1<<endl;
    
    return 0;
    
}
