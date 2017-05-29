/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "../c/completion_wrap_java.h"
#include "../c/completeLine_wrap_java.h"
#include "getCommonPart.h"
#include "getPartLine.h"
#include "MALLOC.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_completion_CompletionJNI_searchAllDictionaries(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jobjectArray jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char **)searchAllDictionaries(arg1);
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_completion_CompletionJNI_searchFunctionsDictionary(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jobjectArray jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char **)searchFunctionsDictionary(arg1);
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_completion_CompletionJNI_searchCommandsDictionary(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jobjectArray jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char **)searchCommandsDictionary(arg1);
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_completion_CompletionJNI_searchMacrosDictionary(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jobjectArray jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char **)searchMacrosDictionary(arg1);
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_completion_CompletionJNI_searchVariablesDictionary(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jobjectArray jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char **)searchVariablesDictionary(arg1);
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_completion_CompletionJNI_searchFilesDictionary(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jobjectArray jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char **)searchFilesDictionary(arg1);
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_completion_CompletionJNI_searchFieldsDictionary(JNIEnv *jenv, jclass jcls, jstring jarg1, jstring jarg2) {
  jobjectArray jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char *arg2 = (char *) 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  result = (char **)searchFieldsDictionary(arg1,arg2);
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jobjectArray JNICALL Java_org_scilab_modules_completion_CompletionJNI_searchHandleGraphicsPropertiesDictionary(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jobjectArray jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char **result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char **)searchHandleGraphicsPropertiesDictionary(arg1);
  {
    if (result != NULL)
    {
      int i;
      int len=0;
      jstring temp_string;
      const jclass clazz = (*jenv)->FindClass(jenv, "java/lang/String");
      
      while (result[len]) len++;    
      jresult = (*jenv)->NewObjectArray(jenv, len, clazz, NULL);
      /* exception checking omitted */
      
      for (i=0; i<len; i++) {
        temp_string = (*jenv)->NewStringUTF(jenv, result[i]);
        (*jenv)->SetObjectArrayElement(jenv, jresult, i, temp_string);
        (*jenv)->DeleteLocalRef(jenv, temp_string);
        FREE(result[i]);
        result[i] = NULL;
      }
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_completion_CompletionJNI_getPartLevel(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char *)getPartLevel(arg1);
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_completion_CompletionJNI_getFilePartLevel(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jstring jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (char *)getFilePartLevel(arg1);
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_completion_CompletionJNI_getCommonPart(JNIEnv *jenv, jclass jcls, jobjectArray jarg1, jint jarg2) {
  jstring jresult = 0 ;
  char **arg1 = (char **) 0 ;
  int arg2 ;
  jint size1 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    int i = 0;
    size1 = (*jenv)->GetArrayLength(jenv, jarg1);
    arg1 = (char **) MALLOC((size1+1)*sizeof(char *));
    /* make a copy of each string */
    for (i = 0; i<size1; i++) {
      jstring j_string = (jstring)(*jenv)->GetObjectArrayElement(jenv, jarg1, i);
      const char * c_string = (*jenv)->GetStringUTFChars(jenv, j_string, 0);
      arg1[i] = MALLOC((strlen(c_string)+1)*sizeof(const char *));
      strcpy(arg1[i], c_string);
      (*jenv)->ReleaseStringUTFChars(jenv, j_string, c_string);
      (*jenv)->DeleteLocalRef(jenv, j_string);
    }
    arg1[i] = 0;
  }
  arg2 = (int)jarg2; 
  result = (char *)getCommonPart(arg1,arg2);
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  {
    int i;
    for (i=0; i<size1-1; i++) {
      FREE(arg1[i]);
      arg1[i] = NULL;
    }
    FREE(arg1);
    arg1 = NULL;
  }
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_scilab_modules_completion_CompletionJNI_completelineforjava(JNIEnv *jenv, jclass jcls, jstring jarg1, jstring jarg2, jboolean jarg3, jstring jarg4) {
  jstring jresult = 0 ;
  char *arg1 = (char *) 0 ;
  char *arg2 = (char *) 0 ;
  BOOL arg3 ;
  char *arg4 = (char *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  {
    if (jarg3 == JNI_TRUE) arg3 = TRUE;
    else arg3 = FALSE;
  }
  arg4 = 0;
  if (jarg4) {
    arg4 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg4, 0);
    if (!arg4) return 0;
  }
  result = (char *)completelineforjava(arg1,arg2,arg3,arg4);
  {
    if (result != NULL)
    {
      jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
      FREE(result);
      result = NULL;
    }       
  }
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  if (arg4) (*jenv)->ReleaseStringUTFChars(jenv, jarg4, (const char *)arg4);
  return jresult;
}


#ifdef __cplusplus
}
#endif

