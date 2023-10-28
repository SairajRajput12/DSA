import java.util.*; 
import java.io.*; 

class carFleet {
    public int ans (int target, int[] position, int[] speed) {
        // agar pichle car ko kam time lagra hai age ke car se tab dono fleet banayenge. 
            int n = position.length; 
            double[][] cardata = new double[n][2]; 
            // 0th - position 
            // 1st - time 
            // int res = 0; 
            for(int i = 0; i < n; i ++){
                cardata[i][0] = position[i]*1d; // int ko double mein typecase kiya gaya hai/ isiliye 1d se multiply kiya gaya hai. 
                cardata[i][1] = (target - position[i])*1d/speed[i];
            } 
            Arrays.sort(cardata, (a, b) -> Double.compare(a[0], b[0]));
            int res = 1; 
            double tt = cardata[n-1][1]; 
            for(int i = n - 1; i >= 0; i --){
                if(cardata[i][1] > tt){
                    res ++; 
                    tt = cardata[i][1];
                }
            }

        return res; 
    }
}
