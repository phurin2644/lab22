#include<iostream>
#include<string>
#include<set>

using namespace std;

int count(int* x,unsigned int y){
	unsigned int count;
	set<int> myset;
	for(unsigned int i=0;i<y;i++){
		myset.insert(x[i]);
	}
	count = myset.size();

	return count;
}