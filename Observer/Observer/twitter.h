#ifndef TWITTER_H
#define TWITTER_H

#include "client.h"

class Twitter: public Client
{
public:
    Twitter();

    void update() override;
};

#endif // TWITTER_H
