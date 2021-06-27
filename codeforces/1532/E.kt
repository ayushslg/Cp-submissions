import kotlin.math.abs

fun main() {
    val r = System.`in`.bufferedReader()
    val sb = StringBuilder()
    val n = r.readLine().toInt()
    val num = r.readLine().split(" ").map { it.toLong() }
    val v = List(n) { Pair(num[it], it) }.sortedBy { it.first }
    val before = v.subList(0, n - 1).map { it.first }.sum()
    val needremove = before-v.last().first

    var cnt = 0
    val remove = mutableListOf<Int>()


    //println(needremove)
    var left = -1
    var right = -1
    if (needremove >= 1) {
        var le = 0
        var ri = n - 2
        var candi = -1
        while (le <= ri) {
            val mi = (le + ri) / 2
            when {
                v[mi].first >= needremove -> {
                    ri = mi - 1
                    candi = mi
                }
                else -> le = mi + 1
            }
        }

        le = 0
        ri = n - 2
        var candi2 = -1
        while (le <= ri) {
            val mi = (le + ri) / 2
            when {
                v[mi].first <= needremove -> {
                    le = mi + 1
                    candi2 = mi
                }
                else -> ri = mi - 1
            }
        }

        if (candi != -1 && v[candi].first == needremove) {
            cnt += candi2 - candi + 1
            for (i in candi..candi2){
                remove.add(v[i].second+1)
            }
        }

    }

    if (before-v[n-2].first==v[n-2].first){
        cnt++
        remove.add(v[n-1].second+1)
    }
    sb.appendln(cnt)
    sb.appendln(remove.joinToString(" "))
    println(sb)
}
