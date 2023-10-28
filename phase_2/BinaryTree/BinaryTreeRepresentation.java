
import java.util.*;
import java.io.*;

class Node{
    int data; 
    Node left; 
    Node right; 
        public Node(int key){
            data = key; 
            left = null; 
            right = null; 
        }    
}

public class  BinaryTreeRepresentation{

        // recursive approach: 

        public static void InorderTraversal(ArrayList<Integer> al,Node curr){
            if(curr == null){
                    return; 
            }                                                                                                  Traversal(al,curr.left); 
            al.add(curr.data); 
            InorderTraversal(al, curr.right);
        }

        public static void main(String args[]){
        // code
            Node root = new Node(1); 
            root.left = new Node(2); 
            root.right = new Node(3); 
            root.right.left = new Node(5); 
            root.left.right = new Node(6); 
            root.left.left = new Node(8);  

            // System.out.println("In order transversal\n" + root.data + "-->"+root.left+"-->"+root.right);
                    
                    /*There are 3 types of the transversal techniques:
                        1] Inorder transversal ---------------> Left-Root-Right
                        2] Pre-order transversal -------------> Root-Left-Right
                        3] Post-order transversal ------------> Left-Right-Root
                    */
            
            
                    ArrayList < Integer > inOrder = new ArrayList<>();
                    InorderTraversal(inOrder,root);

                System.out.println("The inOrder Traversal is : ");
                for (int i = 0; i < inOrder.size(); i++) {
                    System.out.print(inOrder.get(i) + " ");
                }
        }
}
