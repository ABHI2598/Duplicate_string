#include <bits/stdc++.h> 
#include<sstream>
#include<algorithm>
#include<map>
#include<string>
#include<iterator>

using namespace std; 

void printDuplicate(string st) 
{  
	int i = 0;
    map<string,bool> Ab; 
	stringstream ss(st); 
	string Word;
	while (ss >> Word){
        Ab[Word]++; 
    }
    if(Ab.find(Word[i]) == Ab.end()){
        Ab.insert(pair<string,bool>(Word[i] , false))
    }else{
        Ab[Word[i]] = true;
    }
	map<string, bool>::iterator m; 
	for (m = Ab.begin(); m != Ab.end(); m++){
        if(m -> second == true ){
            cout << m->first << " "; 
        }
    }
		
} 
int main() 
{ 
	string st = "Aman Ankit Danush Abhi Ankit Aman Nakul Vansh Aman Nakul "; 
    int n = 10;
	printDuplicate(st); 
	return 0; 
} 
