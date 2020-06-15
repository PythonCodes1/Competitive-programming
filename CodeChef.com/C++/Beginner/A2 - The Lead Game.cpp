#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int p1, p2;
	int w = 0, lea = 0;
	int p1Sum = 0, p2Sum = 0;
	
	// For loop to go through all of the scores
	for(int i=0; i<n; i++){
	    int p1, p2;
	    int currentLead = 0;
	    // Get the scores
		cin >> p1 >> p2;
	    p2Sum += p2;
	    p1Sum += p1;
	    
	    if(p1Sum > p2Sum){
	        currentLead = p1Sum - p2Sum;
	        
	        // If the current lead is better than the lead, update
	        if(currentLead > lea){
	            lea = currentLead;
	            w = 1;
		}
	    }else{
	        currentLead = p2Sum - p1Sum;
	        
	        // If the current lead is better than the lead, update
	        if(currentLead > lea){
	            lea = currentLead;
	            w = 2;
	        }
	    }
	}
	cout << w << " " << lea;
	return 0;
}
