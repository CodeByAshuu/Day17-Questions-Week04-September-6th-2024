#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "enter the number of elements : " ;
	cin >> n;
	int arr[n];
	for(int i=0; i<n;i++){
		cin >> arr[i];
	}

	int key;
	cout << "Enter value to find in array : " ;
	cin >> key;
    bool count= false;
	for(int i=0;i<n;i++){
		if(key==arr[i]){
            count = true;
		}
	}
    if(count == false){
        cout << "No";
    }else{
        cout << "Yes";
    }
}
