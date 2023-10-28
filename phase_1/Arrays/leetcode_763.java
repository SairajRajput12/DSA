class Solution {
    public List<Integer> partitionLabels(String s) {
        // int partition = 0; 
        // Set<Character> hash_Set = new HashSet<>();
        // List<Integer> ans = new ArrayList<Integer>(); 
        // for(int i = 0; i < s.length(); i ++){
        //     char a = s.charAt(i); 

        //     for(int j = (i + 1); j < s.length(); j ++){
        //         char b = s.charAt(j); 
        //         if(a == b){
        //             partition = j; 
        //         }
        //     }
            
        //     if(hash_Set.contains(a) == false){
        //         ans.add(partition); 
        //     }
        //     hash_Set.add(a);  
        // }
        // return ans; 
    
    // step 1 : create the hashmap.which will store the index of last occurence of each element. 
    Map<Character,Integer> m = new HashMap();  

    for(int i = 0; i < s.length(); i ++){
        m.put(s.charAt(i),i);     
    }
    // step 2 : now check index of each element and check it upto that element and compare the last occurence with that index. if there is greater than it's last occurence then just assign.  
    List<Integer> l = new ArrayList(); 
    int prev = -1; 
    int max = 0; 
    for(int i = 0; i < s.length(); i ++){
        char ch = s.charAt(i); 
        max = Math.max(max, m.get(ch)); 
        if(max == i){
            l.add(max - prev); 
            prev = max; 
        }
    }  
    return l; 
    }
}
