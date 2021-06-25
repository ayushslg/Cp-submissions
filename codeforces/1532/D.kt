import java.util.Scanner
fun main(args: Array<String>) {

    var t: Int
    var sc = Scanner(System.`in`)
    t=1;
    while(t>0)
    {
    val size = sc.nextInt()
    val intArray = IntArray(size)

    for (i in intArray.indices) {
        intArray[i] = sc.nextInt()
    }
    var ans: Int
    ans=0;
    var temp:Int
    for (i in intArray.indices) {
        for (j in i + 1 until intArray.size) {
            if (intArray[i] > intArray[j]) {
                temp = intArray[i]
                intArray[i] = intArray[j]
                intArray[j] = temp
            }
        }
    }
    for (i in intArray.indices) {
     if(i%2 == 0)
     {
        ans+=intArray[i+1]-intArray[i];
     }
    }
    println("$ans")
    t--;
    }
}