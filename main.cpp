#include <iostream>
#include <cmath>
#include <experimental/iterator>


using namespace std;

void reversing(int inp_list[], int size){
    int start_indx{0},last_indx{size-1},temp,end{0};
    for(;start_indx<=(size/2);start_indx++,last_indx--){
        temp=inp_list[start_indx];
        inp_list[start_indx]=inp_list[last_indx];
        inp_list[last_indx]=temp;
    }
}

int list_to_int(int inp_list[], int size){
    int end{0};
    for(int i=0;i<size;i++){
        inp_list[i]=inp_list[i]*(pow(10,size-i-1));
        end+=inp_list[i];
    }
    return end;
}

int *int_to_list(int inp_int){
    string s= to_string(inp_int);
    int *lst=new int[s.size()];
    for(int i=0;i<s.size();i++){
        lst[i]=s[i]-48;
    }
    return lst;
}


int main() {
    int list1[]{2,4,3},list2[]{5,6,4};
    reversing(list1, size(list1));
    reversing(list2,size(list2));
    int intend=list_to_int(list1,size(list1))+list_to_int(list2,size(list2));
    int* ptr=int_to_list(intend);
    reversing(ptr,size(list1));
    for(int i=0;i<(size(list1));i++){
        cout<<ptr[i]<<", ";
    }
    delete ptr;
    
}
