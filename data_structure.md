
### vector
- n要素のvectorの宣言はvector<type> name(n)でできる。vector<type> name(n,0) みたいな感じで二つ目の引数に初期化の値
- vector aに対してa.push_back(要素内容)で追加。
- a[i]=aでも追加可能（初期化した値を書き換えている。）
- 昇順ソートはsort(a.begin(),a.end())で可能、降順は(a.rbigin(),a.rend())で可能
- 要素数はa.size()で可能
- vectorのコピーは要素ごとにおこなわずvector<int> b = aのようにする。 
- 最大値: max = *max_element( a.begin(), a.end() );
- ソートしたあと前後で重複があるものは unique(a.begin(), a.end()) で重複が取り除かれる
- a.back()でベクトルaの最後の要素がとってこれる
- int型なら10^5くらいまでの長さの配列は作れる

### touple
- a,b,cの要素の組を作りたいときはtie(a, b, c)で作成可能。

### stack 
- スタック, LIFOのデータ構造
- stack<int> a; で宣言
- push(), pop(), top(), size(), empty()

### pair
二つの要素のタプル
- １つ目の要素はfirst,２つ目がsecond
- make_pair(_,_)でつくれる

### map
- 辞書、連想リスト（キー、値）
- 内部ではソートされてる
- map<string,int> a;で宣言
- もしくは map<string,int> a {{"abc", 1}, {"def", 2}}; とも
- 追加するときは a["first"] = 1;
- 同様に value:1 は a["first"] でとってくる

## set
- 集合のデータ構造 -> 要素を追加しても重複があるものは入らない
- set<string> st; の感じで初期化
- 要素の追加は st.insert("ss") 
