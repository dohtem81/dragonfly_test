#include <hiredis.h>
#include <iostream>

int main()
{
    std::cout << "hello hiredis test ultimate" << std::endl;

    // connect to redis server
    redisContext *c = redisConnect("127.0.0.1", 6379);
    if (c == NULL || c->err) {
        if (c) {
            std::cerr << "Connection error: " << c->errstr << std::endl;
            redisFree(c);
        } else {
            std::cerr << "Connection error: can't allocate redis context" << std::endl;
        }
        return 1;
    }

    std::cout << "Connected to Redis server" << std::endl;

    // Clean up and free the context
    redisFree(c);

    return 0;
}
