import ch.jodersky.jni.nativeLoader

@nativeLoader("JNIHelloWorld0")
class HelloWorld {
  @native def helloFromC(): String
}

object HelloWorld {
  def main(args: Array[String]): Unit = {
    println("Hello, from scala!")
    val h = new HelloWorld
    val response = h.helloFromC()
    println(response)
  }
}
