#include <iostream>
#include <set>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;

/*
int N, Q;
int healthy[200005];
int pts[200005]; //0 not sure 1 not sick 2 sick
int qsnum;
int qs[200005];


int main() {
    cin >> N >> Q;
    for (int i=1;i<=Q;i++){
        int t;
        cin >> t;
        if (t == 1){qsnum++;cin >> qs[qsnum];}
        else{
            int l, r, x;
            cin >> l >> r >> x;
            if (x == 0){healthy[l]++;healthy[r+1]--;} //prefix sum
            else{ //save the query
                
            }
        }
    }
    int now = 0;
    for (int i=1;i<=N;i++){
        now += healthy[now];
        if (now > 0) pts[i] = 1; //this is definitely a healthy cow
    }
    
    
    
}
*/


//int main(){
//    set<int> q;
//    q.insert(3);
//    q.insert(2);
//    q.insert(4);
//    q.insert(1);
//    q.insert(2);
//    for (set<int>::iterator i=q.begin();i!=q.end();i++) cout << *i << endl;
//    set<int>::iterator it = q.lower_bound(3);
//    it--;
//    cout << *it << endl;
//    cout << *q.upper_bound(3) << endl;
//}


//int N, L;
//int posmass[50005];
//struct cow{
//    int mass, pos, dir;
//    int xnum;
//    int t;
//} cows[50004];
//bool cmpx(cow a, cow b){
//    return a.pos < b.pos;
//}
//bool cmpt(cow a, cow b){
//    return a.t < b.t;
//}
//int a, b;
//int l = 1, r;
//int want;
//int gett = 0;
//int ti;
//int ans = 0;
//
//int main(){
//    cin >> N >> L;
//    r=N;
//    for (int i=1;i<=N;i++) {
//        cin >> cows[i].mass >> cows[i].pos >> cows[i].dir;
//        want += cows[i].mass;
//        if (cows[i].dir == 1) cows[i].t = L - cows[i].pos;
//        else cows[i].t = cows[i].pos;
//    }
//    want/=2;
//
//    sort(cows+1, cows+N+1, cmpx);
//    for (int i=1;i<=N;i++) {
//        posmass[i] = cows[i].mass;
//        cows[i].xnum = i;
//    }
//
//
//    sort(cows+1, cows+N+1, cmpt);
//    for (int i=1;i<=N;i++){
//        if (cows[i].dir == 1){
//            //cout << cows[i].xnum << " r " << r << endl;
//            gett += posmass[r];
//            r--;
//        }
//        else{
//            //cout << cows[i].xnum << " l " << l << endl;
//            gett += posmass[l];
//            l++;
//        }
//        //cout << cows[i].t << " " << gett << endl;
//        if (gett >= want) {
//            ti = cows[i].t;
//            break;
//        }
//    }
//
//    //now we have ti, the time
//    sort(cows+1, cows+N+1, cmpx);
//    queue<int> q;
//    for (int i=1;i<=N;i++){
//        if (cows[i].dir == 1) q.push(i);
//        else{
//            //先去除ti内去不到的牛
//            while(q.size() && cows[q.front()].pos + 2*ti < cows[i].pos)q.pop();
//            ans += q.size();
//        }
//    }
//    cout << ans << endl;
//
//}

//int N, B;
//const int maxn = 255;
//int dp[maxn][maxn];
//int snowd[maxn], bootd[maxn], boots[maxn];
//
//int main(){
//    cin >> N >> B;
//    for (int i=1;i<=N;i++) cin >> snowd[i];
//    for (int i=1;i<=B;i++) cin >> bootd[i] >> boots[i];
//
//    dp[1][1] = 1;
//    for (int i=1;i<=N;i++){
//        for (int j=1;j<=B;j++){
//            if (i==1&&j==1)continue;
//            if (snowd[i]>bootd[j])continue; //depth unsatisfied, failed
//            //can we reach simply by stepping forward
//            for (int pos=1;pos<i;pos++){
//                if(dp[pos][j] && pos+boots[j]>=i)dp[i][j] = 1;
//            }
//            //can we reach by using another shoe?
//            for (int shoe=1;shoe<j;shoe++){
//                if (dp[i][shoe] == 1) dp[i][j] = 1;
//            }
//        }
//    }
//    for (int i=1;i<=N;i++){
//        for (int j=1;j<=B;j++) cout << dp[i][j] << " ";
//        cout << endl;
//    }
//    for (int i=1;i<=N;i++){
//        if (dp[N][i] == 1){cout << i-1 << endl;break;}
//    }
//
//
//}

//
//int n, m1, m2;
//queue<int> q;
//int cnt;
//struct pt{
//    int in;
//    vector<int> to;
//    int pos;
//} pts[100005];
//
//int main(){
//    cin >> n >> m1 >> m2;
//    for (int i=1;i<=m1;i++){
//        int a, b;
//        cin >> a >> b;
//        pts[a].to.push_back(b);
//        pts[b].in++;
//    }
//    for (int i=1;i<=n;i++){
//        //如果入度为0，入队
//        if (pts[i].in == 0)q.push(i);
//    }
//    while(!q.empty()){
//        int now = q.front();
//        q.pop();
//        cnt++;
//        pts[now].pos = cnt;
//        for (int i=0;i<pts[now].to.size();i++){
//            pts[pts[now].to[i]].in--;
//            if (pts[pts[now].to[i]].in == 0) q.push(pts[now].to[i]);
//        }
//    }
//    for (int i=1;i<=m2;i++){
//        int a, b;
//        cin >> a >> b;
//        if (pts[a].pos >= pts[b].pos) cout << b << " " << a << endl;
//        else cout << a << " " << b << endl;
//    }
//
//
//
//}
//




//
//struct gj{
//    int siz;
//    int digits[50] = {0};
//};
//
//gj simplify(gj now){ //化简函数
//    int d = 0;
//    while (true){
//        if (now.digits[d] >= 10){
//            now.digits[d+1] += now.digits[d]/10;
//            now.digits[d]%=10;
//            if (d == now.siz-1){now.siz++;} //cout << "new size is " << now.siz << " " << now.digits[d+1] << endl;}
//        }
//        d++;
//        if (d>=now.siz) break;
//
//    }
//    return now;
//}
//
//gj simplem(int a, gj b){ //一位数Integer乘以高精数
//    gj ans;
//    ans.siz = b.siz;
//    for (int i=0;i<b.siz;i++){
//        ans.digits[i] += b.digits[i]*a;
//    }
//    ans = simplify(ans);
//    return ans;
//}
//
//gj mul(gj a, gj b){
//    gj ans;
//    for (int i=0;i<50;i++) ans.digits[i] = 0;
//    for (int i=0;i<a.siz;i++){
//        gj get = simplem(a.digits[i], b);
//        //cout << "get size " << get.siz << endl;
//        //for (int i=0;i<get.siz+5;i++) cout << get.digits[i] << endl;
//        for (int j=0;j<get.siz;j++){
//            ans.digits[j+i] += get.digits[j];
//        }
//        //for (int i=0;i<10;i++) cout << ans.digits[i] << " ";
//        //cout << endl;
//    }
//    for (int i=0;i<50;i++){
//        if (ans.digits[i] != 0) ans.siz = i + 1;
//    }
//    ans = simplify(ans);
//    return ans;
//}
//
//gj big(gj a, gj b){
//    if (a.siz > b.siz) return a;
//    else if (a.siz <b.siz) return b;
//    else{
//        for (int i=a.siz - 1;i>=0;i--){
//            if (a.digits[i] > b.digits[i]) return a;
//            else if (a.digits[i] < b.digits[i]) return b;
//        }
//        return a;
//    }
//}
//void print(gj now){
//    cout << "size is " << now.siz << endl;
//    for (int i=0;i<now.siz;i++) cout << now.digits[i] << " ";
//    cout << endl;
//}
//void reverse(gj &now){
//    if (now.siz%2 == 0){
//        for (int i=0;i<now.siz/2;i++){
//            swap(now.digits[i], now.digits[now.siz - 1 - i]);
//        }
//    }
//    else{
//        for (int i=0;i<(now.siz-1)/2;i++){
//            swap(now.digits[i], now.digits[now.siz - 1 - i]);
//        }
//    }
//
//}
//
//int n, k;
//int exist[41][7];
//gj dp[41][7];//第i个位置前放第j个乘号
//int num[50];
//
//int main(){
//    cin >> n >> k;
//    string m;
//    cin >> m;
//    for (int i=0;i<n;i++) num[i] = m[i] - '0';
//    for (int i=1;i<n;i++) {
//        exist[i][1] = 1;
//        gj ini = {0, {0}};
//        ini.siz = i;
//        for (int j = ini.siz - 1;j>=0;j--)ini.digits[ini.siz - 1 - j] = num[j];
//        dp[i][1] = ini;
//    }
//
//    for (int i=1;i<n;i++){
//        for (int j=2;j<=k;j++){ //第j个乘号
//            for (int w=0;w<i;w++){ //枚举前面位置j-1个乘号的状态进行转移
//                if (exist[w][j-1] == 1){
//                    exist[i][j] = 1;
//                    gj cur = {0, {0}}; cur.siz = i - w;
//                    //cout << i << j << w << endl;
//                    for (int nn = w;nn<i;nn++) cur.digits[nn-w] = num[nn];
//                    reverse(cur);
////                    cout << "cur" << endl;
////                    print (cur);
////                    print (dp[w][j-1]);
////                    print (mul(dp[w][j-1], cur));
//                    dp[i][j] = big(dp[i][j], mul(dp[w][j-1], cur));
//                }
//            }
//        }
//    }
////    for (int i=1;i<=k;i++){
////        for (int j=0;j<n;j++) print(dp[j][i]);
////    }
//    gj res = {0, {0}};
//    for (int i=0;i<n;i++){
//        if (exist[i][k]){
//            gj h = {n-i, {0}};
//            for (int j=i;j<n;j++) h.digits[j-i] = num[j];
//            reverse(h);
//            h = mul(h, dp[i][k]);
//            res = big(res, h);
//
//        }
//    }
//    for (int i=res.siz-1;i>=0;i--) cout << res.digits[i];
//    cout << endl;
//
//}



//ll N, capa, start, dis;
//pair<ll, ll> sta[50005]; //the position and the price
//ll now = 0, fuel, cost = 0;
//
//ll min(ll a, ll b) {
//    if (a>b)return b;
//    else return a;
//}
//ll getmin (ll k){
//    ll val = k+1;
//    ll mini = k+1;
//    while (val <= N && sta[now].first + capa >= sta[val+1].first) {
//        if (sta[val].second < sta[mini].second) mini = val;
//        val++;
//    }
//    return mini;
//}
//ll getnext(ll k){
//    ll mini = k+1;
//    while (mini <= N+1 && sta[now].first + capa >= sta[mini].first){
//        if (sta[mini].second < sta[now].second) return mini;
//        else mini++;
//    }
//    return -1;
//}
//ll getend(ll k){
//    ll val = k+1;
//    while (val <= N && sta[now].first + capa >= sta[val+1].first){
//        val++;
//    }
//    return val;
//}
//
//int main(){
//    cin >> N >> capa >> start >> dis;
//    for (int i=1;i<=N;i++) cin >> sta[i].first >> sta[i].second;
//    sort(sta+1, sta+1+N);
//    sta[0].second = 2e9;
//    sta[N+1].first = dis;
//    if (sta[1].first>start || dis - sta[N].first > capa){cout << -1 << endl; return 0;}
//    for (int i=1;i<N;i++){
//        if (sta[i+1].first - sta[i].first > capa){cout << -1 << endl; return 0;}
//    }
//
//    ll val = 0, mini = 1;
//    fuel = start;
//    while (val <= N && fuel >= sta[val + 1].first) {
//        val++;
//        if (sta[val].second < sta[mini].second) mini = val;
//    }
//    fuel -= sta[mini].first;
//    now = mini;
//
//    while (now <= N+1){
//        ll next = getnext(now);
//
////        cout << "now " << now << endl;
////        cout << "fuel " << fuel << endl;
////        cout << "cost " << cost << endl;
////        cout << "next " << next << endl;
////        cout << endl;
//        if (next == -1){ //如果后面没有比这一站便宜的站，此站加满，去最后一站
//            next = getmin(now);
//            cost += (capa-fuel)*sta[now].second;
//            fuel = capa;
//            fuel -=  sta[next].first - sta[now].first;
//            now = next;
//        }
//        else{ //去到后面那一个更便宜的站
//            ll more = 0;
//            if (sta[next].first - sta[now].first > fuel) more = sta[next].first - sta[now].first - fuel;
//            cost += sta[now].second*more;
//            fuel += more - (sta[next].first - sta[now].first);
//            now = next;
//        }
//        if (now == N+1) break;
//    }
//    cout << cost << endl;
//
//}

//
//int R, C;
//int field[55][55]; //0 stands for unwalkale, 1 stands for free, 2 stands for been in first try
//int mp[55][55];
//int calc[55][55];
//int sx, sy;
//int dx[8] = {0, 0, -1, -1, -1, 1, 1, 1}, dy[8] = {1, -1, 1, 0, -1, 1, 0, -1};
//pair <int,int> wallp = {55, 55};
//struct pt{
//    int x, y, path;
//};
//queue <pt> q;
//
//int main(){
//    cin >> R >> C;
//    for (int i=1;i<=R;i++){
//        for (int j=1;j<=C;j++){
//            char a;
//            cin >> a;
//            if (a == '.') field[i][j] = 1;
//            else if (a == '*'){field[i][j] = 2;sx=i;sy=j;}
//            else{
//                if (j<wallp.second){wallp.first=i;wallp.second=j;}
//            }
//        }
//    }
//    //build a manual wall
//    q.push({sx, sy, 0});
//    while(!q.empty()){
//        pt now = q.front();
//        q.pop();
//        mp[now.x][now.y] = now.path;
//        //calc[now.x][now.y] = 1;
//        for (int i=0;i<8;i++){
//            if (calc[now.x+dx[i]][now.y+dy[i]] == 1) continue;
//            if (field[now.x+dx[i]][now.y+dy[i]] == 1){
//                //checking manual wall
//                if (now.x == wallp.first && dx[i] == 1 && now.y <= wallp.second) continue;
//                if (now.x == wallp.first+1 && dx[i] == -1 && now.y <= wallp.second) continue;
//                q.push({now.x+dx[i], now.y+dy[i], now.path+1});
//                calc[now.x+dx[i]][now.y+dy[i]] = 1;
//            }
//        }
//
////        for (int i=1;i<=R;i++){
////            for (int j=1;j<=C;j++) cout << mp[i][j] << " ";
////            cout << endl;
////        }
////        cout << endl;
//
//    }
//    int ky[3] = {1, 0, -1};
//    int mini = 2e9;
//    for (int i=wallp.second-1;i>=1;i--){
//        //mp[wallp.first][i] = -1;
//        for (int j=0;j<3;j++){
//            if (i+ky[j] <=0 || field[wallp.first+1][i+ky[j]] == 0) continue;
//            mini = min(mini, mp[wallp.first][i]+mp[wallp.first+1][i+ky[j]]+1);
//        }
//    }
//    cout << wallp.first << " " << wallp.second << endl;
//    for (int i=1;i<=R;i++){
//        for (int j=1;j<=C;j++) {
//            if (mp[i][j]<10)cout << "0" << mp[i][j] << " ";
//            else cout << mp[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << mini << endl;
//}



int N, M;
struct pt{
    //int in = 0, to = 0;
    int bri = 0;
    vector<int> tov, inv;
    
    int maxbri = 0;
}pts[200005];
queue<int> q;

int main(){
    cin >> N >> M;
    for (int i=1;i<=N;i++) {cin >> pts[i].bri;pts[i].maxbri = pts[i].bri;}
    for (int i=1;i<=M;i++){
        int a, b;
        cin >> a >> b;
        pts[a].tov.push_back(b);
        pts[b].inv.push_back(a);
    }
    
    for (int i=1;i<=N;i++){
        if (pts[i].inv.size() == 0) q.push(i);
    }
    while (q.empty()){
        int now = q.front();
        q.pop();
        
        
        
    }
    
    
    
}


















