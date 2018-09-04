// Save as "HelloJNI.cpp"
#include <jni.h>       // JNI header provided by JDK
#include <iostream>    // C++ standard IO header
#include <stdio.h>
#include <string>
#include "HelloWorld.h"  // Generated
using namespace std;

// Implementation of the native method sayHello()
JNIEXPORT jstring JNICALL Java_HelloWorld_helloFromC(JNIEnv *env, jobject thisObj) {
	printf("now we're running C++");
	string outCppStr = "Hello world from c++";
   return env->NewStringUTF(outCppStr.c_str());
}