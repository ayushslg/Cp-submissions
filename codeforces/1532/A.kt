import java.util.Scanner
fun main(args: Array<String>) {

    var t: Int
    var sc = Scanner(System.`in`)
    t=sc.nextInt()
    while(t>0)
    {
    var a: Int
    var b: Int
    var sum: Int


    //print("Enter two numbers:")
    a = sc.nextInt()
    b = sc.nextInt()

    sum = a + b

    println("$sum")
    t--;
    }
}