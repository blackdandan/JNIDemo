#include "com_example_blackdandan_HelloJni.h"
#include "stdio.h"
#ifdef _cplusplus
extern "C"
{
#endif

/**
 *Class com_example_blackdandan_HelloJni
 * Method sayHello
 *
 */
JNIEXPORT jstring JNICALL Java_com_example_blackdandan_HelloJni_sayHello(JNIEnv *env ,jclass cls,jstring j_str){
    const char *c_str = NULL;
    char buff[128] = {0};
    c_str = (*env)->GetStringUTFChars(env,j_str,NULL);
    if (c_str == NULL){
        printf("out of memory.\n");
        return NULL;
    }
    printf("JAVA str :%s\n",c_str);
    sprintf(buff,"hello %s",c_str);
    (*env)->ReleaseStringUTFChars(env,j_str,c_str);
    return (*env)->NewStringUTF(env,buff);
}
#ifdef __cplusplus
};
#endif