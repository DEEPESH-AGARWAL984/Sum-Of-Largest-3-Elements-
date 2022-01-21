//Write a C++ program to find the sum of largest three elements in an array.
#include<iostream>
using namespace std;
	
	void BS(int arr[],int n){
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
				}
				
			}
		}
	}
//Printing array in descending order.
void display(int arr[],int n){
		for(int i=n-1;i>=0;i--){
			cout<<" "<<arr[i];
		}
	}
	
int main(){
		
	int n;
	cout<<"Enter the size: ";
	cin>>n;
		
	int array[n];
	cout<<"Enter the elements in array: ";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
		
	BS(array,n);
	display(array,n);
	int sum = array[n-1]+array[n-2]+array[n-3];
	cout<<"\nSum Of Largest 3 elements i.e." <<array[n-1]<<" + "<<array[n-2]<<" + "<<array[n-3]<<" = "<<sum;
		 
}
