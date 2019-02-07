#include <iostream>

using namespace std;

int main()
{
double r[12];
string m[]={"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
double highest=r[0];
double lowest=r[0];
int hcount=0;
int lcount=0;
double total=0;
double average=0;


for(int i=0; i<12; i++){
    cout<<"Enter rainfall for "<<m[i]<<": ";
    cin>>r[i];
}
for (int i=0; i<12; i++){
    total+=r[i];
    average=total/12;

    if (highest<r[i]){
        highest=r[i];
        hcount=i;
    }
    if (lowest>r[i]){
        lowest=r[i];
        lcount=i;
    }
}
cout<<"Total rainfall of the year: "<<total<<endl;
cout<<"Average monthly rainfall: "<<average<<endl;
cout<<m[hcount]<<" has the highest rainfall"<<endl;
cout<<m[lcount]<<" has the lowest rainfall"<<endl;


    return 0;
}
