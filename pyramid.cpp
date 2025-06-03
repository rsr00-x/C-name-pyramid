#include <iostream>
using namespace std;
 int main()
 /*{
        char arr[100] = {0};
            int count = 0;
            cout << "Enter your sequence: ";
            cin.getline(arr, 100);
            cout << endl << endl;
         int i, j, e;
         for(i=0; i<8; i++)
            { j=8; // 'j' is for row number
         do
            { cout<<" "; j--; }
         while(j>i);
         for(e=0; e<(i*2+1); e++) //'e' refer to name
            {       cout<<arr[e];      }
            cout<<endl;
            }
            return 0;
 }
*/

{
            char arr[100] = {0};
                int count = 0;
                cout << "Enter your sequence: ";
                cin.getline(arr, 100);
                cout<< endl;
            for(int i=0; i<100;i++)
            {
                if(arr[i]!=0)
                {
                    count++;
                }
            }
            int inestable=0;
            for(int i=0;i<=(count/2)+1;i++)
            {
                for(int x=count/2;x>=i;x--)
                {
                    cout<<" ";
                }
                int k=0, ine=0;
                if(i==1)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<arr[k]<<" ";
                        k++;
                        ine++;
                    }
                }
                else
                {
                    for(int j=1;j<=inestable+2;j++)
                    {
                        cout<<arr[k]<<" ";
                        k++;
                        ine++;
                    }
                }
                inestable=ine;
                cout<<endl;
            }
            cout<<endl;

            return 0;
}
