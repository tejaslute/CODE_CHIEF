//There are n different online courses numbered from 1 to n.You are given an array courses where courses[i] = [durationi, lastDayi] indicate that the ith course should be taken continuously for durationi daysand must be finished before or on lastDayi.
//
//You will start on the 1st day and you cannot take two or more courses simultaneously.
//
//Return the maximum number of courses that you can take.
//
//
//
//Example 1:
//
//Input: courses = [[100, 200], [200, 1300], [1000, 1250], [2000, 3200]]
//Output : 3
//Explanation :
//	There are totally 4 courses, but you can take 3 courses at most :
//First, take the 1st course, it costs 100 days so you will finish it on the 100th day, and ready to take the next course on the 101st day.
//Second, take the 3rd course, it costs 1000 days so you will finish it on the 1100th day, and ready to take the next course on the 1101st day.
//Third, take the 2nd course, it costs 200 days so you will finish it on the 1300th day.
//The 4th course cannot be taken now, since you will finish it on the 3300th day, which exceeds the closed date.

class Solution {
public:

    static bool cmp(const vector<int>& a, const vector<int>& b)
    {
        return a[1] < b[1];
    }

    int scheduleCourse(vector<vector<int>>& courses) {

        sort(courses.begin(), courses.end(), cmp);
        int total_duration = 0;
        priority_queue<int> q;


        for (int i = 0; i < courses.size(); i++)
        {
            int current_duration = courses[i][0];
            int finish_time = courses[i][1];

            // increment total duration
            total_duration += current_duration;
            q.push(current_duration);
            if (total_duration > finish_time)
            {
                // we want to skip this couse 
                total_duration = total_duration - q.top();
                q.pop();
            }
        }

        return q.size();
    }
};