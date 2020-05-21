#include "client.h"

namespace Client {

AMClient::AMClient(QString username, QString UUID, QString accessToken, QString configDir, QObject *parent) :
    QObject(parent)
{
    (void)username;
    (void)UUID;
    (void)accessToken;
    (void)configDir;

}

}
