//
//  BaseSetup.hpp
//  BaseSetup
//
//  Created by Robert Rowe on 12/30/25.
//

#include "Score.hpp"

class BaseSetup : public Score
{
public:
    BaseSetup(void);
   ~BaseSetup(void);
    
    void RouteAudio(double** mixChannels);
};
