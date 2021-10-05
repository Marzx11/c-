#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int num;
	int input;
	int size = 0;
	int array[40];
	
	cout << "Number of values to graph:";
	cin >> num;

	
		for(int i = 0; i < 40; i++){
			cin >> input;
			 if(size == (num - 1))
        {
            break;
        }
			array[i] = input;
			size++;
		}
    
    int high = array[0];
    
    for(int c = 0; c < size; c++){
    	if(array[c] > high)
    	high = array[c];
	}
    
    for(int row = high; row >= 1; row = row - 1){
    	for(int col = 0; col <= num; col++){
    		if(array[col] >= row)
    		cout << "#";
    		else
    		cout << " ";
    		
		}
	}
	
}
