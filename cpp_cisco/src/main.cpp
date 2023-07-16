#include <iostream>
#include <string>
using namespace std;

//define your function here

void computeCubes(int &num1, int &num2, int &num3)
{

        num1 = num1 * num1 * num1;
        num2 = num2 * num2 * num2;
        num3 = num3 * num3 * num3;

}


string test(int num1, int num2, int num3){

  string ans="";

  //call computeCubes function here
  computeCubes(num1,num2,num3);

  cout<< "Value of num1 is: "<< num1 <<endl;
  cout <<"Value of num2 is: " << num2 <<endl;
  cout<<"Value of num3 is: "<< num3<<endl;

  ans = to_string(num1) + " " +to_string(num2) + " " + to_string(num3);
  cout <<"ans is: "<<ans;
  return ans;
}

int main(){
	int num1, num2, num3;
	cin>>num1>>num2>>num3;
	cout<<test(num1, num2, num3);
	return 0;
}
