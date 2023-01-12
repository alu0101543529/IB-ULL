    #include <iostream> 
     
    using namespace std; 
     
    int main() { 
        float marks, total; 
     
        for( int i=1; i<=10; i++ ) { 
            cout << "Enter subject " << i << " marks : "; 
            cin >> marks; 
            total += marks; 
        } 
     
        cout << "Average marks : " << (total / 10.0) << endl; 
    } 
