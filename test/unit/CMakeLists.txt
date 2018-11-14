gtest_begin(sample)
    fips_src( . )
    fips_deps(sample)

    include_directories( ${TEST_DATA_DIR} )
gtest_end()
