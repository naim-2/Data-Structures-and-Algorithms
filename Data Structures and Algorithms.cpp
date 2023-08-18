#include <iostream>
using namespace std;

class my_Array {
    private:
    int x[10];

    public:
        void insert(){

        for(int i=0; i<10; i++){
         cout<<"Enter value of x in position "<<i<<endl;
         cin>>x[i];
         }

     }

        void display(){
         for(int j=0; j<10; j++){
          cout<<x[j]<<endl;
   }
     }
        void search(){
   int f;
         cout<<"Enter a number to be searched for ";
         cin>>f;
          for(int k =0; k<10; k++){
          if (f==x[k])
          {
               cout<<"Your number is in position "<<k+1<<endl;
          }
         }
 }
 		int mydelete(){
 			int f;
         	cout<<"Enter a number to delete ";
         	cin>>f;
          	for(int k =0; k<10; k++){
          	if (f==x[k])
          	{
               for(int n = k; n<9; n++){
               		x[n] = x[n+1]; 
			   }
			   return 0;
          	}
         }
         cout<<"Could not find the number. ";
         return 0;
		 }
void orderedinsert()
{
	int a, n;
	int b = 0;
	for (int i=0; i<10; i++){
		cout<<"Enter the number you want to insert ";
		cin>>a;
		for(n=0;n<10;n++)
		{
			if (x[n]>a){
				break;
			}
		}
		for(int j=10; j>n; j--){
			x[j] = x[j-1];
		}
		x[n] = a;
		b++;
		if (b==0){
			cout<<"The number is not found";
		}
		}
	}
int binarySearch(){
            int a, l=0, u=9,m;
            cout<<"Enter a number to be searched for ";
            cin>>a;
            while(true){
                m = (l + u)/2;
                if(x[m] == a){
                    cout<<"We found your number! ";
                    return 0;
            }
            else if(l > m){
                cout<<"Number was not found! ";
                return 0;
            }
            else{
                if(x[m] < a){
                    l = m + 1;
                }else{
                    u = m - 1;
                }
            }
        }
    }
int binarysearch(int a, int l, int u){
            int m;
                m = (l + u)/2;
                if(x[m] == a){
                    return m;
            	}
            	else if(l>u){
            		return 10;
				}
            else{
                if(x[m] < a)
                    return binarysearch(a,m+1,u);
                else
                    return binarysearch(a,l,m-1);
            }
        }
void bubblesort(){
	int n=10, in, out;
	for(out = 0; out<10; out++)
	{
		n--;
		for(in = 0; in< n; in++){
			if (x[in] > x[in +1]){
				int temp = x[in];
				x[in] = x[in+1];
				x[in+1] = temp;
			}
		}
	}
}
void insertionSort(){
	int in, out;
	for(out = 1;out<10;out++)
	{
		double temp = x[out];
		in = out;
		while(in>0 && x[in-1]>=temp)
		{
			x[in] = x[in-1];
			--in;
		}
			x[in] = temp;
		}	
}
};
int main(){
    my_Array arr1;
    arr1.insert();
    arr1.display();
    cout<<endl;
//    arr1.search(); 
//    arr1.mydelete();
//    arr1.display();
//    arr1.orderedinsert();
//    arr1.display();
//	  arr1.binarysearch();
//    arr1.display();
//    arr1.bubblesort();
//    arr1.display();
    int z = arr1.binarysearch(44, 0, 9);
    if (z==10)
    	cout<<"The number has not been found";
    else
    	cout<<"Found";
    arr1.display();
}
