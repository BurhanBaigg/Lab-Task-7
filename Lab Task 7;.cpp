#include <iostream>
using namespace std;

int main () {
int bar [10] = {};
cout<<"Enter 10 values: "<<endl;
for (int i=0;i<10;i++) {

cout;
cin>>bar[i];
}
for (int j=0;j<10;j++) {

cout<<bar[j]<<" ";

}
return 0;
}


int main () {
int sum[5];
int su,pro;
cout<<"Enter 5 terms: "<<endl; 
for (int i=0;i<5;i++) {
cout;
cin>>sum[i];

su+=sum[i];
pro*=sum[i];

}
cout<<"Sum of the values is: "<<su<<endl;
cout<<"Product of the values is: "<<pro;
return 0;
}




int size;
cout<<"Enter size of diamond: "<<endl; cin>>size;
int half=size/2;
char shape[size];
for (int i=0;i<=size-1;i++) {
	shape[i]=' ';
}
for (int i=0; i<=half; i++) {
for (int j=0; j<=size;j++) {
	shape[half-i]='*';
	shape[half+i]='*';
	cout<<shape[j];
}
cout<<endl;
}
for (int i=half;i>=0;i--) {
	for (int j=0;j<size;j++) {
		shape[half-i]=' ';
		shape[half+i]=' ';
		cout<<shape[j];
	}
	cout<<endl;
}
    return 0;
}


