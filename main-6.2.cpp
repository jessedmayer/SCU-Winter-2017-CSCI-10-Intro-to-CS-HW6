#include <iostream>

using namespace std;

void find_greater(int a[], int size, int n){
    for(int i=0; i<size; i++){
        if(n<a[i]){
            cout<<a[i]<<" ";
        }
    }

}

int main()
{
int size=5;
int a[]={7,3,9,2,4};
int n=5;



cout<<"The numbers greater than "<<n<<" are: ";
find_greater(a,size,n);
    return 0;
}
