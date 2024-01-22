 /*
----------------------------------------------------
---------In the name of ALLAH ----------------------
----------------------------------------------------
* Tried by Aryan Kabir
* CSE, SUB, BD
*
*/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;
 
typedef pair<int, int> pii;
 
typedef map<string, int> msi;
typedef map<string, string> mss;
 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<string> vs;

typedef double dbl;

 
#define pb push_back

#define MAX  1e30
#define MAX1 10^9+7
#define MAX2 10^9+9
 

#define  pf                 printf
#define  sc                 scanf
 
#define  s1(n)              scanf("%d",&n)
#define  s2(n1,n2)          scanf("%d %d",&n1,&n2)
#define  s3(n1,n2,n3)       scanf("%d %d %d",&n1,&n2,&n3)
#define  s4(n1,n2,n3,n4)    scanf("%d %d %d %d",&n1,&n2,&n3,&n4)
 
#define  ss1(n)             scanf("%lld",&n)
#define  ss2(n1,n2)         scanf("%lld %lld",&n1,&n2)
#define  ss3(n1,n2,n3)      scanf("%lld %lld %lld",&n1,&n2,&n3)
#define  ss4(n1,n2,n3,n4)   scanf("%lld %lld %lld %lld",&n1,&n2,&n3,&n4)
 
#define  p1(x)              printf("%I64d",x)
#define  p2(x,y)            printf("%I64d %I64d",x,y)
#define  p3(x,y,z)          printf("%I64d %I64d %I64d",x,y,z)
 
#define  fi(i,a,b)          for(long long i=a;i<=b;i++)
#define  fm(i , a)          for(long long i=1;i<=a;i++)
#define  fd(i,a,b)          for(long long i=b;i>=a;i--)
 
#define FOR1(i,n)           for(int i=0; i<n; i++)
#define RFOR1(i,n)          for(int i=n-1; i>=0; i--)
 
#define OUT0(x)cout<<(x)<<" " 
#define OUT1(x)cout<<(x)<<endl 
#define OUT2(x,y)cout<<(x)<<" "<<(y)<<endl 
#define TRACE1(x)cout<<(#x)<<" "<<(x)<<endl
#define TRACE2(x,y)cout<<(#x)<<" "<<(x)<<", "<<(#y)<<" "<<(y)<<endl
#define TRACE3(x,y,z)cout<<(#x)<<" "<<(x)<<", "<<(#y)<<" "<<(y)<<", "<<(#z)<<" "<<(z)<<endl

#define IN1(x) cin>>(x)
#define IN2(x,y) cin>>(x)>>(y)
#define IN3(x,y,z) cin >>(x)>>(y)>>(z)
 
#define clr(x) memset(x,0,sizeof(x))
#define cln(x) memset(x,-1,sizeof(x))

#define HR cout<<"\n-------------------------\n"
#define NL cout<<"\n" 
 
template<typename T>void inpA(T arr[], int n){FOR1(i,n){ IN(arr[i]);}}
template<typename T>void inpV(vector<T>&vec, int n){vec.resize(n);for(int i=0; i<n; i++) cin>>vec[i];}
template<typename T>void outV(vector<T>&vec){for(int i=0; i<vec.size();i++)cout<<vec[i]<<" ";cout<<endl;}
template<typename T>void sortV(vector<T>&vec){ sort(vec.begin(),vec.end()) ; }
template<typename T>void rSortV(vector<T>&vec){ sort(vec.begin(),vec.end(), greater<T>());}
template<typename T>bool bSearchV(vector<T>&vec,T key){return binary_search(vec.begin(),vec.end(),key);}
   
  ll arr[500][2];  
  void pre(){    
      string S,T;
      cin>>S>>T;
  for(int i=0;i<S.size();i++){
    arr[i][0]=arr[i][1]=(S[i]==T[0]);
  }
  for(int j=1;j<T.size();j++){
    char c=T[j];
    for(int i=0;i+1<S.size();i++){
      arr[i][1]=(S[i]==c && (arr[i+1][0]||arr[i+1][1]));
    } 
    arr[S.size()-1][1] = 0;
    for(int i=S.size()-1;i>0;i--){
      arr[i][0]=(S[i]==c&&arr[i-1][0]);
    }
    arr[0][0] = 0;
  }
  for(int i=0;i<S.size();i++){
    if(arr[i][0] || arr[i][1]){
          cout<<"YES"<<std::endl;
      return;
    }
  }
      cout<<"NO"<<std::endl;
}
 
int main(){
  ll T;
  cin>>T;
  while(T--){
    pre();
  }
}
