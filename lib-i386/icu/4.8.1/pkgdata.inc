GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.48.1.dylib
COMPILE=/Developer/Platforms/iPhoneSimulator.platform/Developer/usr/bin/llvm-gcc-4.2 -DU_ATTRIBUTE_DEPRECATED= -pipe -no-cpp-precomp -I/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/usr/lib/gcc/arm-apple-darwin10/4.2.1/include/ -I/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/usr/include -I/Developer/Platforms/iPhoneSimulator.platform/Developer/usr/include  -arch i386 -pipe -DU_HAVE_NAMESPACE -no-cpp-precomp --sysroot /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk -isysroot /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk -isystem /Users/hoha/projects/icu/icu48-arm/source/tzfile_fix/ -isystem /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/usr/lib/gcc/arm-apple-darwin10/4.2.1/include/ -isystem /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/usr/include -isystem /Developer/Platforms/iPhoneSimulator.platform/Developer/usr/include -Wall -ansi -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -Wno-long-long  -fno-common -c
LIBFLAGS=-I/opt/icu/iphone-5.0-i386/include  -dynamic
GENLIB=/Developer/Platforms/iPhoneSimulator.platform/Developer/usr/bin/llvm-gcc-4.2 -dynamiclib -dynamic -arch i386 -pipe -DU_HAVE_NAMESPACE -no-cpp-precomp --sysroot /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk -isysroot /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk -isystem /Users/hoha/projects/icu/icu48-arm/source/tzfile_fix/ -isystem /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/usr/lib/gcc/arm-apple-darwin10/4.2.1/include/ -isystem /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/usr/include -isystem /Developer/Platforms/iPhoneSimulator.platform/Developer/usr/include -Wall -ansi -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -Wno-long-long  -arch i386 --sysroot /Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk -L/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk -L/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/usr/lib/system -L/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.0.sdk/usr/lib -L/Developer/Platforms/iPhoneSimulator.platform/Developer/usr/lib  
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,48 -Wl,-current_version -Wl,48.1 -install_name
RPATH_FLAGS=
BIR_LDFLAGS=
AR=/Developer/Platforms/iPhoneSimulator.platform/Developer/usr/bin/ar
ARFLAGS=r
RANLIB=/Developer/Platforms/iPhoneSimulator.platform/Developer/usr/bin/ranlib
INSTALL_CMD=/usr/bin/install -c
