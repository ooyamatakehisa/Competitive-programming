### 計算量
Nが10^6 → O(N)かO(N log N)
Nが10^5 → O(N log N)かO(N log2 N)
Nが3000 → O(N2)
Nが300 → O(N^3)(シンプルな処理)
Nが100 → O(N^3)
Nが50 → O(N^4)
Nが20 → O(2^N)かO(N*2N)



### int,llなど
intは2.147483647*10^9まで
llは10^19くらいまで
切り捨ては割るだけでよい、A/Bの切り上げは(A+B-1)/Bの商に等しい
数字aの桁数はto_string(a).length()で取得できる。

### string関連
- stringの長さ取得関数length()の返り値はsize_t型で0以上の値しか取らないため-string.length()とかは変な値を取る。これを避けるためにこのメソッドを使うときは(int)(strint.length())のように使う。
- string型の文字列Sのn番目の文字を取り出したいときS[n-1]と書くが、この値はchar型となる、一般的にchar型など一文字のときはその文字をシングルクォーテーション(')で囲み複数の文字列の場合はダブルクォーテーション(")で囲む。改行コードは''で囲む。
- charはintに対応している。例えばASCIIコードにおいて'A'=65であってchar a='A'-'B'でaにはASCIIコードが1の文字が入る。
- つまりchar->int の変換は '3' - '0' で表せる。一方string型の変数aについてはatoi(a.c_str())で行える。

### math
- 累乗計算pow(a, b)はdouble型で式の途中で(int)(pow(a,b))と使うと何故か変な値になる。これをint型の値と計算式で用いる場合は一度別の変数int c = (int)(pow(a,b))のように他のint型の変数に代入してから用いる。3乗くらいまでならa*a*aのように書く。
- π(pi)はacos(-1)で取得できるMath.acos()じゃなくてacos()だけでいける


# 入出力
- puts("aaaa") ""の中のstringを出力してそのあと改行してくれるやつ



# gcd
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
計算量はlog(n)
gcdの和を求める問題とかはgcd = iとなるものの数diを出せば
Σi*diで求められる 

# lcm : 最小公倍数
ll lcm(ll x, ll y) { return a / gcd(a, b) * b; }

# a以下のbの最大の倍数
a / b * b


#XOR
- 交換法則: a^b = b^a
- 結合法則: (a^b)^c = a^(b^c)
- 単位元の存在: a^0 = a
- 逆元は自分自身: a^a = 0
- a^b=c -> a^b^b=c^b -> a^0=b^c -> a=b^c
    -> 三つの値でひと固まり
- aとbの交換アルゴリズム
    a = a^b
    b = a^b = a^b^b = a^0 = a
    a = a^a = a^b^a = b^0 = b
- (4n)^(4n+1)^(4n+2)^(4n+3)=0 ⇔ (4n)^(4n+1)^(4n+2)=(4n+3) ⇔ (4n)^(4n+1)=(4n+3)^(4n+2) ...

    

