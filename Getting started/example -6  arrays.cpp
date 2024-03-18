  #include<iostream>

using namespace std;

int main(){
	char vowels[]{'a','e','i','o','u'};
	cout<<"\n The first vowel is: "<<vowels[0]<<endl;
	cout<<" The last vowel is: "<<vowels[4]<<endl;
	double hi_tem[]{76.9,90.8,67.5,89.7};
	cout<<"\n The first high tempr is: "<<hi_tem[0]<<endl;
	hi_tem[0]=100.7;
	cout<<"\n The changing first high tempr is now: "<<hi_tem[0]<<endl;
	int test_score[]{100,90,68,80,30};
	cout<<" \n First test score at index 0: "<<test_score[0]<<endl;
	cout<<" Sceond test score at index 1 : "<<test_score[1]<<endl;
	cout<<" Third test score at index 2: "<<test_score[2]<<endl;
	cout<<" Fourth test score at index 3: "<<test_score[3]<<endl;
	cout<<" Fifth test score at index 4: "<<test_score[4]<<endl;
	cout<<"\n Enter 5 test score:"<<endl;
	cin>>test_score[0];
	cin>>test_score[1];
	cin>>test_score[2];
	cin>>test_score[3];
	cin>>test_score[4];
	cout<<"\n The update array is:"<<endl;
	cout<<" \n First test score at index 0: "<<test_score[0]<<endl;
	cout<<" Sceond test score at index 1 : "<<test_score[1]<<endl;
	cout<<" Third test score at index 2: "<<test_score[2]<<endl;
	cout<<" Fourth test score at index 3: "<<test_score[3]<<endl;
	cout<<" Fifth test score at index 4: "<<test_score[4]<<endl;
	cout<<"\n What the name of array is:"<<test_score<<endl;
	return 0;
}
