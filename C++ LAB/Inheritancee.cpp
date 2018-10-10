#include<iostream>
using namespace std;
class egg{
	public:
		
	int	quantity;
	public:
		void cost(int q){
		quantity = q;
			
		}
};
class price : public egg {
	public:
		int p;
		
	public:
		void rate(){
			p = quantity * 9;
		}
		void display(){
		   cout<<p;
		}
};
main(){
	price p1;
	p1.cost(10);
	p1.display();
}
