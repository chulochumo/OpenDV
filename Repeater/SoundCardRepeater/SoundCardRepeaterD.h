/*
 *   Copyright (C) 2009-2012 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef	SoundCardRepeaterD_H
#define	SoundCardRepeaterD_H

#include "SoundCardRepeaterThread.h"
#include "SoundCardRepeaterDefs.h"

#include <wx/wx.h>

class CSoundCardRepeaterD {

public:
	CSoundCardRepeaterD(bool nolog, const wxString& logDir, const wxString& confDir, const wxString& audioDir, const wxString& name);
	~CSoundCardRepeaterD();

	bool init();

	void run();

private:
	wxString                  m_name;
	bool                      m_nolog;
	wxString                  m_logDir;
	wxString                  m_confDir;
	wxString                  m_audioDir;
	ISoundCardRepeaterThread* m_thread;

	bool createThread();
};

#endif
