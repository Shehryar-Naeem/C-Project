#include<iostream>
using namespace std;
// Base Class
class garden{
	protected:
	string flowerName;
	int flowerPrices;
	string flowerColor;
	public:
		void setFlowersInfo(){
			cout<<"Enter flower name: ";
			cin>>flowerName;
			cout<<"Enter flower prices: ";
			cin>>flowerPrices;
			cout<<"Enter flower color: ";
			cin>>flowerColor;
		}
};
class gardenInfo : public garden{
	public:
		string season;
		void seasoninfo(){
			cout<<"Please enter the season name: ";
			cin>>season;
		}
		void getFlowerInfo(){
			cout<<"\n"<<"Your flower Name is: "<<flowerName<<endl;
			cout<<"Your flower price is: "<<flowerPrices<<endl;
			cout<<"Your flower color is: "<<flowerColor<<endl;
			cout<<"Your current season is: "<<season;
		}
};
int main(){
	gardenInfo gardenData;
	gardenData.setFlowersInfo();
	gardenData.seasoninfo();
	gardenData.getFlowerInfo();
	return 0;
}
