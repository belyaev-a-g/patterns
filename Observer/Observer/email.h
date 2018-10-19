#ifndef EMAIL_H
#define EMAIL_H

#include "client.h"

class Email: public Client
{
public:
    Email();

    void update() override;
};

#endif // EMAIL_H
