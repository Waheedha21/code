#include<iostream>
using namespace std;
class box{
	private:
		int length;
		public:
			box(){
				length=16;
				
			}
			friend void displaylength(box b);
};
void displaylength(box b){
cout<< "length is:"<<b.length<<endl;
}
int main(){
	box b1;
	displaylength(b1);
	
}
