#include<iostream>
#include<string>

using namespace std;

int *apply_all(int array1,size_t size1,int array2,size_t size2){
	
	int *result{nullptr};
	result=new int[size];
	for(size_t i{0},i<size2,i++){
		for(size_t j{0},j<size1;j++){
			for(size_t k{0};k<size;k++){
				*(result+k) = array2[i]*array1[j];
			}
		}
	}
	return result;
	
}

void print(const *int const array,size_t size){
	cout<<"[ ";
	for(size_t i{0},i<size,i++)
		cout<<array[i]<<" ";
		
	cout<<" ]";
	cout<<endl;
	
	
	
}

int main(){
	
	const size_t array1_size{5};
	const size_t array2_size{3};
	
	int array1[]{1,2,3,4,5};
	int array2[]{10,20,30};
	
	cout<<"Array 1: ";
	print(array1,array1_size);
	
	cout<<"Array2: ";
	print(arra2,array2_size);
	
	int *results = apply_all(array1,array1_size,array2,array2_size);
	constexpr size_t results_size{array1_size*array2_size};
	
	cout<<"Result: ";
	print(results,results_size);
	
	cout<<endl;
	
	
	return 0;
}
