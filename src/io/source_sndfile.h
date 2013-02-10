/*
  Copyright (C) 2012 Paul Brossier <piem@aubio.org>

  This file is part of aubio.

  aubio is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  aubio is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with aubio.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef _AUBIO_SOURCE_SNDFILE_H
#define _AUBIO_SOURCE_SNDFILE_H

typedef struct _aubio_source_sndfile_t aubio_source_sndfile_t;
aubio_source_sndfile_t * new_aubio_source_sndfile(char_t * path, uint_t samplerate, uint_t block_size);
void aubio_source_sndfile_do(aubio_source_sndfile_t * s, fvec_t * read_to, uint_t * read);
void del_aubio_source_sndfile(aubio_source_sndfile_t * s);

uint_t aubio_source_sndfile_get_samplerate(aubio_source_sndfile_t * s);

#endif /* _AUBIO_SOURCE_SNDFILE_H */
