=================================================================
==3587==ERROR: AddressSanitizer: requested allocation size 0xffffffffffffffff (0x800 after adjustments for alignment, red zones etc.) exceeds maximum supported size of 0x10000000000 (thread T0)
    #0 0x10c336e5d in wrap_malloc+0x9d (libclang_rt.asan_osx_dynamic.dylib:x86_64+0x45e5d)
    #1 0x10c2e3f2f in main test_MAX_malloc.c:23
    #2 0x7fff691becc8 in start+0x0 (libdyld.dylib:x86_64+0x1acc8)

==3587==HINT: if you don't care about these errors you may set allocator_may_return_null=1
SUMMARY: AddressSanitizer: allocation-size-too-big (libclang_rt.asan_osx_dynamic.dylib:x86_64+0x45e5d) in wrap_malloc+0x9d
==3587==ABORTING
zsh: abort      ./a.out
