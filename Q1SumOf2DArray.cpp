#include <iostream>
using namespace std;

int main(){
	int n,m;
	cout << "enter the number of row : " ;
	cin >> n;
    cout << "enter the number of row : " ;
	cin >> m;
	int arr[n][m];
	for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
		    cin >> arr[i][j];
	    }
	}

	int sum =0;
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
		    sum+=arr[i][j];
	    }
	}
    cout <<"Sum: "<<sum;
    return 0;
	
}
