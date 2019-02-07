#include <iostream>


using namespace std;

bool search_char(char ch[], int size, char c){



    for(int i=0; i<size; i++){
        if(ch[i]==c){
            return true;
        }
    }
    return false;

}

int main()
{
int size=5;
char c='f';
char ch[]={'a','c','j','f','r'};

if(search_char(ch,size,c)==true){
    cout<<"The character "<<c<<" is found in the array!";
}
else{
    cout<<"The character "<<c<<" is NOT found in the array!";
}



    return 0;
}
