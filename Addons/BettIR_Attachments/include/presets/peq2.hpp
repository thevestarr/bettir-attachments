#include "..\core.hpp"

// AN/PEQ-2: IR aiming laser + IR illuminator only, no visible laser — hence no
// BETTIR_VIS_LASER_PRESET_PEQ2_*.
//
// TODO: tweak all settings, right now they are a copy of the AN/PEQ-15

// Intensity in low mode, 50 MRAD
#define PEQ2_ILLUMINATOR_BASE_INTENSITY 500

#define BETTIR_ILLUMINATOR_PRESET_PEQ2(MRAD,POS,DIR,HIPWR) \
    ambient[] = {1,1,1}; \
    color[] = {1,1,1}; \
    coneFadeCoef = 64 * (1 - (MRAD / 200)); \
    dayLight = 0; \
    position = POS ; \
    direction = DIR ; \
    flareMaxDistance = 800 + (HIPWR * 400); \
    flareSize = 1.4; \
    intensity =  ((1.4 * HIPWR) + 1) * (PEQ2_ILLUMINATOR_BASE_INTENSITY * (50 / MRAD) * (50 / MRAD)) ; \
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
        hardLimitStart = 220 + (HIPWR * 60); \
        hardLimitEnd = 400 + (HIPWR * 120); \
    };

#define BETTIR_IR_LASER_PRESET_PEQ2 \
    irDotSize=0.035; \
    beamThickness=0.05; \
    beamColor[]={1000,1000,1000}; \
    dotColor[]={1000,1000,1000};

#define BETTIR_IR_LASER_PRESET_PEQ2_LO \
    isIR=1; \
    irDotSize=0.005; \
    beamThickness=0.0; \
    beamColor[]={0,0,0}; \
    dotColor[]={100,100,100};
