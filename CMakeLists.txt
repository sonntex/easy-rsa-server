cmake_minimum_required(VERSION 2.8.11)

install(PROGRAMS bin/easyrsa-ca bin/easyrsa-remote-ca bin/easyrsa-sign bin/easyrsa-remote-sign DESTINATION .)
install(DIRECTORY easy-rsa/easyrsa3/ DESTINATION easy-rsa USE_SOURCE_PERMISSIONS)

add_subdirectory(src)
