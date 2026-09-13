
class Solution {
public:
    int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
        int total_gas_available = std::accumulate(gas.begin(), gas.end(), 0);
        int total_cost_required = std::accumulate(cost.begin(), cost.end(), 0);

        // If total gas is less than total cost, a full circuit is impossible.
        if (total_gas_available < total_cost_required) {
            return -1;
        }

        int current_tank = 0;
        int start_station_index = 0;

        // Iterate through the stations
        for (int i = 0; i < gas.size(); ++i) {
            current_tank += gas[i] - cost[i];

            // If at any point the tank becomes negative, it means we cannot start
            // from 'start_station_index' and reach station 'i'.
            // Therefore, the next potential starting station is 'i + 1'.
            if (current_tank < 0) {
                start_station_index = i + 1;
                current_tank = 0; // Reset tank for the new potential start
            }
        }

        // If a solution exists, 'start_station_index' will hold the valid starting point.
        // This is guaranteed because if total_gas_available >= total_cost_required,
        // a solution must exist, and the greedy approach correctly finds it.
        return start_station_index;
    }
};
      