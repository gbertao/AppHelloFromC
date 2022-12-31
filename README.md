# Hello from C
Use JNI to call C function on Java

# Build
Just build on Android Studio

# How
1. Create basic CMakeLists.txt and declare cmake+ndk on app's gradle
2. Create native function on .java
3. Implement native function on JNI lib (follow name convention) and modify CMakeLists.txt
4. Call it from .java