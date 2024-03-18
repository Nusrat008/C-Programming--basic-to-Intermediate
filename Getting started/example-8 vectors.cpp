#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>test_score(3);
	test_score[0]=100;
	test_score[1]=90;
	test_score[2]=189;
	cout<<"\n Test score using vector syntax: "<<endl;
	cout<< test_score.at(0)<<endl;
	cout<< test_score.at(1)<<endl;
	cout<< test_score.at(2)<<endl;
	cout<<"\n Enter 3 test score: ";
	cin>>test_score.at(0);
	cin>>test_score.at(1);
	cin>>test_score.at(2);
	cout<<"\n Updated test score: "<<endl;
	cout<< test_score.at(0)<<endl;
	cout<< test_score.at(1)<<endl;
	cout<< test_score.at(2)<<endl;
	cout<<"\n Enter a test score to add to the vector:";
	int score_to_add{0};
	cin>>score_to_add;
	test_score.push_back(score_to_add);
	cout<<"\n Enter one more test score to add to the vector:";
	cin>>score_to_add;
	test_score.push_back(score_to_add);
	cout<<"\n Test score are now:"<<endl;
	
	cout<<test_score.at(0)<<endl;
	cout<<test_score.at(1)<<endl;
	cout<<test_score.at(2)<<endl;
	cout<<test_score.at(3)<<endl;
	cout<<test_score.at(4)<<endl;
	cout<<"\n There are now "<<test_score.size()<<" scores in the vector"<<endl;
	
	return 0;
}
