/////////////////////////////////////////////////////////////
//                          Give me AC!!!                                     //
////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define _GLIBCXX_DEBUG
#define rep(i, c, n) for (int i = c; i < (n); ++i)
//以下debug用
#define d(x) cout << #x << "; " << x << endl; 2
#define p(x) cout << x << endl;
#define f(x)                         \
  for (int i = 0; i < x.size(); i++) \
    cout << #x << "[" << i << "]; " << x[i] << endl;

int a, b, c, i, j, m, n, M, N, L, R, ans = 0, counter = 0, num = 0;
long long llans = 0, llcounter = 0, llnum = 0;
string str, str1, str2, str3;
bool ok = false;
vector<int> datas(100);

int main()
{
  cin >> a >> b >> c;
  if (c == 0){
    if (a <= b){
      ok = true;
    }
  }else{
    if (a < b){
      ok = true;
    }
  }

  if (ok){
    p("Aoki")
  }else{
    p("Takahashi")
  }

  return 0;
}
