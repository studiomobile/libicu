GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.48.1.dylib
COMPILE=/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin/llvm-gcc-4.2 -DU_ATTRIBUTE_DEPRECATED= -pipe -no-cpp-precomp -I/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk/usr/lib/gcc/arm-apple-darwin10/4.2.1/include/ -I/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk/usr/include -I/Developer/Platforms/iPhoneOS.platform/Developer/usr/include  -imacros /Users/hoha/projects/icu/icu48-arm/source/cancel.function.renames.macro -arch armv7 -pipe -DU_HAVE_NAMESPACE -no-cpp-precomp --sysroot /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk -isysroot /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk -isystem /Users/hoha/projects/icu/icu48-arm/source/tzfile_fix/ -isystem /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk/usr/lib/gcc/arm-apple-darwin10/4.2.1/include/ -isystem /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk/usr/include -isystem /Developer/Platforms/iPhoneOS.platform/Developer/usr/include -Wall -ansi -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -Wno-long-long  -fno-common -c
LIBFLAGS=-I/opt/icu/iphone-5.0-armv7/include  -dynamic
GENLIB=/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin/llvm-gcc-4.2 -dynamiclib -dynamic -imacros /Users/hoha/projects/icu/icu48-arm/source/cancel.function.renames.macro -arch armv7 -pipe -DU_HAVE_NAMESPACE -no-cpp-precomp --sysroot /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk -isysroot /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk -isystem /Users/hoha/projects/icu/icu48-arm/source/tzfile_fix/ -isystem /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk/usr/lib/gcc/arm-apple-darwin10/4.2.1/include/ -isystem /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk/usr/include -isystem /Developer/Platforms/iPhoneOS.platform/Developer/usr/include -Wall -ansi -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -Wno-long-long  -arch armv7 --sysroot /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk -L/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk -L/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk/usr/lib/system -L/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS5.0.sdk/usr/lib -L/Developer/Platforms/iPhoneOS.platform/Developer/usr/lib  
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,48 -Wl,-current_version -Wl,48.1 -install_name
RPATH_FLAGS=
BIR_LDFLAGS=
AR=/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin/ar
ARFLAGS=r
RANLIB=/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin/ranlib
INSTALL_CMD=/usr/bin/install -c
