import java.util.Scanner
fun main(args: Array<String>) {

    var t: Int
    var sc = Scanner(System.`in`)
    t=sc.nextInt()
    while(t>0)
    {
    var a: Long
    var b: Long
    var k: Long
    var ans: Long
    var p: Long
    p=1;
    a = sc.nextLong()
    b=sc.nextLong()
    k=sc.nextLong()
    ans=(a-b)*(k/2);
    if(k%2 == p)
        ans+=a;

    println("$ans")
    t--;
    }
}