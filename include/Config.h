/**
* Global configuration for ORB-SLAM2.
* Set these values before creating the System object.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include <string>

namespace ORB_SLAM2
{
namespace Config
{
    // Output path for logging files (e.g., track_thread_poses.txt)
    // If empty, files are written to current directory
    extern std::string outputPath;
}
}

#endif // CONFIG_H
