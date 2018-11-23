#include <jni.h>
#include <stdio.h>
#include <math.h>
#include <string>

extern "C" {

JNIEXPORT jstring JNICALL
Java_com_example_ha_1hai_hocnativecode_MainActivity_calculateArea(JNIEnv *env, jobject instance,
                                                                  jdouble radius) {

    jdouble area = M_PI * radius * radius;
    char output[40];
    sprintf(output, "The area is %f sqm", area);
    return env-> NewStringUTF(output);

}

}

