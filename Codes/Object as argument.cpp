#include<iostream>
using namespace std;
class dist{
	
	private:
		int feet,inch;
	public:
	void setdata(){
		cout<<"Enter value of feet and inch : "<<endl;
		 cin>>feet>>inch;
}

    void showdata(){
    	cout<<"Feet is :"<<feet<<" Inch is : "<<inch<<endl;
    	
	}
	dist add(dist c){
		dist temp;
		temp.feet=c.feet+feet;
		temp.inch=c.inch+inch;
		 if(temp.inch>=12){
		 	temp.inch=temp.inch-12;
		 	temp.feet++;
		 }
		return temp;
	}
	
	 
	
};

int main(){
	dist c1,c2,c3;
	c1.setdata();
	c2.setdata();
	c3=c1.add(c2);
	c3.showdata();
	
	
}
