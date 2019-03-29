#include <iostream>

using namespace std;
bool equivalant(int a[],int b[],int n){

    int count=0;
    
    
    for(int shift=0;shift<n;shift++) {    //outer loop
    
    for(int i=0;i<n;i++) {
      int bIndex=(i+shift)%5; 
      if(a[i]==b[bIndex])count++; 
                         }  //inner loop
                         
     if(count!=n)count=0;//reset 
     if(count==n)break;   // termination
                          } //outer loop
                             
                             
       if(count==n){return true;}
       else       {return false;}
  
    
}

int main() {
        cout<<"We have two array, you can test if it is true by chaning the content of the declared array"<<endl;
	int a[]={1,2,3,4,5};
	int b[]={3,4,5,1,2};
   cout<<"The first array is ";
   for(int x:a){cout<<x<<" ";}
   cout<<endl;
   
   cout<<"The second array is ";
    for(int x:b){cout<<x<<" ";}
    cout<<endl;
    
	bool result=equivalant(a,b,5);
        if(result)cout<<"true"<<endl;
        else cout<<"not equivalant"<<endl;
	
	return 0;
}

