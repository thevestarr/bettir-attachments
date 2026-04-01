#include "\bettir_Attachments\include\core.hpp"


// Intensity in low mode, 50 MRAD
#define DBAL_BASE_INTENSITY 300
#define DBAL_SCRIPTED_LASER_PARAMS {{1000,1000,1000},0,0,0.05,1}
#define DBAL_SCRIPTED_LASER_OFFSET {0,1,0}

// TODO: tweak power settings
#define BETTIR_ILLUMINATOR_PRESET_DBAL_A2(MRAD,POS,DIR,HIPWR) \
    ambient[] = {1,1,1}; \
    color[] = {1,1,1}; \
    coneFadeCoef = 64 * (1 - (MRAD / 200)); \
    dayLight = 0; \
    position = DIR ; \
    direction = POS ; \
    flareMaxDistance = 400 + (HIPWR * 600); \
    flareSize = 1.4; \
    intensity =  ((1.4 * HIPWR) + 1) * (DBAL_BASE_INTENSITY * (50 / MRAD) * (50 / MRAD)) ; \
    innerAngle = MRADTODEG(MRAD) ; \
    outerAngle = (MRADTODEG(MRAD) / 0.85); \
    irLight=1; \
    scale[] = {1,1,1}; \
    size = 1; \
    useFlare = 1; \
    class Attenuation { \
        constant = 4; \
        linear = 0; \
        quadratic = 0.065; \
        start = 10; \
        hardLimitStart = 160 + (HIPWR * 40); \
        hardLimitEnd = 240 + (HIPWR * 60); \
    };
