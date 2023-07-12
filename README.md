# thirdparty
a reference to gmp from https://gmplib.org/

to solve the issue temporarily

CMake Error at dep_GMP-stamp/download-dep_GMP.cmake:170 (message):
  Each download failed!

    error: downloading 'https://gmplib.org/download/gmp/gmp-6.2.1.tar.bz2' failed
          status_code: 28
          status_string: "Timeout was reached"
          log:
          --- LOG BEGIN ---
            Trying 130.242.124.102:443...

  connect to 130.242.124.102 port 443 failed: Connection timed out

  Failed to connect to gmplib.org port 443 after 131501 ms: Couldn't connect
  to server

  Closing connection 0
          --- LOG END ---
