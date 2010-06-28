/*
  Copyright (c) 1999 - 2010, Vodafone Group Services Ltd
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

  * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
  * Neither the name of the Vodafone Group Services Ltd nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#import "FavouriteListener.h"
#import "IPhoneFavouriteListener.h"

using namespace WFAPI;

class WFFavouriteListener : public FavouriteListener {
	
private:
	id<IPhoneFavouriteListener> m_iPhoneFavouriteListener;
	wf_uint32 m_requestID;
	
public:
	WFFavouriteListener();
	
	WFFavouriteListener(id<IPhoneFavouriteListener> m_iPhoneFavouriteListener);
	
	virtual ~WFFavouriteListener();
	
	void favouritesChanged();
	
	void favouritesSynced(RequestID requestID);

	void error(const AsynchronousStatus& status);
	
	void setIPhoneFavouriteListener(id<IPhoneFavouriteListener> iPhoneFavouriteListener);
	
	void setIPhoneFavouriteListener(RequestID requestID, id<IPhoneFavouriteListener> iPhoneFavouriteListener);
};
