// // // for (intialisation ;condition ;updatation)
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int i=2;
// //     for( ;i<15;i+=2)
// //     {
// //         cout<<i<<"\n";
// //     }
// //     return 0;
// // }



// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int i=1,x;
// //     cin>>x;
// //     for (i,i>=x,i+=1)
// //     {
// //         cout<<i;
// //     }

// // }




// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int i=10,s;
// //     s=0;
// //     for (i;i>=1;i-=1)
// //     {
// //         s+=i;
        
// //     }
// //     cout<<s;

// // }



// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// // 	int x,y,s;
// // 	cin>>x;
// // 	cin>>y;
// // 	s=0;
// // 	for(x;x<=y;x+=1)
// // 	{
// // 	    s+=x;
// // 	}
// // 	cout<<s;

// // }



// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int i=1,m;
// //     m=1;
// //     for(i;i<6;i+=1)
// //     {
// //         m=m*i;
// //     }
// //     cout<<m;

// // }




// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int f,n;
// //     cin>>n;
// //     f=1;
// //     for(n;n>=1;n-=1)
// //     {
// //         f=f*n;
// //     }
// //     cout<<f;

// // }




// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// // 	int n,t=1,i=1;
// // 	cin>>n;
// // 	for(i;i<=n;i+=1)
// // 	{
// // 	    cout<<n<<" X "<<i<<" = "<<t<<"\n";
	    
// // 	}

// // }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n,p,x,s=0;
// 	cin>>n;
// 	p=n;
// 	for(n;n>0;n=n/10)
// 	{
// 	    s=10*s+(n%10);
	    
// 	}
	
// 	if (s==p)
// 	{
// 	    cout<<"palindrome";
// 	}
	
// 	else{
// 	    cout<<"not palindrome";
// 	}

// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int a=0,i=1;
// 	for(i;i<=500;i+=1)
// 	{
// 	    if((i%11)==0)
// 	    {
// 	        a+=i;
// 	    }
	    
// 	}
// 	cout<<a;

// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a,b,c,n,i;
//     a=0;
//     b=1;
//     cin>>n;
//     cout<<a;
//     cout<<b;
//     for(i=2;i<n;i+=1)       //fibonacci series
//     {
//         c=a+b;
//         if(c<=89){
//             cout<<c<<"  " ;
//         }
//         a=b;
//         b=c;
        
        
        
//     }

// }



// #include <iostream>
// int main()
// {
//     int x,y;
//     std::cin>>x;
//     std::cin>>y;
//     for(x;x<=y;x+=3)
//     {
//         if(x%3==1)
//         {
//             std::cout<<x;

//         }
//     }
//     return 0;
    

// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n,a;
// 	cin>>n;
// 	a=2;
// 	for(a;a<n;a+=1)
// 	{
// 	    if ((n%a)==0)
// 	    {
// 	        cout<<"no prime";
// 	        break;
// 	    }
	    
// 	}
// 	if(a==n){
// 	    cout<<"prime";
	    
// 	}

// }
