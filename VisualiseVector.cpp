//C++ program to visualize Vector of Vectors 
#include <iostream> 
#include <vector> 
using namespace std; 
  
// Defining the rows and columns of 
// vector of vectors 
#define row 3
#define col 3
  
int main() 
{ 
    // Initializing the vector of vectors 
    vector<vector<int> > a; 
  
    // Elements to insert in column 
    int num = 10; 
  
    // Inserting elements into vector 
    for (int i = 0; i < row; i++) { 
        // Vector to store column elements 
        vector<int> a1; 
       
       //pushing values in vector ‘a1’
        for (int j = 0; j < col; j++) { 
            a1.push_back(num); 
            num += 5; 
        } 
  
        // for creating a 2D vector ‘a’ pushing 1D vector ‘a1’ into it
        a.push_back(a1); 
    } 
  
    // Displaying the 2D vector ‘a’
    cout<<"2D vector contains:"<<"\n";
    for (int i = 0; i < a.size(); i++) { 
        for (int j = 0; j < a[i].size(); j++) 
            cout << a[i][j] << " "; 
        cout << endl; 
    } 
    //Deleting in 2D vector ‘a’
    a[2].pop_back(); 
    a[1].pop_back(); 
    
    cout<<"2D vector traversal after deletion:"<<"\n";
    //Traversing in 2D vector ‘a’  using iterator after deletion
    for (int i = 0; i < a.size(); i++) { 
        for ( 
            auto it = a[i].begin(); 
            it != a[i].end(); it++) 
            cout << *it << " "; 
        cout << endl; 
    } 
    return 0; 
}