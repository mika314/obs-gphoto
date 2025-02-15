#include <obs/obs-module.h>

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE("obs-gphoto", "en-US")

extern struct obs_source_info capture_preview_info;
extern struct obs_source_info timelapse_capture_info;

bool obs_module_load(void) {
    obs_register_source(&capture_preview_info);
    obs_register_source(&timelapse_capture_info);
    return true;
}
