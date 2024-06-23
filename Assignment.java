import java.util.*;
import java.io.*;
import java.util.Scanner; 

class Player{
    public String name; 
    public int strength; 
    public int health; 
    public int attack; 
    private Random random;



    public Player(String name){
        this.name = name; 
        this.strength = 5; 
        this.attack = 5; 
        this.health = 100; 
        this.random = new Random();
    }

    public void attack(Player x){
        int attackMul = 1 + random.nextInt(6); // Roll attack dice (1-6)
        int defendMul = 1 + random.nextInt(6); // Roll defense dice (1-6)

        
        int attackedMade = attackMul * this.attack; 
        int defendMove = x.strength * defendMul; 
        
        System.out.println(this.name + " rolled " + attackMul + " for attack and " + x.name + " rolled " + defendMul + " for defense.");
        
        int netDamage = attackedMade - defendMove;
        if(netDamage > 0){
            x.health -= netDamage;
            if(x.health < 0) x.health = 0; // Ensure health doesn't go below 0
        }
        
        System.out.println(this.name + " has made an attack of " + attackedMade + " and defender " + x.name + " has defended with a move of " + defendMove + ". Net health of " + x.name + " is " + x.health);
    }

}

public class  Assignment{

        public static boolean isItFinish(Player p1,Player p2){
            int healthFirst = p1.health; 
            int healthSecond = p2.health; 

            if(healthFirst <= 0 || healthSecond <= 0){
                return true; 
            }
            return false; 
        }

        public static void getWinner(Player p1,Player p2){
            System.out.println("The winner of this match is " + (p1.health > p2.health ? p1.name : p2.name));
        }

        
        public static void main(String args[]){
        // code
            System.out.println("This is the assignment work");
            Scanner sc = new Scanner(System.in);

            
            // code for taking the input from the user
            
            String s1,s2; 
            System.out.println("Enter the name of first player");  
            s1 = sc.nextLine(); 
            System.out.println("Enter the name of the second player"); 
            s2 = sc.nextLine(); 
            
            Player p1 = new Player(s1); 
            Player p2 = new Player(s2); 
            
            Player attacker = (Math.random() < 0.5) ? p1 : p2;
            Player defender = (attacker == p1) ? p2 : p1;
            
            while(!isItFinish(p1, p2)){

                attacker.attack(defender); 

                // now swap both of them 
                Player temp = attacker; 
                attacker = defender; 
                defender = temp; 


                
                boolean isItValid = isItFinish(p1,p2); // that will return that now anyone has lose or not
                
                if(isItValid == true){
                    getWinner(p1, p2);
                }                
            }            
        }
}