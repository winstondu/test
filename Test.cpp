#include <iostream>
#include "testclass.h"
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
    cout<< ('x'+'x')<<endl;
    cout<<'a'<<endl;
    int* arrayptr;
    cout<<"Enter array size"<<endl;
    int enter;
    cin>>enter;
    arrayptr=new int[enter];
    for (size_t i=0;i<enter; i++){
        arrayptr[i]=i;
    }
    int sum=0;
    for (size_t i=0;i<enter; i++){
        sum+=arrayptr[i];
    }
    cout<<sum<<endl;
    vector<int> v;
    for (size_t i=317; i<1000; i++){
        v.push_back((i*i));
    }
    int first=0;
    int last =0;
    for (vector<int>::iterator i=v.begin(); i!=v.end(); ++i){
        first = (*i)/1000;
        last = (*i)%1000;
        if (first!=(last-1)){
            v.erase(i);
            --i;
        }
    }
    for (vector<int>::iterator i=v.begin(); i!=v.end(); ++i){
    cout<<*i<<endl;
    }
    testclass instance1;
    instance1.printname();
    string str;
    string str2;
    cin>>str;
    cout<<str<<endl;
    cin>>str2;
    cout<<str2<<endl;
    int end=0;
    cin>>end;
}