#include <iostream>
#include <string>
using namespace std;

const int UMPRIMO = 13;
const int M = 10;

int f_hash (string word){
	long hash = 0;
	for (unsigned j = 0; j < word.size(); j++) {
		hash = (UMPRIMO * hash + word[j]) % M;   
	}
	return hash;
}


int main() {
	
	int n, hash, hash_total=0;
	cin >> n;
	
	string word[n];
	for(int i=0; i<n; i++){
		cin >> word[i];
	}
	
	for(int j=0; j<n; j++){
		hash = f_hash(word[j]);
		hash_total += hash;
		cout << hash << " ";
	}
	
	cout << hash_total;

	return 0;
}