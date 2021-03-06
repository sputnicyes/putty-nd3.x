/*
    Copyright 2011 Google Inc.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
 */


#ifndef SkTypeface_win_DEFINED
#define SkTypeface_win_DEFINED

#include "SkTypeface.h"

/**
 *  Like the other Typeface create methods, this returns a new reference to the
 *  corresponding typeface for the specified logfont. The caller is responsible
 *  for calling unref() when it is finished.
 */
SK_API SkTypeface* SkCreateTypefaceFromLOGFONT(const LOGFONT&);

/**
 *  Copy the LOGFONT associated with this typeface into the lf parameter. Note
 *  that the lfHeight will need to be set afterwards, since the typeface does
 *  not track this (the paint does).
 *  typeface may be NULL, in which case we return the logfont for the default font.
 */
SK_API void SkLOGFONTFromTypeface(const SkTypeface* typeface, LOGFONT* lf);

#endif

