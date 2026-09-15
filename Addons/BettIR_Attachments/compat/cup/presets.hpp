#include "..\..\include\core.hpp"

// ============================================================
//  Presets for devices that exist only in CUP: the LLM01 and the LLM MKIII.
//  Shared hardware (AN/PEQ-15, AN/PEQ-2) lives in include\presets\.
//
//  Both LLMs have four states (see config.cpp): IR laser, IR laser + IR
//  illuminator, visible laser, visible laser + white light.
//
//  The illuminator is the same lamp as the white light (same lens, IR diode),
//  so the IR light preset is the white light preset with irLight=1 and there
//  is no divergence setting. The light numbers are CUP's own
//  (CUP_acc_LLM01_F / CUP_acc_LLM_Flashlight), so the "laser + light" state
//  looks exactly like CUP's light state.
//
//  TODO: tweak laser settings, right now they are copies of the AN/PEQ-15
// ============================================================

// ============================================================
//  LLM01 (IR laser + GREEN visible laser + integrated light, white or IR)
// ============================================================

#define BETTIR_IR_LASER_PRESET_LLM01 \
    irDotSize=0.035; \
    beamThickness=0.05; \
    beamColor[]={1000,1000,1000}; \
    dotColor[]={1000,1000,1000};

#define BETTIR_VIS_LASER_PRESET_LLM01_GREEN \
    isIR=0; \
    irDotSize=0.005; \
    beamThickness=0.00005; \
    beamColor[]={0,5000000,0}; \
    dotColor[]={0,3000,0};

// Copy of CUP_acc_LLM01_F >> ItemInfo >> FlashLight
#define BETTIR_WHITE_LIGHT_PRESET_LLM01 \
    color[]={180,156,120}; \
    ambient[]={0.9,0.78,0.6}; \
    intensity=20; \
    size=1; \
    innerAngle=20; \
    outerAngle=80; \
    coneFadeCoef=5; \
    position="flash dir"; \
    direction="flash"; \
    useFlare=1; \
    flareSize=1.4; \
    flareMaxDistance=100; \
    dayLight=0; \
    volumeShape="a3\data_f\VolumeLightFlashlight.p3d"; \
    scale[]={1,1,1}; \
    class Attenuation { \
        start=0.5; \
        constant=0; \
        linear=0; \
        quadratic=1.1; \
        hardLimitStart=20; \
        hardLimitEnd=30; \
    };

// Same lamp, IR diode
#define BETTIR_IR_LIGHT_PRESET_LLM01 \
    BETTIR_WHITE_LIGHT_PRESET_LLM01 \
    irLight=1;

// ============================================================
//  LLM MKIII (IR laser + RED visible laser + integrated light, white or IR)
// ============================================================

#define BETTIR_IR_LASER_PRESET_MKIII \
    irDotSize=0.035; \
    beamThickness=0.05; \
    beamColor[]={1000,1000,1000}; \
    dotColor[]={1000,1000,1000};

#define BETTIR_VIS_LASER_PRESET_MKIII_RED \
    isIR=0; \
    irDotSize=0.005; \
    beamThickness=0.00005; \
    beamColor[]={5000000,0,0}; \
    dotColor[]={3000,0,0};

// Copy of CUP_acc_LLM_Flashlight >> ItemInfo >> FlashLight
#define BETTIR_WHITE_LIGHT_PRESET_MKIII \
    color[]={180,160,130}; \
    ambient[]={0.9,0.81,0.7}; \
    intensity=100; \
    size=1; \
    innerAngle=5; \
    outerAngle=100; \
    coneFadeCoef=8; \
    position="flash dir"; \
    direction="flash"; \
    useFlare=1; \
    flareSize=1.4; \
    flareMaxDistance=100; \
    dayLight=0; \
    volumeShape="a3\data_f\VolumeLightFlashlight.p3d"; \
    scale[]={1,1,1}; \
    class Attenuation { \
        start=0; \
        constant=0.5; \
        linear=0.1; \
        quadratic=0.2; \
        hardLimitStart=27; \
        hardLimitEnd=34; \
    };

// Same lamp, IR diode
#define BETTIR_IR_LIGHT_PRESET_MKIII \
    BETTIR_WHITE_LIGHT_PRESET_MKIII \
    irLight=1;
