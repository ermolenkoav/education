#include "version.h"
#include <string>
#include "lib.h"

std::string version() {
	std::string version = std::to_string(PROJECT_VERSION_MAJOR) " + " 
                              std::to_string(PROJECT_VERSION_MINOR) " + " 
		              std::to_string(PROJECT_VERSION_PATCH);
	return version;
}
