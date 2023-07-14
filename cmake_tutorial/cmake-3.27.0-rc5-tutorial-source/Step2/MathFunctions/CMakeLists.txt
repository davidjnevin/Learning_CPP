# TODO 14: Remove mysqrt.cxx from the list of sources

# Add a library called MathFunctions with sources MathFunctions.cxx
add_library(MathFunctions MathFunctions.cxx)

# TODO 7: Create a variable USE_MYMATH using option and set default to ON
option(USE_MYMATH "Use tutorial provided math implementation" ON)
if (USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")

  # library that just does sqrt
  add_library(SqrtLibrary STATIC
              mysqrt.cxx
              )

  # TODO 7: Link SqrtLibrary to tutorial_compiler_flags

  target_link_libraries(MathFunctions PUBLIC SqrtLibrary)
endif()

