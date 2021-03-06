/*
 * VTFLib
 * Copyright (C) 2005-2010 Neil Jedrzejewski & Ryan Gregg

 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later
 * version.
 */

#ifndef VTFLIB_FILEREADER_H
#define VTFLIB_FILEREADER_H

#include "stdafx.h"
#include "Reader.h"

namespace VTFLib
{
	namespace IO
	{
		namespace Readers
		{
			class CFileReader : public IReader
			{
			private:
				vlFile hFile;
				vlChar *cFileName;

			public:
				CFileReader(const vlChar *cFileName);
				~CFileReader();

			public:
				virtual vlBool Opened() const;

				virtual vlBool Open();
				virtual vlVoid Close();

				virtual vlSSize GetStreamSize() const;
				virtual vlSSize GetStreamPointer() const;

				virtual vlSSize Seek(vlOffset lOffset, VLSeekMode uiMode);

				virtual vlBool Read(vlChar &cChar);
				virtual vlSize Read(vlVoid *vData, vlSize uiBytes);
			};
		}
	}
}

#endif
