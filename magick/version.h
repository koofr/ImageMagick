/*
  Copyright 1999-2015 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.
  
  You may not use this file except in compliance with the License.
  obtain a copy of the License at
  
    http://www.imagemagick.org/script/license.php
  
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  MagickCore version methods.
*/
#ifndef _MAGICKCORE_VERSION_H
#define _MAGICKCORE_VERSION_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  Define declarations.
*/
#define MagickPackageName "ImageMagick"
#define MagickCopyright  "Copyright (C) 1999-2015 ImageMagick Studio LLC"
#define MagickSVNRevision  "18566:18576M"
#define MagickLibVersion  0x691
#define MagickLibVersionText  "6.9.1"
#define MagickLibVersionNumber  2,0,0
#define MagickLibAddendum  "-3"
#define MagickLibInterface  2
#define MagickLibMinInterface  2
#if defined(_WINDOWS)
#  if defined(_WIN64)
#    define MagickPlatform "x64"
#  else
#    define MagickPlatform "x86"
#  endif
#else
#define MagickPlatform  "x86_64"
#endif
#define MagickppLibVersionText  "6.9.1"
#define MagickppLibVersionNumber  6:0:0
#define MagickppLibAddendum  "-3"
#define MagickppLibInterface  6
#define MagickppLibMinInterface  6
#define MagickReleaseDate  "2015-05-17"
#define MagickChangeDate   "20150503"
#define MagickFeatures "DPC OpenMP"
#define MagickDelegates "bzlib djvu mpeg fftw fpx fontconfig freetype jbig jng jpeg lcms lzma openexr pango png ps tiff webp x xml zlib"
#define MagickHomeURL  "file:///usr/local/share/doc/ImageMagick-6/index.html"
#define MagickAuthoritativeLicense  \
  "http://www.imagemagick.org/script/license.php"
#define MagickAuthoritativeURL  "http://www.imagemagick.org"
#if (MAGICKCORE_QUANTUM_DEPTH == 8)
#define MagickQuantumDepth  "Q8"
#define MagickQuantumRange  "255"
#elif (MAGICKCORE_QUANTUM_DEPTH == 16)
#define MagickQuantumDepth  "Q16"
#define MagickQuantumRange  "65535"
#elif (MAGICKCORE_QUANTUM_DEPTH == 32)
#define MagickQuantumDepth  "Q32"
#define MagickQuantumRange  "4294967295"
#elif (MAGICKCORE_QUANTUM_DEPTH == 64)
#define MagickQuantumDepth  "Q64"
#define MagickQuantumRange  "18446744073709551615.0"
#else
#define MagickQuantumDepth  "Q?"
#define MagickQuantumRange  "?"
#endif
#define MagickVersion  \
  MagickPackageName " " MagickLibVersionText MagickLibAddendum " " \
  MagickQuantumDepth " " MagickPlatform " " MagickReleaseDate " " \
  MagickAuthoritativeURL

extern MagickExport char
  *GetMagickHomeURL(void);

extern MagickExport const char
  *GetMagickCopyright(void),
  *GetMagickDelegates(void),
  *GetMagickFeatures(void),
  *GetMagickLicense(void),
  *GetMagickPackageName(void),
  *GetMagickQuantumDepth(size_t *),
  *GetMagickQuantumRange(size_t *),
  *GetMagickReleaseDate(void),
  *GetMagickVersion(size_t *);

extern MagickExport void
  ListMagickVersion(FILE *);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif