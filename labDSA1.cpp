                                                      // //Task 1:

// #include <iostream>
// using namespace std;

// int accurance(int arr[],int n,int target){
// int count=0;
// for(int i=0;i<n;i++){
//     if(arr[i]==target){
//     count++;
// }
// }
// return count;

// }

// int main(){
//     int num;
//     int arr[]={4,5,4,3,4};
//     cout<<"enter number to count occurence:"<<endl;
//     cin >> num;
//     int result= accurance(arr,5,num);
//     cout<<num<<"occurs in:"<<result<<"times:"<<endl;
//     return 0;

// }


                                        //Task no:2
// #include <iostream>
// using namespace std;

// int findchar(char arr[],int n,char target){
// for(int i=0;i<n;i++){
// if(arr[i]==target){
//     return i;
// }
// }
// return -1;
// }

// int main(){
//     char character;
//     char arr[]={'a','e','i','o','u'};
//     cout<<"enter character to find index:"<<endl;
//     cin>>character;
//     int index=findchar(arr,5,character);
//     cout<<character<<" found at index:"<<index<<endl;
// }


                                             //task no:3

// #include <iostream>
// using namespace std;

// int searchname(string arr[],int n,string target){
// for(int i=0;i<n;i++){
// if(arr[i]==target){
//     return i;
// }
// }
// return -1;
// }

// int main(){
//     string name;
//     string arr[]={"Ali","Zain","Sara","Ayesha","Ahmad"};
//     cout<<"enter name to find index:"<<endl;
//     cin>>name;
//     int index=searchname(arr,5,name);
//     cout<<name<<" found at index:"<<index<<endl;
// }


                                             //Task no:4
// #include <iostream>
// using namespace std;


// void findindices(int arr[],int n,int target){
//     int count=0;
// cout<<"index:";
//     for(int i=0;i<n;i++){
//         if(target==arr[i]){
//             cout<<i<<" "<<endl;
//             count++;
//         }
//     }
//     if(count==0){
//         cout<<"element not exit:"<<endl;
//     }
// }

// int main(){
//     int arr[]={5,2,7,2,9,2};
//     int num;
//     cout<<"enter number to find indices:"<<endl;
//     cin>>num;
//     findindices(arr,6,num);

// }

                                                //Task no:5

// #include <iostream>
// using namespace std;

// void search(int arr[][3],int r,int c,int target){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][j]==target){
//                 cout<<"found at row"<<i<<"column"<<j<<endl;
//                 return;
//             }
//         }
//     }
//     cout<<"element not found!"<<endl;
// }
// int main(){
//     int matrixarr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int num;
//     cout<<"enter number to find matrix"<<endl;
//     cin>>num;
//     search(matrixarr,3,3,num);

//     return 0;

// }