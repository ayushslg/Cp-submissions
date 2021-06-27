val alp = "abcdefghijklmnopqrstuvwxyz"

fun main() {
    val n = readLine()!!.toInt()
    (1..n).forEach { t ->
        val (n, k) = readLine()!!.split(" ").map { it.toInt() }
        (0 until n).forEach { i ->
            print(alp[i % k])
        }
        println()
    }
}