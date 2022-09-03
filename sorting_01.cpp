#include<bits/stdc++.h>
using namespace std;

struct Student{
	string name;
	int marks;
};

bool xyz(Student a, Student b){
	if(a.marks > b.marks){
		return true;
	}
	else{
		return false;
	}	
}
int main(){
	vector<Student>v;
	
	v.push_back({"Amar", 75});
	v.push_back({"Akbhar", 80});
	v.push_back({"Anthony", 60});
	sort(v.begin(), v.end(), xyz);
	
	int rank = 1;
	for(int i = 0; i<v.size(); i++){
		cout<<rank++<<" "<<v[i].name<<" "<<v[i].marks<<endl;
	}
}
