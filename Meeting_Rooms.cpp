/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: if a person could attend all meetings
     */
     static bool comparator(Interval a, Interval b)      // I did not use static keyword earlier it was showing some error
     {
         return (a.start) < (b.start);                    // I was using a-> start but honestly these are not pointers but variables.
     }
    bool canAttendMeetings(vector<Interval> &intervals) {
        // Write your code here
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),comparator);
        for(int i=1;i<n;i++)
        {
            if ((intervals[i-1].end)>(intervals[i].start))     // similarly here I was using ->end and ->start
            {
                return false;
            }
        }
        return true;

    }
};