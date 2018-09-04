name := "JNIHelloWorld"

version := "0.1"

scalaVersion := "2.12.6"

enablePlugins(JniNative)

target in javah := sourceDirectory.value / "native" / "include"