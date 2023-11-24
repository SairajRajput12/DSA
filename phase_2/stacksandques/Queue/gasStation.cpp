class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        // not optimal solution: using brute force. 
        // int ans = -1; 
        // for(int i = 0; i < gas.size(); i ++){ 
        //     if(gas[i] < cost[i]){
        //         continue; 
        //     }

        //     int gasA = gas[i] - cost[i]; 
        //     int j = (i+1)%(gas.size()); 
        //     while( j != i )
        //     {
        //         gasA = gasA + gas[j] - cost[j];   
        //         if(gasA < 0){
        //             break;
        //         }
        //         j = (j+1)%(gas.size()); 
        //     }
        //     if(gasA >= 0){
        //         return (i); 
        //     }
        // }

        // return ans;

        // approach 2: using queue: my try 

        // queue<pair<int,int>> registee;  
        // int h = gas.size(); 
        // for(int i = 0; i < h; i ++){
        //     registee.push(make_pair(gas[i],cost[i])); 
        // } 

        // // now we have: 
        // // | (1,3),(2,4),(3,5),(4,1),(5,2)| 
        // // int n = registee.size(); while( n -- ) 
        // // int x = registee.front(); 
        // // gasA = registee.front().first - registee.front().second 
        // // use while loop for inner iteration 
        // // if gasA < 0 continue; 
        // // after exiting loop return the gas content 

        // int n = registee.size();
        // int g = -1;  // Initialize g to an invalid value

        // while (n--) {
        //     std::pair<int, int> m = registee.front();
        //     int gasA = m.first - m.second;
        //     registee.pop();
        //     registee.push(m);

        //     while (registee.front() != m) {
        //         gasA = gasA + registee.front().first - registee.front().second;
        //         std::pair<int, int> k = registee.front();
        //         registee.pop();
        //         registee.push(k);
        //     }

        //     if (gasA >= 0) {
        //         g = m.first;  // Set g to the gas value if the circuit is completed
        //     }

        //     registee.pop();
        //     registee.push(m);
        // }

        // // If g is still -1, no valid starting index was found
        // if (g == -1) {
        //     return -1;
        // }

        // for (int i = 0; i < h; i++) {
        //     if (g == registee.front().first) {
        //         return (i-1);
        //     }
        //     registee.pop();
        // }

        // return -1; 

        // approach 3: now code from sir love babbar 
        // algo: 
        // Given: | (1,3),(2,4),(3,5),(4,1),(5,2)|  
        // 1] front and rear are at the starting 
        // 2] if travel possible hai : petrol - distance >= 0 -> travel hoga then rear ++ 
        // if front == rear -> tumne circle complete kiya means travel hoga 
        // 3] else travel possible nahi hai - front ko hatake rear + 1 block pe le aao. but kyon laye ? ?
        // here is the answer: agar aap block 1 se block 4 tak nahi poch pare then aap 2 and 3 se bhi na pohochte beacuse there will be the balanced involved in it. that's why we are making front = rear + 1 
        // har ek block dusre block ko contribution deta hai petrol ka. 

        // Algorithm: 
        /*
            if(starting se next block ka traveling possible hai){
                rear ++;                 
            }
            else{
                // travel possible nhi hai 
                start = front 
                rear = front 
            }
            if(front == rear){
                cycle complete ho gayi hai 
            }
        */

    int n = gas.size();
    int rear = 0, start = 0; 
    int balance = 0; 
    int diff = 0; 

    while (rear < n) {
        balance += gas[rear] - cost[rear]; 
        diff += gas[rear] - cost[rear]; 

        if (balance < 0) {
            start = rear + 1;  
            rear = start; 
            balance = 0;  // Reset balance when starting a new tour
        } else {
            rear++; 
        }
    }

    return (diff >= 0) ? start : -1;





 

        // approach 4: using deficit 
        // int deficit = 0; 
        // int start = 0; 
        // int balance = 0; 
        // int n = gas.size(); 

        // for(int i = 0; i < n; i ++){
        //     balance += gas[i] - cost[i]; 
        //     if(balance < 0){
        //         deficit += balance; 
        //         start = i + 1;
        //         balance = 0; 
        //     } 
        // }
        // if(deficit + balance >= 0){
        //     return start; 
        // }
        // else{
        //     return -1; // cycle complete possible hi nahi hai
        // }

        // approach 5: normal method 
        // int total_fuel = 0, total_cost = 0; 
        // int diff = 0; 
        // int current = 0; 
        // int start = 0; 
        // for(int i = 0; i < gas.size(); i ++){
        //     total_fuel += gas[i]; 
        // }

        // for(int i = 0; i < cost.size(); i ++){
        //     total_cost += cost[i]; 
        // }

        // if(total_fuel < total_cost){
        //     return -1; 
        // }

        // for(int i = 0; i < gas.size(); i ++){
        //     current += (gas[i] - cost[i]); 
        //     if(current < 0){
        //         start = i + 1; 
        //         current = 0; 
        //     }
        // }
        // return start;

        // approach 5: using queue 
        // deque<int> q; 
        // int total_gas = 0; 
        // int total_cost = 0; 
        // for(int i = 0; i < gas.size(); i ++){
        //     total_gas += gas[i]; 
        //     total_cost += cost[i]; 
        // }

        // if(total_gas < total_cost){
        //     return -1; 
        // }

        // int balance = 0; 
        // for(int i = 0; i < cost.size(); i ++){
        //     q.push_back(i); 
        //     if(gas[i] + balance < cost[i]){
        //         // nahi janar pudhe 
        //         while(!q.empty()){
        //             q.pop_front(); 
        //         }
        //         balance = 0; 
        //     }
        //     else{
        //         balance += gas[i] - cost[i]; 
        //     }
        // }

        // return q.front();         
    }
};
