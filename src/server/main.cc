#include "server.hh"

#include <gflags/gflags.h>

int main(int argc, char** argv)
{
    GFLAGS_NAMESPACE::ParseCommandLineFlags(&argc, &argv, true);

    // The game is on, Mrs Hudson!
    Server server;
    server.run();
}
