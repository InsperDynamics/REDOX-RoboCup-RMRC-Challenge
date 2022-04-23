/* 
 * This file has been automatically generated by the jrl-cmakemodules.
 * Please see https://github.com/jrl-umi3218/jrl-cmakemodules/blob/master/config.hh.cmake for details.
*/

#ifndef EIGENPY_CONFIG_HH
# define EIGENPY_CONFIG_HH

// Package version (header).
# define EIGENPY_VERSION_UNKNOWN_TAG 0 // Used to mention that the current version is unknown.
# define EIGENPY_VERSION "2.6.11"
# define EIGENPY_MAJOR_VERSION 2
# define EIGENPY_MINOR_VERSION 6
# define EIGENPY_PATCH_VERSION 11

#define EIGENPY_VERSION_AT_LEAST(major, minor, patch) (EIGENPY_MAJOR_VERSION>major || (EIGENPY_MAJOR_VERSION>=major && \
                                                             (EIGENPY_MINOR_VERSION>minor || (EIGENPY_MINOR_VERSION>=minor && \
                                                                                                     EIGENPY_PATCH_VERSION>=patch))))

#define EIGENPY_VERSION_AT_MOST(major, minor, patch) (EIGENPY_MAJOR_VERSION<major || (EIGENPY_MAJOR_VERSION<=major && \
                                                            (EIGENPY_MINOR_VERSION<minor || (EIGENPY_MINOR_VERSION<=minor && \
                                                                                                     EIGENPY_PATCH_VERSION<=patch))))

// Handle portable symbol export.
// Defining manually which symbol should be exported is required
// under Windows whether MinGW or MSVC is used.
//
// The headers then have to be able to work in two different modes:
// - dllexport when one is building the library,
// - dllimport for clients using the library.
//
// On Linux, set the visibility accordingly. If C++ symbol visibility
// is handled by the compiler, see: http://gcc.gnu.org/wiki/Visibility
# if defined _WIN32 || defined __CYGWIN__
// On Microsoft Windows, use dllimport and dllexport to tag symbols.
#  define EIGENPY_DLLIMPORT __declspec(dllimport)
#  define EIGENPY_DLLEXPORT __declspec(dllexport)
#  define EIGENPY_DLLLOCAL
# else
// On Linux, for GCC >= 4, tag symbols using GCC extension.
#  if __GNUC__ >= 4
#   define EIGENPY_DLLIMPORT __attribute__ ((visibility("default")))
#   define EIGENPY_DLLEXPORT __attribute__ ((visibility("default")))
#   define EIGENPY_DLLLOCAL  __attribute__ ((visibility("hidden")))
#  else
// Otherwise (GCC < 4 or another compiler is used), export everything.
#   define EIGENPY_DLLIMPORT
#   define EIGENPY_DLLEXPORT
#   define EIGENPY_DLLLOCAL
#  endif // __GNUC__ >= 4
# endif // defined _WIN32 || defined __CYGWIN__

# ifdef EIGENPY_STATIC
// If one is using the library statically, get rid of
// extra information.
#  define EIGENPY_DLLAPI
#  define EIGENPY_LOCAL
# else
// Depending on whether one is building or using the
// library define DLLAPI to import or export.
#  ifdef eigenpy_EXPORTS
#   define EIGENPY_DLLAPI EIGENPY_DLLEXPORT
#  else
#   define EIGENPY_DLLAPI EIGENPY_DLLIMPORT
#  endif // EIGENPY_EXPORTS
#  define EIGENPY_LOCAL EIGENPY_DLLLOCAL
# endif // EIGENPY_STATIC
#endif //! EIGENPY_CONFIG_HH
