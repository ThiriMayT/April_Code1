#include<iostream>
using namespace std;
int main(){
int const NUM=10;
float height[NUM]={5.6,5.5,5.3,4.9,5.2,5.6,4.8,5.0,4.9,5.1};
float totalHeight=0;
float avgHeight=0;
float shortest=5.1;
float tallest=4.9;
for(int i=0;i<NUM;i++){
   totalHeight+=height[i];
   if(shortest>height[i]){
    shortest=height[i];
    if (tallest<height[i]){
        tallest=height[i];
    }
   }

}
cout<<"Shortest height is " <<shortest<<endl;
cout<<"Tallest height is :"<<tallest<<endl;
avgHeight=totalHeight/NUM;
cout<<"Average height : "<<avgHeight<<endl;
return 0;
}
