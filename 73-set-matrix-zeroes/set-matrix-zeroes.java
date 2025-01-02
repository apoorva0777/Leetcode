class Solution {
    public void setZeroes(int[][] matrix) {
        int m= matrix.length;
        int n= matrix[0].length;
        boolean[] zerorows=new boolean[m];
        boolean[] zerocols=new boolean[n];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    zerorows[i]=true;
                    zerocols[j]=true;
                        }
                    }

                }
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(zerorows[i]||zerocols[j]){
                        matrix[i][j]=0;
                    }
                }
            }
            }
        }