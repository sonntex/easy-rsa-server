#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int euid, egid, ret;

    euid = geteuid();

    ret = setreuid(euid, euid);
    if (ret)
        return ret;

    egid = getegid();

    ret = setregid(egid, egid);
    if (ret)
        return ret;

    ret = execve("./easyrsa-sign", argv, 0);
    if (ret)
        return ret;

    return 0;
}
