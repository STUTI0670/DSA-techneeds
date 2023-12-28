1

#include<iostream>
using namespace std ;
int main() {
  int i,j;
  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++)
     if (i==1||i==5||j==6-i)
     {
        cout<<"*";
     }
  else{
    cout<<" ";
  }
   cout<<endl;
    }
 return 0 ;
}


2

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "marks";
    cin >> marks;

    if (marks > 90)
    {
        cout << "wow";
    }
    else if (marks > 80 && marks <= 90)
    {
        cout << "Good";
    }
    else if (marks > 70 && marks <= 80)
    {
        cout << "okay";
    }
    else if (marks > 60 && marks <= 70)
    {
        cout << "u can improve";
    }



      3

        #include <iostream>

using namespace std;

int main(){
    int i,j,count=0;
    cout<<"enter  number ",i;
    cin>>i;
    for(j=2;j<i;j++){
        if(i%j==0){
        cout<<"not prime"; 
        break;
       if(i%j!=0){
        cout<<"prime";
        break;
       }
        }
    }
    return 0;
}

    else
        cout << "Below";

    return 0;
}



4

  #include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, j, count;

    cout << "Enter lower limit:\n ";
    cin >> n1;
cout << "Enter upper limit: ";
    cin >> n2;
 for (i = n1; i <= n2; i++)
    { if (i == 1 || i == 0)
            continue;
        count = 1;
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            { count = 0;
                break;
          }  }if (count == 1)
            cout << i << "\n";
    }    return 0;
}



5

  #include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter no. ";
    cin>>n;
    for(i=0; n>0; i++)
    {
      n=n/10;
    }
    cout<<"Number of digits "<<i;
  return 0;
}




6

  #include <iostream>

using namespace std;

int main(){
    int i;
    //i is the number
    cout<<"enter the no.: ",i;
    cin>>i;
    int reverse=0;
    while(i>0){
    int lastdigit=i%10;
    //after dividing any number by 10  ones place digit
    //reversing  lastdigit goes to the  front
    reverse=reverse*10 + lastdigit;
    i=i/10;
    }
    cout<<"the reverse number is :"<<reverse<<endl;
    return 0;
}


7
  // print the inverse of a number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ld;
    int sum=0,a=1;
    cout<<"enter number:";
    cin>>n;
    // first we find the number of digs of n 
    while(n>0){
        ld=n%10;
        sum+=a*pow(10,ld-1);
        a++;
        n/=10;
    }
    cout<<"The inverse "<<sum;
    
}
