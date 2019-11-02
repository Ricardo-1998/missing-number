#include <iostream>
using namespace std;
int max(int arr[],int n){
	int max=0;
	for(int i=0; i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;

}


int ms(int n){
	int arr[n],n1;
	for(int i=0;i<n;i++){
		cout<<"numero "<<i+1<<": "<<endl;
		cin >>arr[i];
	}
	n1=max(arr,n);
	if(n1%2==0){
		n1=n1+2;
	}else{
		n1+=1;
	}
	
	return n1;
}



int main(){
	
	int t,n,num;
	
	cin>>t;
	for(int i=0;i<t;i++){
		cout <<"caso " <<i+1<<": "<<endl;
		cin>>n;
		num=ms(n);
		cout<<"numero perdido: "<<num<<endl;
	}
}