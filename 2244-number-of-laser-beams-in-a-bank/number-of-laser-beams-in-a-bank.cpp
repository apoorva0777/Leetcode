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
        for(int j=i+1;j<v.size();j++){
            beams+=v[i]*v[j];
            if(v[j]!=0){
            break;
        }
       }
       }
       return beams;
    }
};