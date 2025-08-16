class Solution {
public:
int countocc(string row){
    int count=0;
    for(char c:row){
        count+=c-'0';
    }
    return count;
}
    int numberOfBeams(vector<string>& bank) {
       vector<int>v;
       for(auto row:bank){
        v.push_back(countocc(row));
       } 
       int beams=0;
       for(int i=0;i<v.size();i++){
        int j=i+1;
        while(j<v.size()){
            beams+=v[i]*v[j];
            if(v[j]==0){
                j++;
        }else{
            break;
        }
        }
       }
       return beams;
    }
};