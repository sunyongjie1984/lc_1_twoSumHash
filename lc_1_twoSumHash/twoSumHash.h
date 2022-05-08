
//
//  twoSumHash.h
//  1_twoSumHash
//
//  Created by 孙永杰 on 2022/5/3.
//

#ifndef twoSumHash_h
#define twoSumHash_h

#include <unordered_map>
#include <vector>
using std::vector;
using std::unordered_map;
class solution_twoSumHash {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        unordered_map<int, int> map;
        vector<int>::const_iterator viter = nums.begin();
        unordered_map<int, int>::const_iterator  miter;
        for ( ; viter != nums.end( ); ++viter ) {
            miter = map.find( target - *viter );
            if ( miter != map.end( ) ) {
                out.push_back( viter - nums.begin( ) );
                out.push_back( miter->second );
                return out;
            } else {
                //map[ viter - nums.begin( ) ] = *viter;
                map[ *viter ] = viter - nums.begin( );
            }
        }
        return out;
    }};
#endif /* twoSumHash_h */
