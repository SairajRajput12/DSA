public class HindexIII {

    public static int hIndex(int[] citations){
    //     int end = citations.length, n = citations.length; 
    //     int start = 0, mid = start + (end - start)/2; 
    //         while (start < end) {
    //                 mid = start + (end - start)/2;  
    //                 if(citations[mid] >= (n - mid)){
    //                     end = mid; 
    //                 }

    //                 else{
    //                     start = mid + 1; 
    //                 }
    //         }
    //     return (n-end); 

        int n=citations.length;
        int l=0, h=citations.length;
        while(l<h){
            // int m=l+h>>>1;
            int m = l + (h - l)/2; 
            System.out.println("l :" + l);
            System.out.println("h :" + h);
            System.out.println("m" + m);
            if(citations[m]==n-m)
                return n-m;
            else if(citations[m]<n-m){
                l=m+1;
            }else{
                h=m;
            }
        }
        return n-l;
    }

    
    public static void main(String[] args) {
        System.out.println("H-Index III"); 
        /*
        Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper and citations is sorted in an ascending order, return compute the researcher's h-index.

         A scientist has an index h if h of their n papers have at least h citations each, and the other n − h papers have no more than h citations each.

         If there are several possible values for h, the maximum one is taken as the h-index: 
        */ 

        int[] citations = {0,2,1,3,5,6}; 
        System.out.println("H-Index of this array is :" + hIndex(citations)); 
    }    
}
