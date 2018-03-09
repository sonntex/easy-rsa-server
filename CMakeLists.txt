cmake_minimum_required(VERSION 2.8.11)

install(PROGRAMS bin/easyrsa-fetch bin/easyrsa-remote-fetch DESTINATION .)
install(DIRECTORY easy-rsa/easyrsa3/ DESTINATION easy-rsa USE_SOURCE_PERMISSIONS)

add_subdirectory(src)
