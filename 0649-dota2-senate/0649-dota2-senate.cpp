class Solution {
public:
    string predictPartyVictory(string senate) {
        queue< int> qr , qd;

        int n = senate.length();

        for( int i=0 ; i< n ; i++){
            (senate[i] == 'R')?qr.push(i):qd.push(i);
        }

        while(!qr.empty() && !qd.empty()){

            int rid = qr.front();
            int did = qd.front();

            qr.pop() ,  qd.pop();

            (rid > did)?qd.push(did+n):qr.push(rid+n); // 4 , 3  
        }
        return (qr.size()> qd.size())?"Radiant":"Dire";
    }
};