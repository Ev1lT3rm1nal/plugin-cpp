#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>

// DO NOT EDIT THIS PART!!!
#ifndef PLUGIN_LIBRARY_H /* --------------------------------------------------------------------------*/
#define PLUGIN_LIBRARY_H                                                                              //
                                      // DO NOT EDIT THIS PART!!!                                     //
typedef enum ProxyType {                                                                              //
    HTTPS,                                                                                            //
    SOCKS4,                                                                                           //
    SOCKS5,                                                                                           //
} ProxyType;                                                                                          //
                                                                                                      //
typedef enum ResultType {                                                                             //
    RETRY,                                                                                            //
    HIT,                                                                                              //
    BAD,                                                                                              //
} ResultType;                                                                                         //
                                                                                                      //
typedef struct ResultCheck {                                                                          //
    enum ResultType result_type;                                                                      //
    const char *extra_info;                                                                           //
} ResultCheck;                                                                                        //
                                                                                                      //
#endif //PLUGIN_LIBRARY_H ----------------------------------------------------------------------------*/