project('vm', 'c',
  version : '0.1',
  default_options : ['warning_level=3', 'c_std=c17'])

add_global_arguments(
   '-Walloca', '-Wcast-qual', '-Wconversion', '-Wformat=2', '-Wformat-security', '-Wnull-dereference', '-Wstack-protector', '-Wvla', '-Wconversion', '-Wshorten-64-to-32', '-Warray-bounds-pointer-arithmetic', '-Wconditional-uninitialized', '-Wloop-analysis', '-Wshift-sign-overflow', '-Wswitch-enum', '-Wtautological-constant-in-range-compare', '-Wcomma', '-Wassign-enum', '-Wbad-function-cast', '-Wfloat-equal', '-Wformat-type-confusion', '-Wpointer-arith', '-Widiomatic-parentheses'
  , language: 'c')

inc = include_directories('include')

subdir('include')
subdir('src')

