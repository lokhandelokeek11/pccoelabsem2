#include <iostream>
using namespace std;

class sorting{
  private:
  int i,j,n;
  int a[100];
  
  public:
  void readarray();
  void showarray();
  void a_srt();
  void b_srt();
};

void sorting::readarray(){
    cout<<"Enter the size of elements of array: "  ;
    cin>>n;
    cout<<"Enter the elemetns of array: ";
    for(int i = 0; i<n;i++){
     cin>>a[i];
    }

}
void sorting::a_srt(){
    for(int i =0;i<n;i++){
        for(int j = i+1; j<n; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void sorting::b_srt(){
      for(int i =0;i<n;i++){
        for(int j = i+1; j<n; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void sorting::showarray(){
  
    for(int i = 0; i<n; i ++){
        cout<<a[i]<<" ";
    }
}

int main() 
{
  sorting X;
  X.readarray();
  X.a_srt(); 
    cout<<"The sorted array in ascending order is: ";
  X.showarray();
  X.b_srt();
    cout<<"The sorted array in descending order is: ";
  X.showarray();
}