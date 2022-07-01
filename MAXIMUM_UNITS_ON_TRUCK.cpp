//1710. Maximum Units on a Truck
//Easy
//
//2355
//
//141
//
//Add to List
//
//Share
//You are assigned to put some amount of boxes onto one truck.You are given a 2D array boxTypes, where boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]:
//
//numberOfBoxesi is the number of boxes of type i.
//numberOfUnitsPerBoxi is the number of units in each box of the type i.
//You are also given an integer truckSize, which is the maximum number of boxes that can be put on the truck.You can choose any boxes to put on the truck as long as the number of boxes does not exceed truckSize.
//
//Return the maximum total number of units that can be put on the truck.
//
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // Sort boxes so that boxes with the most units appear first
        sort(boxTypes.begin(), boxTypes.end(), [](auto& box1, auto& box2) {
            return box1[1] > box2[1];
            });

        int totalUnits = 0;
        for (auto& box : boxTypes) {
            // Take as many boxes until we're out of space on the truck
            // or we're out of boxes of this type
            int numBoxes = min(truckSize, box[0]);
            totalUnits += numBoxes * box[1];
            truckSize -= numBoxes;
        }
        return totalUnits;
    }
};