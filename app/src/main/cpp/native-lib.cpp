#include "jni.h"
#include <string>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include "opencv2/imgcodecs.hpp"
#include <opencv2/highgui.hpp>
#include <opencv2/ml.hpp>

#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/core.hpp"
#include "iostream"
#include "stdio.h"
#include "opencv2/imgproc.hpp"

extern "C" {

JNIEXPORT jstring JNICALL
Java_com_example_ha_1hai_hocnativecode_MainActivity_stringFromJNI(JNIEnv *env, jobject instance,
                                                                  jdouble radius) {

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());

}
}

