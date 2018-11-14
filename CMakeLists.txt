if( NOT FIPS_IMPORT)
  cmake_minimum_required(VERSION 3.5)
  get_filename_component(FIPS_ROOT_DIR "../fips" ABSOLUTE)
  include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

  fips_setup(PROJECT cpp-sample-project)
endif()

fips_include_directories(
	${CMAKE_SOURCE_DIR}/include
)

fips_add_subdirectory( lib/ )
fips_add_subdirectory( tools/ )

if( NOT FIPS_IMPORT )
  fips_add_subdirectory( test/unit/ )

  fips_finish()
endif()
