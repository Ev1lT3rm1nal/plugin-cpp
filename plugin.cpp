#include "plugin.h"

extern "C" {

// Use lower_snake_case syntax for naming
__attribute__((unused)) const char *PLUGIN_NAME() {
    return "name_in_c++";
}

// Use semantic versioning (SemVer)
__attribute__((unused)) const char *PLUGIN_VERSION() {
    return "0.0.1";
}
__attribute__((unused)) enum ResultType
get_combo_result(char *user, char *pass, char *proxy, enum ProxyType proxy_type) {
    // Add your code here
    return BAD;
}

}