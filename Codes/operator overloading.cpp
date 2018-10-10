#include<iostream>
#include<conio.h>
using namespace std;
class increment{
	private:
		int x;
	public:
		void setData(int a){
			x=a;
		}
		void showData(){
			cout<<"x = "<<x<<endl;
		}
		increment operator++(){ //pre-increment
			increment temp;
			temp.x=++x;
			return temp;
		}
		increment operator++(int){ //post-incremnet
			increment temp;
			temp.x=x++;
			return temp;
		}
};
using namespace std;
int main(){
increment i1,i2;
i1.setData(5);
i1.showData();
i2=++i1;
i1.showData();
i2.showData();

return 0;
}
