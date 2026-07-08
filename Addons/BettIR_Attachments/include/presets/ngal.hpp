#define NGAL_BASE_INTENSITY 800

#define BETTIR_ILLUMINATOR_PRESET_NGAL(MRAD,POS,DIR,HIPWR) \
    ambient[] = {1,1,1}; \
    color[] = {1,1,1}; \
    coneFadeCoef = 16 * (1 - (MRAD / 200)); \
    dayLight = 0; \
    position = DIR ; \
    direction = POS ; \
    flareMaxDistance = 600 + (HIPWR * 800); \
    flareSize = 1.56; \
    intensity =  ((1.5 * HIPWR) + 1) * (NGAL_BASE_INTENSITY * (50 / MRAD) * (50 / MRAD)) ; \
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
        hardLimitStart = 240 + (HIPWR * 80); \
        hardLimitEnd = 480 + (HIPWR * 120); \
    };

