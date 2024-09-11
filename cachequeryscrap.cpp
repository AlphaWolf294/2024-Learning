// For any questions regarding this, feel free to message me on the platform you found it
// or alternatively, email me, Jeremiah Steninger, at jeremiahsteninger@gmail.com
// The intention of this was to read CPU Cache to determine OS, and then
// for Cache Line Checks. The pieces for that may get pushed to my Learning repo
// The project I am working on already contains a "WINDOWS" that covers literally all of this
// making this not exhaustive, but 'Reinventing the wheel'

// Define macros for handling platform-specific code
bool isWindows() { return false; }
bool isLinux() { return false; }
bool isMacOS() { return false; }

#ifdef _WIN32
bool isWindows() { return true; }
#endif

#ifdef __linux__
bool isLinux() { return true; }
#endif

#ifdef __APPLE__
bool isMacOS() { return true; }
#endif


bool isSupportedOS() {
    return isWindows() || isLinux() || isMacOS();
}

// Implementations of query functions
bool queryWindowsCache() {
    // Example implementation (placeholder)
    // For real implementation, replace with actual Windows API calls
    return isWindows(); // Placeholder
}

bool queryLinuxCache() {
    // Example implementation (placeholder)
    // For real implementation, replace with actual Linux sysconf calls
    return isLinux(); // Placeholder
}

bool queryMacOSCache() {
    // Example implementation (placeholder)
    // For real implementation, replace with actual macOS sysctlbyname calls
    return isMacOS(); // Placeholder
}
