public class recursion1{
public static void printNum(int n){
    if(n==0){
        return;
    }
    system.out.printin(n);
    printNum(n-1);
}
            public static void main(string args[]){
                int  n=5;
                printNum(n)
            }
}