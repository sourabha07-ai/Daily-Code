#include <iostream>
using namespace std;

int main(){
    int a[] ={10,20,40,70,90,100};
    int b[] = {30,50,60,80};

    int m = size(a),n = size(b);
    cout << m <<" " <<n <<endl;

    int c[m+n];
    int i = 0,j = 0, k = 0;

    while(i < m && j < n){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
            k++;
        }else{
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while(j < n){
        c[k++] = b[j++];
    }
    while(i < m){
        c[k++] = a[i++];
    }

    for(int i = 0; i < m+n;i++){
        cout << c[i] <<" ";
    }
}
