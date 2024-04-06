/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        for(int i=0;i<=obstacleGrid.size()-1;i++)
        {
            if(obstacleGrid[i][0]==1)
            {
                obstacleGrid[i][0]=0;
            }
            else
            {
                obstacleGrid[i][0]=1;
            }
        }
        for(int j=0,j<=obstacleGrid[0].size()-1;j++)
        {
            if(obstacleGrid[0][j]==1)
            {
                obstacleGrid[0][j]=0;
            }
            else
            {
                obstacleGrid[0][j]=1;
            }
        }
        for(int i=1;i<=obstacleGrid.size()-1;i++)
        {
            for(int j=1;j<=obstacleGrid[0].size()-1;j++)
            {
                if(obstacleGrid[i][j]==1)
                {
                    obstacleGrid[i][j]=0;
                }
                else
                {
                    obstacleGrid[i][j]=obstacleGrid[i-1][j]+obstacleGrid[i][j-1];
                }

            }
        }
        return obstacleGrid[m-1][n-1];
        
    }
};
// @lc code=end

// 第一次提交